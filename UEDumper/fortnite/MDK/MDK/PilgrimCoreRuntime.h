
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: BeatSyncedAnimRuntime
/// dependency: ClientPilot
/// dependency: CommonInput
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: EpicMediaBasePlayer
/// dependency: FMCoreRuntime
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayEventRouter
/// dependency: GameplayTags
/// dependency: GameplayTasks
/// dependency: Harmonix
/// dependency: HarmonixAudioReactivity
/// dependency: HarmonixMetasound
/// dependency: HarmonixMidi
/// dependency: HarmonixStems
/// dependency: InputCore
/// dependency: MetasoundEngine
/// dependency: MetasoundFrontend
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem
/// dependency: SlateCore
/// dependency: SparksCMS
/// dependency: SparksCoreRuntime
/// dependency: SparksCosmeticsRuntime
/// dependency: SparksDanceEmotesRuntime
/// dependency: SparksMidiParser
/// dependency: SparksMusicPlayspaceRuntime
/// dependency: UMG

/// Class /Script/PilgrimCoreRuntime.NetworkedMusicClockManager
/// Size: 0x0268 (0x0000A0 - 0x000308)
class UNetworkedMusicClockManager : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	SMember(FMulticastInlineDelegate)                  OnStartSongSyncCountdown                                    OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBeatEvent                                                 OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBarEvent                                                  OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	CMember(class UMusicClockComponent*)               OwnedMusicClockComponent                                    OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(TWeakObjectPtr<UAudioComponent*>)          WeakMetasoundPlayer                                         OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(TWeakObjectPtr<UAudioComponent*>)          WeakMetasoundMixer                                          OFFSET(get<T>, {0x168, 8, 0, 0})
	DMember(float)                                     ServerStartTime                                             OFFSET(get<float>, {0x170, 4, 0, 0})
	SMember(FSongTimestampData)                        CurrentSongServerTimestamp                                  OFFSET(getStruct<T>, {0x178, 72, 0, 0})
	SMember(FScalableFloat)                            TimeToStartSyncedClock                                      OFFSET(getStruct<T>, {0x1C0, 40, 0, 0})
	SMember(FTimerHandle)                              ClientLatencyCatchupTimerHandle                             OFFSET(getStruct<T>, {0x1E8, 8, 0, 0})
	SMember(FTimerHandle)                              ServerTimestampRecordingTimerHandle                         OFFSET(getStruct<T>, {0x1F0, 8, 0, 0})
	SMember(FScalableFloat)                            ServerTimestampRecordingFrequency                           OFFSET(getStruct<T>, {0x1F8, 40, 0, 0})
	SMember(FScalableFloat)                            MinDeltaForSeek                                             OFFSET(getStruct<T>, {0x220, 40, 0, 0})
	SMember(FScalableFloat)                            MinDeltaForSpeedAdjust                                      OFFSET(getStruct<T>, {0x248, 40, 0, 0})
	SMember(FScalableFloat)                            EndCorrectionDelta                                          OFFSET(getStruct<T>, {0x270, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedAdjustmentFactor                                       OFFSET(getStruct<T>, {0x298, 40, 0, 0})
	DMember(float)                                     CurrentSpeed                                                OFFSET(get<float>, {0x2C0, 4, 0, 0})
	SMember(FName)                                     MetasoundSpeedParamName                                     OFFSET(getStruct<T>, {0x2C4, 4, 0, 0})
	SMember(FName)                                     MetasoundSeekParamName                                      OFFSET(getStruct<T>, {0x2C8, 4, 0, 0})
	SMember(FName)                                     MetasoundTriggerName                                        OFFSET(getStruct<T>, {0x2CC, 4, 0, 0})
	SMember(FName)                                     MetasoundOuputPinName                                       OFFSET(getStruct<T>, {0x2D0, 4, 0, 0})
	CMember(class UMetasoundGeneratorHandle*)          MetasoundPlayerGeneratorHandle                              OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UMetasoundParameterPack*)            MetasoundPlayerSeekParamPack                                OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(EPilgrimSongPlayMethod)                    PlayMethod                                                  OFFSET(get<T>, {0x2E8, 1, 0, 0})
	SMember(FGameplayEventListenerHandle)              SongLoadedGameplayEventHandle                               OFFSET(getStruct<T>, {0x2EC, 28, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.NetworkedMusicClockManager.SetClientAudioComponentsToUse
	// void SetClientAudioComponentsToUse(class UAudioComponent* InMetasoundPlayer, class UAudioComponent* InMetasoundMixer);   // [0xbad8c74] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.NetworkedMusicClockManager.PlayServerAuthoritativeSong
	// void PlayServerAuthoritativeSong(class UPilgrimSongMetadata* SongToPlay);                                                // [0x656aec4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.NetworkedMusicClockManager.OnRep_ServerStartTime
	// void OnRep_ServerStartTime();                                                                                            // [0xbad620c] Final|Native|Private 
	// Function /Script/PilgrimCoreRuntime.NetworkedMusicClockManager.OnRep_CurrentSongServerTimestamp
	// void OnRep_CurrentSongServerTimestamp();                                                                                 // [0xbad61f8] Final|Native|Private 
	// Function /Script/PilgrimCoreRuntime.NetworkedMusicClockManager.OnBeat
	// void OnBeat(int32_t BeatNumber, int32_t BeatInBar);                                                                      // [0xbad6138] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.NetworkedMusicClockManager.OnBar
	// void OnBar(int32_t BarNumber);                                                                                           // [0xbad60a0] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.NetworkedMusicClockManager.GetOwnedMusicClock
	// class UMusicClockComponent* GetOwnedMusicClock();                                                                        // [0x3875c14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgramGuitarTiltOverdriveTrigger
/// Size: 0x0000 (0x000050 - 0x000050)
class UPilgramGuitarTiltOverdriveTrigger : public UInputTrigger
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimAbilityTask_WaitForBars
/// Size: 0x0020 (0x000078 - 0x000098)
class UPilgrimAbilityTask_WaitForBars : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FMulticastInlineDelegate)                  OnBarHit                                                    OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	DMember(int32_t)                                   BarCount                                                    OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	DMember(int32_t)                                   TargetBar                                                   OFFSET(get<int32_t>, {0x8C, 4, 0, 0})
	DMember(int32_t)                                   EndAfterHits                                                OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	DMember(int32_t)                                   CurrentIteration                                            OFFSET(get<int32_t>, {0x94, 4, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimAbilityTask_WaitForBars.WaitForBars
	// class UPilgrimAbilityTask_WaitForBars* WaitForBars(class UGameplayAbility* OwningAbility, int32_t BarsToWaitFor, int32_t LoopFor); // [0xbad8dc8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimAbilityTask_WaitForBeats
/// Size: 0x0020 (0x000078 - 0x000098)
class UPilgrimAbilityTask_WaitForBeats : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FMulticastInlineDelegate)                  OnBeatHit                                                   OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	DMember(int32_t)                                   BeatCount                                                   OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	DMember(int32_t)                                   TargetBeat                                                  OFFSET(get<int32_t>, {0x8C, 4, 0, 0})
	DMember(int32_t)                                   EndAfterHits                                                OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	DMember(int32_t)                                   CurrentIteration                                            OFFSET(get<int32_t>, {0x94, 4, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimAbilityTask_WaitForBeats.WaitForBeats
	// class UPilgrimAbilityTask_WaitForBeats* WaitForBeats(class UGameplayAbility* OwningAbility, int32_t BeatsToWaitFor, int32_t LoopFor); // [0xbad8f0c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimAbilityTask_WaitForSection
/// Size: 0x0028 (0x000078 - 0x0000A0)
class UPilgrimAbilityTask_WaitForSection : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FMulticastInlineDelegate)                  OnSectionStarted                                            OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FString)                                   TargetSectionName                                           OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	DMember(bool)                                      bWaitForNextSection                                         OFFSET(get<bool>, {0x98, 1, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimAbilityTask_WaitForSection.WaitForSection
	// class UPilgrimAbilityTask_WaitForSection* WaitForSection(class UGameplayAbility* OwningAbility, bool bShouldWaitForNextSection, FString SectionName); // [0xbad9050] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimAbilityTask_WaitForSection.OnSectionEvent
	// void OnSectionEvent(FString SectionName, float SectionStartMs, float SectionLengthMs);                                   // [0xbad6220] Final|Native|Private 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimActorPool
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class UPilgrimActorPool : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FPilgrimActorPoolParams)                   ActorPoolParams                                             OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TSet<AActor*>)                             AvailableActors                                             OFFSET(get<T>, {0x38, 80, 0, 0})
	CMember(TSet<AActor*>)                             InUseActors                                                 OFFSET(get<T>, {0x88, 80, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimActorPool.TryReturnItem
	// bool TryReturnItem(class AActor* ActorToPutBack);                                                                        // [0xbad8d38] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimActorPool.ReturnAllWidgets
	// void ReturnAllWidgets();                                                                                                 // [0xbad8c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimActorPool.InitPool
	// void InitPool(FPilgrimActorPoolParams PilgrimActorPoolParams);                                                           // [0xbad6010] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimActorPool.GetNumInUseItems
	// int32_t GetNumInUseItems();                                                                                              // [0xbad5ff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimActorPool.GetNumAvailableItems
	// int32_t GetNumAvailableItems();                                                                                          // [0xbad5fd8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimAnalytics
/// Size: 0x00A8 (0x0000A0 - 0x000148)
class UPilgrimAnalytics : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FMusicClockCatchUpData)                    CurrentCatchUpSession                                       OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
};

/// Class /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestLeaderboard
/// Size: 0x00E8 (0x000030 - 0x000118)
class UPilgrimAsyncAction_RequestLeaderboard : public UCancellableAsyncAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestLeaderboard.PilgrimRequestLeaderboard
	// class UPilgrimAsyncAction_RequestLeaderboard* PilgrimRequestLeaderboard(class UObject* WorldContextObject, FName SongShortName, FString SpotlightGroup, EPilgrimLeaderboardType LeaderboardType, class AFortPlayerController* RequestingPlayer, bool bFriendsOnly, bool bCenteredOnRequestingPlayer, int32_t Page, bool bIsSpotlightCompetition, bool bUseCache); // [0xbad6968] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestLeaderboard.LeaderboardRequestSuccessDelegate__DelegateSignature
	// void LeaderboardRequestSuccessDelegate__DelegateSignature(FPilgrimLeaderboardPage ResultPage, FPilgrimLeaderboardRequestParams RequestParams); // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestLeaderboard.LeaderboardRequestFailureDelegate__DelegateSignature
	// void LeaderboardRequestFailureDelegate__DelegateSignature(FString Error, FPilgrimLeaderboardRequestParams RequestParams); // [0x20c3f9c] MulticastDelegate|Public|Delegate 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestPersonalBest
/// Size: 0x0260 (0x000030 - 0x000290)
class UPilgrimAsyncAction_RequestPersonalBest : public UCancellableAsyncAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestPersonalBest.PilgrimRequestPersonalBest
	// class UPilgrimAsyncAction_RequestPersonalBest* PilgrimRequestPersonalBest(class UObject* WorldContextObject, class AFortPlayerController* RequestingPlayer, FUniqueNetIdRepl& PlayerAccountId, FName SongShortName, EPilgrimTrackType InstrumentType, int32_t BandSize, int32_t SetlistIndex, bool bUseCache); // [0xbad7788] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestPersonalBest.PersonalBestRequestSuccessDelegate__DelegateSignature
	// void PersonalBestRequestSuccessDelegate__DelegateSignature(FPilgrimPersonalBestResult PersonalBestResult, FPilgrimPersonalBestParams RequestParams); // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestPersonalBest.PersonalBestRequestFailureDelegate__DelegateSignature
	// void PersonalBestRequestFailureDelegate__DelegateSignature(FString Error, FPilgrimPersonalBestParams RequestParams);     // [0x20c3f9c] MulticastDelegate|Public|Delegate 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestPlayerFeed
/// Size: 0x00D0 (0x000030 - 0x000100)
class UPilgrimAsyncAction_RequestPlayerFeed : public UCancellableAsyncAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestPlayerFeed.RequestFeedSuccessDelegate__DelegateSignature
	// void RequestFeedSuccessDelegate__DelegateSignature(FPilgrimPlayerFeedResult FeedResult, FPilgrimPlayerFeedParams RequestParams); // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestPlayerFeed.RequestFeedFailureDelegate__DelegateSignature
	// void RequestFeedFailureDelegate__DelegateSignature(FText Error, FPilgrimPlayerFeedParams RequestParams);                 // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestPlayerFeed.PilgrimRequestPlayerFeed
	// class UPilgrimAsyncAction_RequestPlayerFeed* PilgrimRequestPlayerFeed(class UObject* WorldContextObject, class AFortPlayerController* RequestingPlayer, FGameplayTagQuery& SongQuery, FSongShortNameMatcher& SongShortNameMatcher, TArray<EPilgrimLeaderboardType>& Leaderboards, TArray<FUniqueNetIdRepl>& FriendIds, EPilgrimPlayerFeedSortType SortType, bool bAllScores, bool bRequirePlayerScore); // [0xbad7f24] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimBeatMarker
/// Size: 0x0060 (0x000290 - 0x0002F0)
class APilgrimBeatMarker : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(TWeakObjectPtr<APilgrimNowBar*>)           ParentNowBarPtr                                             OFFSET(get<T>, {0x298, 32, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimBeatMarker.SetupNumLanes
	// void SetupNumLanes(int32_t NumLanes);                                                                                    // [0x20c3f9c] Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimBeatMarker.OnPlacedOnTrack
	// void OnPlacedOnTrack();                                                                                                  // [0x21387d0] Native|Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimBeatMarker.OnBeatMarkerPassedNowBar
	// void OnBeatMarkerPassedNowBar();                                                                                         // [0x2ea9e40] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimTrackItemMgr
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class UPilgrimTrackItemMgr : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TWeakObjectPtr<APilgrimTrack*>)            Track                                                       OFFSET(get<T>, {0xA4, 8, 0, 0})
	CMember(class UPilgrimActorPool*)                  ItemPool                                                    OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TWeakObjectPtr<UPilgrimGame*>)             PilgrimGame                                                 OFFSET(get<T>, {0xB8, 8, 0, 0})
};

/// Class /Script/PilgrimCoreRuntime.PilgrimBeatMarkerTrackItemMgr
/// Size: 0x0018 (0x0000D8 - 0x0000F0)
class UPilgrimBeatMarkerTrackItemMgr : public UPilgrimTrackItemMgr
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TArray<class APilgrimBeatMarker*>)         ActiveBeatMarkers                                           OFFSET(get<T>, {0xD8, 16, 0, 0})
};

/// Class /Script/PilgrimCoreRuntime.PilgrimBeatValidatedAbility
/// Size: 0x0088 (0x000B48 - 0x000BD0)
class UPilgrimBeatValidatedAbility : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3024;

public:
	SMember(FScalableFloat)                            MaxTimeDelta                                                OFFSET(getStruct<T>, {0xB48, 40, 0, 0})
	SMember(FScalableFloat)                            MinClosenessToBeatMsForBonus                                OFFSET(getStruct<T>, {0xB70, 40, 0, 0})
	SMember(FScalableFloat)                            MinServerClosenessToBeatMsForBonus                          OFFSET(getStruct<T>, {0xB98, 40, 0, 0})
	CMember(class UClass*)                             AbilityToRunForOnBeat                                       OFFSET(get<T>, {0xBC0, 8, 0, 0})
	CMember(class UClass*)                             AbilityToRunForOffBeat                                      OFFSET(get<T>, {0xBC8, 8, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimBeatValidatedAbility.OnBeatAbilityActivated
	// void OnBeatAbilityActivated(bool bOnBeat);                                                                               // [0x20c3f9c] Event|Protected|BlueprintEvent 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition
/// Size: 0x00F0 (0x000028 - 0x000118)
class UPilgrimClientSettingRecordPartition : public UFortClientSettingRecordPartition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	DMember(float)                                     TrackSpeedMultiplier                                        OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     TrackBackgroundOpacity                                      OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      UseAlternative5LaneTouchLayout                              OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bUseGuitarLeftyFlip                                         OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(int32_t)                                   KeyboardAndMouseGeneralPresetIndex                          OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   KeyboardAndMouseExpertPresetIndex                           OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   ControllerGeneralPresetIndex                                OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   ControllerExpertPresetIndex                                 OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	SMember(FString)                                   SelectedGeneralControllerPreset                             OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	CMember(TMap<char, int32_t>)                       SelectedControllerPresetIndices                             OFFSET(get<T>, {0x78, 80, 0, 0})
	CMember(TMap<char, int32_t>)                       SelectedKeyboardAndMousePresetIndices                       OFFSET(get<T>, {0xC8, 80, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.SetUseAlternative5LaneTouchLayout
	// void SetUseAlternative5LaneTouchLayout(bool NewUseAlternative5LaneTouchLayout);                                          // [0xbadd6b8] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.SetTrackSpeedMultiplier
	// void SetTrackSpeedMultiplier(float NewMultiplier);                                                                       // [0xbadd62c] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.SetTrackBackgroundOpacity
	// void SetTrackBackgroundOpacity(float NewOpacity);                                                                        // [0xbadd5a0] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.SetSelectedGeneralControllerPreset
	// void SetSelectedGeneralControllerPreset(FString NewSelectedGeneralControllerPreset);                                     // [0xbadce40] Final|RequiredAPI|Native|Public 
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.SetKeyboardAndMouseGeneralPresetIndex
	// void SetKeyboardAndMouseGeneralPresetIndex(int32_t NewIndex);                                                            // [0xbadcdc0] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.SetKeyboardAndMouseExpertPresetIndex
	// void SetKeyboardAndMouseExpertPresetIndex(int32_t NewIndex);                                                             // [0xbadcd40] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.SetIsGuitarLeftyFlip
	// void SetIsGuitarLeftyFlip(bool bNewUseGuitarLeftyFlip);                                                                  // [0xbadccc0] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.SetControllerGeneralPresetIndex
	// void SetControllerGeneralPresetIndex(int32_t NewIndex);                                                                  // [0xbadcbc0] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.SetControllerExpertPresetIndex
	// void SetControllerExpertPresetIndex(int32_t NewIndex);                                                                   // [0xbadcb40] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.GetUseAlternative5LaneTouchLayout
	// bool GetUseAlternative5LaneTouchLayout();                                                                                // [0x8a397e0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.GetTrackSpeedMultiplier
	// float GetTrackSpeedMultiplier();                                                                                         // [0x6f63df0] Final|RequiredAPI|Native|Public|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.GetTrackBackgroundOpacity
	// float GetTrackBackgroundOpacity();                                                                                       // [0xbadb2b0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.GetSelectedGeneralControllerPreset
	// FString GetSelectedGeneralControllerPreset();                                                                            // [0xbadafe4] Final|Native|Public|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.GetKeyboardAndMouseGeneralPresetIndex
	// int32_t GetKeyboardAndMouseGeneralPresetIndex();                                                                         // [0x2ea9d88] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.GetKeyboardAndMouseExpertPresetIndex
	// int32_t GetKeyboardAndMouseExpertPresetIndex();                                                                          // [0x6b89cd0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.GetIsGuitarLeftyFlip
	// bool GetIsGuitarLeftyFlip();                                                                                             // [0xa6e4e6c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.GetControllerGeneralPresetIndex
	// int32_t GetControllerGeneralPresetIndex();                                                                               // [0x37e8c78] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.GetControllerExpertPresetIndex
	// int32_t GetControllerExpertPresetIndex();                                                                                // [0x3a008ac] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimCoreBandStateComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UPilgrimCoreBandStateComponent : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<FName>)                             OwnedSongs                                                  OFFSET(get<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimCoreBandStateComponent.OnRep_OwnedSongs
	// void OnRep_OwnedSongs();                                                                                                 // [0x35cf850] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimCoreBandStateComponent.GetSongAtIndex
	// class UPilgrimSongMetadata* GetSongAtIndex(int32_t Index);                                                               // [0xbadb160] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCoreBandStateComponent.GetNextSong
	// class UPilgrimSongMetadata* GetNextSong();                                                                               // [0x6a6c36c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCoreBandStateComponent.GetCurrentSong
	// class UPilgrimSongMetadata* GetCurrentSong();                                                                            // [0xaa4c9b4] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UPilgrimCorePlayerStateComponent : public USparksPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FMulticastInlineDelegate)                  OnPeripheralInputModeChanged                                OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	CMember(EPilgrimSongDifficulty)                    SongDifficulty                                              OFFSET(get<T>, {0xB8, 1, 0, 0})
	CMember(EPilgrimTrackType)                         InstrumentChoice                                            OFFSET(get<T>, {0xB9, 1, 0, 0})
	DMember(bool)                                      bIsReady                                                    OFFSET(get<bool>, {0xBA, 1, 0, 0})
	DMember(bool)                                      bPregameChoicesLocked                                       OFFSET(get<bool>, {0xBB, 1, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent.SetSongDifficulty
	// void SetSongDifficulty(EPilgrimSongDifficulty Difficulty);                                                               // [0xbadd520] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent.SetInstrumentChoice
	// void SetInstrumentChoice(EPilgrimTrackType Instrument);                                                                  // [0xbadcc40] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent.ServerSetIsReady
	// void ServerSetIsReady(bool bInIsReady);                                                                                  // [0xbadc9c0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent.OnRep_SongDifficulty
	// void OnRep_SongDifficulty(EPilgrimSongDifficulty PrevDifficulty);                                                        // [0xbadc0b8] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent.OnRep_IsReady
	// void OnRep_IsReady(bool bPrevIsReady);                                                                                   // [0xbadbefc] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent.OnRep_InstrumentChoice
	// void OnRep_InstrumentChoice(EPilgrimTrackType PrevInstrument);                                                           // [0xbadbe3c] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent.OnPeripheralModeChanged__DelegateSignature
	// void OnPeripheralModeChanged__DelegateSignature(EPilgrimPeripheralInputMode PlasticInstrumentInputMode);                 // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent.GetTrackTypeForGameplay
	// EPilgrimTrackType GetTrackTypeForGameplay();                                                                             // [0xbadaef4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent.GetSongDifficulty
	// EPilgrimSongDifficulty GetSongDifficulty();                                                                              // [0xbadb1f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent.GetPilgrimCorePlayerStateComponent
	// class UPilgrimCorePlayerStateComponent* GetPilgrimCorePlayerStateComponent(class APlayerState* PlayerState);             // [0xbadaf24] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent.GetIsReady
	// bool GetIsReady();                                                                                                       // [0x92d88e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent.GetInstrumentChoice
	// EPilgrimTrackType GetInstrumentChoice();                                                                                 // [0xbadaef4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimCore_BPFL
/// Size: 0x0000 (0x000028 - 0x000028)
class UPilgrimCore_BPFL : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimCore_BPFL.SparksInstrumentToPilgrimTrackType
	// EPilgrimTrackType SparksInstrumentToPilgrimTrackType(ESparksInstrumentType SparksType);                                  // [0xbadd824] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimCore_BPFL.ShouldUseTouchUIForLocalPlayer
	// bool ShouldUseTouchUIForLocalPlayer(class UObject* WorldContextObject);                                                  // [0xbadd738] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimCore_BPFL.PilgrimTrackTypeToSparksInstrument
	// ESparksInstrumentType PilgrimTrackTypeToSparksInstrument(EPilgrimTrackType PilgrimType);                                 // [0xbadc208] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimCore_BPFL.PilgrimTrackTypeToMidiTrackName
	// FString PilgrimTrackTypeToMidiTrackName(EPilgrimTrackType PilgrimType);                                                  // [0xbadc178] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimCore_BPFL.MidiTrackNameToPilgrimTrackType
	// EPilgrimTrackType MidiTrackNameToPilgrimTrackType(FString MidiTrackName);                                                // [0xbadb764] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimCore_BPFL.IsGuitarPeripheralAllowed
	// bool IsGuitarPeripheralAllowed(class UObject* WorldContextObject);                                                       // [0xbadb6e4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimCore_BPFL.InstrumentTypesAreEqual
	// bool InstrumentTypesAreEqual(ESparksInstrumentType SparksType, EPilgrimTrackType PilgrimType);                           // [0xbadb620] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimCore_BPFL.GetPlatformTimeSeconds
	// float GetPlatformTimeSeconds();                                                                                          // [0xbadafbc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimCustomSetlist
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UPilgrimCustomSetlist : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FMulticastInlineDelegate)                  OnLockedStateChanged                                        OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	CMember(TArray<FPilgrimCustomSetlistEntry>)        SetlistEntries                                              OFFSET(get<T>, {0xD0, 16, 0, 0})
	DMember(int32_t)                                   MaxSongsPerPlayer                                           OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
	DMember(bool)                                      bIsSetlistLocked                                            OFFSET(get<bool>, {0xE4, 1, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.SetlistLockedStateChangedDelegate__DelegateSignature
	// void SetlistLockedStateChangedDelegate__DelegateSignature(class UPilgrimCustomSetlist* Setlist, bool bIsLocked);         // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.ServerSetMaxSongsPerPlayer
	// void ServerSetMaxSongsPerPlayer(int32_t NewMax);                                                                         // [0xbadcac0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.ServerSetIsSetlistLocked
	// void ServerSetIsSetlistLocked(bool bInIsLocked);                                                                         // [0xbadca40] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.ServerRemoveSongForPlayer
	// void ServerRemoveSongForPlayer(FName SongShortName, class APlayerState* Player, bool bRemoveAll);                        // [0xbadc720] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.ServerRemoveSongAtIndex
	// void ServerRemoveSongAtIndex(int32_t Index, FName SongShortName, class APlayerState* Player);                            // [0xbadc500] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.ServerRemoveAllSongsForPlayer
	// void ServerRemoveAllSongsForPlayer(class APlayerState* Player);                                                          // [0xbadc480] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.ServerRemoveAllSongs
	// void ServerRemoveAllSongs();                                                                                             // [0xbadc46c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.ServerAddSongForPlayer
	// void ServerAddSongForPlayer(FName SongShortName, class APlayerState* Player);                                            // [0xbadc288] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.OnRep_SetlistEntries
	// void OnRep_SetlistEntries();                                                                                             // [0xbadc070] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.OnRep_MaxSongsPerPlayer
	// void OnRep_MaxSongsPerPlayer(int32_t PrevMax);                                                                           // [0xbadbfc8] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.HasPlayerAddedSong
	// bool HasPlayerAddedSong(FName SongShortName, class APlayerState* Player);                                                // [0xbadb430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.HasAnyoneAddedSong
	// bool HasAnyoneAddedSong(FName SongShortName, class APlayerState*& OutAddedByPlayer);                                     // [0xbadb2c4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.GetSongsAddedByPlayer
	// TArray<FName> GetSongsAddedByPlayer(class APlayerState* Player);                                                         // [0xbadb20c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.GetSetlistEntryAtIndex
	// void GetSetlistEntryAtIndex(int32_t Index, FName& OutSongShortName, class APlayerState*& OutAddedByPlayer);              // [0xbadb02c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.GetMaxSongsPerPlayer
	// int32_t GetMaxSongsPerPlayer();                                                                                          // [0x758b2e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.GetIsSetlistLocked
	// bool GetIsSetlistLocked();                                                                                               // [0xbadaf0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.FindEntriesForSongAndPlayer
	// void FindEntriesForSongAndPlayer(FName SongShortName, class APlayerState* Player, TArray<int32_t>& OutMatchingEntryIndicies); // [0xbadacb8] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.FindEntriesForSong
	// void FindEntriesForSong(FName SongShortName, TArray<int32_t>& OutMatchingEntryIndicies);                                 // [0xbadab38] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.FindEntriesForPlayer
	// void FindEntriesForPlayer(class APlayerState* Player, TArray<int32_t>& OutMatchingEntryIndicies);                        // [0xbadaa54] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.CanAddSongForPlayer
	// bool CanAddSongForPlayer(FName SongShortName, class APlayerState* Player, EPilgrimCantAddSongReason& OutReason, class APlayerState*& OutAddedByPlayer); // [0xbada7d8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimDanceSynchronizerComponent
/// Size: 0x0038 (0x0000F8 - 0x000130)
class UPilgrimDanceSynchronizerComponent : public USparksDanceSynchronizerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimDelayUntilTimeBeforeMidiTick
/// Size: 0x0030 (0x000030 - 0x000060)
class UPilgrimDelayUntilTimeBeforeMidiTick : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMulticastInlineDelegate)                  OnFinished                                                  OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(class UPilgrimGame*)                       PilgrimGame                                                 OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UObject*)                            Passthrough                                                 OFFSET(get<T>, {0x58, 8, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimDelayUntilTimeBeforeMidiTick.TimerTick
	// void TimerTick();                                                                                                        // [0xbae0e44] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimDelayUntilTimeBeforeMidiTick.PilgrimDelayUntilTimeBeforeMidiTick
	// class UPilgrimDelayUntilTimeBeforeMidiTick* PilgrimDelayUntilTimeBeforeMidiTick(class UObject* PassthroughObject, class UPilgrimGame* PilgrimGameContext, int32_t MidiTick, float SecondsBeforeTick, ECalibratedMusicTimebase Timebase); // [0xbae05a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimDelayUntilTimeBeforeMidiTick.OnPilgrimDelayUntilTimeBeforeMidiTickDelegate__DelegateSignature
	// void OnPilgrimDelayUntilTimeBeforeMidiTickDelegate__DelegateSignature(class UObject* PassthroughObject);                 // [0x20c3f9c] MulticastDelegate|Public|Delegate 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimEventRouterLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPilgrimEventRouterLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimEventRouterLibrary.GetGameplayEventRouter
	// class UGameplayEventRouterComponent* GetGameplayEventRouter(class AActor* ContextActor);                                 // [0xbadff30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimGame
/// Size: 0x0598 (0x0000A0 - 0x000638)
class UPilgrimGame : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1592;

public:
	SMember(FMulticastInlineDelegate)                  OnGameScoreUpdated                                          OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSongEnded                                                 OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAutoplayUpdated                                           OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDisableMissUpdated                                        OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	DMember(int32_t)                                   CurrentSeekMs                                               OFFSET(get<int32_t>, {0x100, 4, 0, 0})
	DMember(float)                                     JumpMarkerStart                                             OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     JumpMarkerEnd                                               OFFSET(get<float>, {0x108, 4, 0, 0})
	CMember(class UPilgrimScoringModel*)               ScoringModel                                                OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UPilgrimGameConfig*)                 PilgrimGameConfig                                           OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(class UPilgrimPlayerControllerComponent*)  OwnerControllerComponent                                    OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(class UAudioComponent*)                    MetasoundPlayer                                             OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(class UAudioComponent*)                    MetasoundMixer                                              OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(class UMusicClockComponent*)               MusicClock                                                  OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(class UMetasoundGeneratorHandle*)          MetasoundPlayerGeneratorHandle                              OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(class UMetasoundParameterPack*)            MetasoundPlayerSeekParamPack                                OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(class UPilgrimMediaStreamer*)              PilgrimMediaStreamer                                        OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(class APilgrimTrack*)                      MainTrack                                                   OFFSET(get<T>, {0x168, 8, 0, 0})
	CMember(class USoundBase*)                         MissSound                                                   OFFSET(get<T>, {0x170, 8, 0, 0})
	CMember(class UPilgrimGameEvaluator*)              PilgrimGameEvaluator                                        OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(TMap<EPilgrimTrackLane, FPilgrimGameInProgressSustain>) InProgressSustains                             OFFSET(get<T>, {0x180, 80, 0, 0})
	CMember(class UPilgrimSongData*)                   SongData                                                    OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(class UPilgrimMidiEventRouter*)            MidiEventRouter                                             OFFSET(get<T>, {0x580, 8, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.StopSong
	// void StopSong();                                                                                                         // [0xbae0e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.SetLocalPlayer
	// void SetLocalPlayer(class APlayerController* OwnerPC);                                                                   // [0xbae0c68] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.SetJumpMarkers
	// void SetJumpMarkers(int32_t FromMillisecnods, int32_t ToMilliseconds);                                                   // [0xbae0ba8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.SetDifficultyAndTrackType
	// void SetDifficultyAndTrackType(EPilgrimSongDifficulty Difficulty, EPilgrimTrackType TrackType);                          // [0xbae0ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.SeekToTime
	// void SeekToTime(int32_t Milliseconds);                                                                                   // [0xbae0a60] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.ProcessSwing
	// void ProcessSwing(EPilgrimTrackLane Lane, bool bIsPress);                                                                // [0xbae099c] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.PlaySongStreamed
	// void PlaySongStreamed(class UAudioComponent* InMetasoundPlayer, class UAudioComponent* InMetasoundMixer, class UMusicClockComponent* InMusicClock, class UPilgrimMediaStreamer* InStreamer); // [0xbae085c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.PlaySong
	// void PlaySong(class UAudioComponent* InMetasoundPlayer, class UAudioComponent* InMetasoundMixer, class UMusicClockComponent* InMusicClock, class UPilgrimSongMetadata* InSong); // [0xbae071c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.PilgrimGameSongEnded__DelegateSignature
	// void PilgrimGameSongEnded__DelegateSignature();                                                                          // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.PilgrimGameScoreUpdated__DelegateSignature
	// void PilgrimGameScoreUpdated__DelegateSignature(FPilgrimGameProgress& Score);                                            // [0x20c3f9c] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.PilgrimGameDoneProcessingInput__DelegateSignature
	// void PilgrimGameDoneProcessingInput__DelegateSignature();                                                                // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.PilgrimGameDisableMissUpdated__DelegateSignature
	// void PilgrimGameDisableMissUpdated__DelegateSignature(bool Enabled);                                                     // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.PilgrimGameAutoplayUpdated__DelegateSignature
	// void PilgrimGameAutoplayUpdated__DelegateSignature(bool Enabled);                                                        // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.OnMusicResumed
	// void OnMusicResumed();                                                                                                   // [0xbae058c] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.OnMusicReachedEndOfPlayback
	// void OnMusicReachedEndOfPlayback();                                                                                      // [0xbae0574] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType CurrentInputType);                                                            // [0xbae04f8] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.OnEndedByServer
	// void OnEndedByServer();                                                                                                  // [0xbae04e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.OnControlMappingsRebuilt
	// void OnControlMappingsRebuilt();                                                                                         // [0xbae04d0] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.IsInputSpecificGemShapesEnabled
	// bool IsInputSpecificGemShapesEnabled();                                                                                  // [0xbae04b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.IsGameEnded
	// bool IsGameEnded();                                                                                                      // [0xbae0498] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.IsDisableMissEnabled
	// bool IsDisableMissEnabled();                                                                                             // [0xbae0474] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.IsAutoplayEnabled
	// bool IsAutoplayEnabled();                                                                                                // [0xbae0450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetTotalSecondsSinceGameEnd
	// float GetTotalSecondsSinceGameEnd();                                                                                     // [0xbae0428] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetSongLengthMs
	// float GetSongLengthMs();                                                                                                 // [0xbae0408] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetSelectedTrackType
	// EPilgrimTrackType GetSelectedTrackType();                                                                                // [0xbae03f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetSelectedDifficulty
	// EPilgrimSongDifficulty GetSelectedDifficulty();                                                                          // [0xbae03d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetNumLanes
	// int32_t GetNumLanes();                                                                                                   // [0x3e62f08] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetMusicClock
	// class UMusicClockComponent* GetMusicClock();                                                                             // [0x6a6c320] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetMainTrack
	// class APilgrimTrack* GetMainTrack();                                                                                     // [0xbae03c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetLocalPlayerController
	// class APlayerController* GetLocalPlayerController();                                                                     // [0xbae039c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetKeyBoundToLane
	// FKey GetKeyBoundToLane(EPilgrimTrackLane Lane);                                                                          // [0xbae02f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetInputNameForLane
	// FName GetInputNameForLane(EPilgrimTrackLane Lane);                                                                       // [0xbae026c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetHitOffsetAverage
	// float GetHitOffsetAverage();                                                                                             // [0xbae0254] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetGemBreakForTrackDifficulty
	// bool GetGemBreakForTrackDifficulty(EPilgrimTrackType Track, EPilgrimSongDifficulty Difficulty, FPilgrimGemBreak& FoundBreak, float& BarsLeftInBreak, FPilgrimGemBreak& NextBreak, float& BarsTillNextBreak); // [0xbadffb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetGameConfigSettings
	// FPilgrimGameConfigSettings GetGameConfigSettings();                                                                      // [0xbadff14] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetCurrentSongTick
	// float GetCurrentSongTick(ECalibratedMusicTimebase InTimebase);                                                           // [0xbadfe7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetCurrentSongMs
	// float GetCurrentSongMs(ECalibratedMusicTimebase InTimebase);                                                             // [0xbadfdec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetCurrentODValue
	// float GetCurrentODValue();                                                                                               // [0xbadfdc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetCurrentMeasureBeatTick
	// FPilgrimSongMeasurePosition GetCurrentMeasureBeatTick();                                                                 // [0xbadfd48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.EndGame
	// void EndGame(bool bFadeOut, float FadeOutDurationSeconds);                                                               // [0xbadfc84] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.CheatSetPerformanceData
	// void CheatSetPerformanceData(FPilgrimCheatPerformanceArgument& PerformanceArgument);                                     // [0xbadfbec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.CheatSetJumpMarkers
	// void CheatSetJumpMarkers(FString FromTime, FString ToTime);                                                              // [0xbadf4b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.CheatEndSong
	// void CheatEndSong();                                                                                                     // [0xbadf488] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.ApplySettingsFromConfig
	// void ApplySettingsFromConfig(class UPilgrimGameConfig* GameConfig);                                                      // [0xbadf298] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.AddTrack
	// void AddTrack(class APilgrimTrack* Track);                                                                               // [0xbadf0d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimGameConfig
/// Size: 0x0390 (0x000030 - 0x0003C0)
class UPilgrimGameConfig : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	SMember(FPilgrimSongSettings)                      SongSettings                                                OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FPilgrimGameConfigSettings)                ConfigSettings                                              OFFSET(getStruct<T>, {0x40, 752, 0, 0})
	CMember(class USoundBase*)                         MissSound                                                   OFFSET(get<T>, {0x330, 8, 0, 0})
	DMember(float)                                     MaxHp                                                       OFFSET(get<float>, {0x338, 4, 0, 0})
	DMember(float)                                     DamagePerHit                                                OFFSET(get<float>, {0x33C, 4, 0, 0})
	CMember(TMap<EFortRarity, float>)                  WeaponRarityToNoteDamage                                    OFFSET(get<T>, {0x340, 80, 0, 0})
	CMember(TArray<FPilgrimStreakInfo>)                StreakDefinitions                                           OFFSET(get<T>, {0x390, 16, 0, 0})
	CMember(TArray<class UAnimBoneCompressionSettings*>) SideloadLipsyncAnim_BoneCompressionSettings               OFFSET(get<T>, {0x3A0, 16, 0, 0})
	CMember(TArray<class UAnimCurveCompressionSettings*>) SideloadLipsyncAnim_CurveCompressionSettings             OFFSET(get<T>, {0x3B0, 16, 0, 0})
};

/// Class /Script/PilgrimCoreRuntime.PilgrimInstrumentConfig
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UPilgrimInstrumentConfig : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TArray<FPilgrimScoreMultiplierInfo>)       ScoreMultiplierDefinitions                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TMap<EPilgrimSongDifficulty, FStarPercentageThresholds>) IndividualStarPercentageThresholds            OFFSET(get<T>, {0x48, 80, 0, 0})
	CMember(TMap<EPilgrimSongDifficulty, float>)       BaseGemScoreValue                                           OFFSET(get<T>, {0x98, 80, 0, 0})
};

/// Class /Script/PilgrimCoreRuntime.PilgrimGameDeveloperSettings
/// Size: 0x0018 (0x000030 - 0x000048)
class UPilgrimGameDeveloperSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FPilgrimSongSettings)                      SongOverrides                                               OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bEnforceSongEntitlements                                    OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Class /Script/PilgrimCoreRuntime.PilgrimGameEvaluator
/// Size: 0x0250 (0x000028 - 0x000278)
class UPilgrimGameEvaluator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 632;

public:
	CMember(class UPilgrimSongData*)                   CurrentSongData                                             OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UPilgrimSongMetadata*)               SongMetadata                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UPilgrimScoreDebugPrinter*)          DebugScoreListener                                          OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   ContextActor                                                OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UPilgrimGameConfig*)                 PilgrimGameConfig                                           OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UPilgrimScoringModel*)               ScoringModel                                                OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/PilgrimCoreRuntime.PilgrimGameUserSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UPilgrimGameUserSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EPilgrimSongDifficulty)                    SongDifficulty                                              OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(EPilgrimTrackType)                         SelectedInstrument                                          OFFSET(get<T>, {0x29, 1, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimGameUserSettings.SetSongDifficulty
	// void SetSongDifficulty(EPilgrimSongDifficulty NewDifficulty);                                                            // [0xbae36f4] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimGameUserSettings.SetSelectedInstrument
	// void SetSelectedInstrument(EPilgrimTrackType NewInstrument);                                                             // [0xbae3670] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimGameUserSettings.GetSongDifficulty
	// EPilgrimSongDifficulty GetSongDifficulty();                                                                              // [0x3e62840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGameUserSettings.GetSelectedInstrument
	// EPilgrimTrackType GetSelectedInstrument();                                                                               // [0xbae3524] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimGem
/// Size: 0x0088 (0x000290 - 0x000318)
class APilgrimGem : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FMulticastInlineDelegate)                  OnGemSmashFinished                                          OFFSET(getStruct<T>, {0x298, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnGemEnteredSlopWindow                                      OFFSET(getStruct<T>, {0x2A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnGemExitedSlopWindow                                       OFFSET(getStruct<T>, {0x2B8, 16, 0, 0})
	CMember(TWeakObjectPtr<APilgrimGemSmasher*>)       ParentSmasherPtr                                            OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(TWeakObjectPtr<UPilgrimGame*>)             ParentGamePtr                                               OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class APilgrimTrackSustain*)               RelatedSustain                                              OFFSET(get<T>, {0x2D8, 8, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimGem.UpdateGemInput
	// void UpdateGemInput();                                                                                                   // [0xbae3778] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimGem.OnPilgrimGemEvent__DelegateSignature
	// void OnPilgrimGemEvent__DelegateSignature(class APilgrimGem* Gem);                                                       // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimGem.OnLaneSet
	// void OnLaneSet(FTrackItemInfo& Gem);                                                                                     // [0xbae35dc] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimGem.OnGemSmashed
	// void OnGemSmashed();                                                                                                     // [0x2ea9e40] Native|Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimGem.OnGemPassed
	// void OnGemPassed();                                                                                                      // [0x21387d0] Native|Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimGem.OnGemInputUpdated
	// void OnGemInputUpdated(FKey BoundKey);                                                                                   // [0x20c3f9c] Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimGem.IsOverdriveGem
	// bool IsOverdriveGem();                                                                                                   // [0xb35c094] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGem.GetLane
	// EPilgrimTrackLane GetLane();                                                                                             // [0xbae33f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGem.FinishGemSmash
	// void FinishGemSmash();                                                                                                   // [0xbae19f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGem.AllowHitByInput
	// bool AllowHitByInput(bool bIsPressInput, EPilgrimTrackLane Lane);                                                        // [0xbae1910] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimGemAnalyzer
/// Size: 0x0138 (0x0000A0 - 0x0001D8)
class UPilgrimGemAnalyzer : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FMulticastInlineDelegate)                  OnGameplayEventStarted                                      OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	CMember(TMap<FPilgrimDifficultyTrackTypePair, FPilgrimGemDensityDataArray>) SongSectionGemDensityDataMap       OFFSET(get<T>, {0xC0, 80, 0, 0})
	CMember(TMap<FPilgrimDifficultyTrackTypePair, FPilgrimGemDensityDataArray>) GameplaySectionGemDensityDataMap   OFFSET(get<T>, {0x110, 80, 0, 0})
	SMember(FScalableFloat)                            MinimumEmptyBarsForBreak                                    OFFSET(getStruct<T>, {0x1B0, 40, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimGemAnalyzer.GetSongData
	// class UPilgrimSongData* GetSongData();                                                                                   // [0xbae3538] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemAnalyzer.GetPilgrimSongData
	// class UPilgrimSongData* GetPilgrimSongData(class UObject* WorldContextObject);                                           // [0xbae3490] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemAnalyzer.GetPilgrimGemAnalyzer
	// class UPilgrimGemAnalyzer* GetPilgrimGemAnalyzer(class UObject* WorldContextObject);                                     // [0xbae3410] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemAnalyzer.GetGemDensityDataForSongSection
	// FPilgrimGemDensityData GetGemDensityDataForSongSection(EPilgrimSongDifficulty Difficulty, EPilgrimTrackType TrackType, int32_t SectionIndexToFind); // [0xbae32dc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemAnalyzer.GetGemDensityDataForGameplaySection
	// FPilgrimGemDensityData GetGemDensityDataForGameplaySection(EPilgrimSongDifficulty Difficulty, EPilgrimTrackType TrackType, int32_t SectionIndexToFind); // [0xbae31c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemAnalyzer.GetGemDensityDataForAllSongSections
	// void GetGemDensityDataForAllSongSections(EPilgrimSongDifficulty Difficulty, EPilgrimTrackType TrackType, TArray<FPilgrimGemDensityData>& OutGemDensityData); // [0xbae2a74] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemAnalyzer.GetGemDensityDataForAllGameplaySections
	// void GetGemDensityDataForAllGameplaySections(EPilgrimSongDifficulty Difficulty, EPilgrimTrackType TrackType, TArray<FPilgrimGemDensityData>& OutGemDensityData); // [0xbae2328] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemAnalyzer.GetGemBreaks
	// void GetGemBreaks(EPilgrimTrackType TrackType, EPilgrimSongDifficulty Difficulty, TArray<FPilgrimGemBreak>& OutGemBreaks); // [0xbae1bdc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemAnalyzer.GetGemBreakForTrackDifficultyMs
	// bool GetGemBreakForTrackDifficultyMs(EPilgrimTrackType Track, EPilgrimSongDifficulty Difficulty, float SongMs, FPilgrimGemBreak& FoundBreak, FPilgrimGemBreak& NextBreak); // [0xbae1a20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimGemBreakListener
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UPilgrimGemBreakListener : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(class AActor*)                             ForActor                                                    OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(EPilgrimSongDifficulty)                    Difficulty                                                  OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(EPilgrimTrackType)                         TrackType                                                   OFFSET(get<T>, {0x41, 1, 0, 0})
	SMember(FPilgrimGemBreak)                          InBreak                                                     OFFSET(getStruct<T>, {0x44, 36, 0, 0})
	DMember(bool)                                      bIsLocalPlayer                                              OFFSET(get<bool>, {0x68, 1, 0, 0})
	SMember(FPilgrimGemBreak)                          LastPendingGemBreak                                         OFFSET(getStruct<T>, {0x6C, 36, 0, 0})
	DMember(float)                                     LastProcessedSongMs                                         OFFSET(get<float>, {0x90, 4, 0, 0})
	CMember(TWeakObjectPtr<UPilgrimSongData*>)         SongDataWeak                                                OFFSET(get<T>, {0x94, 8, 0, 0})
	DMember(bool)                                      bInitalized                                                 OFFSET(get<bool>, {0x9C, 1, 0, 0})
};

/// Class /Script/PilgrimCoreRuntime.PilgrimGemSmasher
/// Size: 0x0018 (0x000290 - 0x0002A8)
class APilgrimGemSmasher : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	CMember(class USplineComponent*)                   GemSplinePath                                               OFFSET(get<T>, {0x290, 8, 0, 0})
	DMember(float)                                     SplineStartInputKey                                         OFFSET(get<float>, {0x298, 4, 0, 0})
	DMember(float)                                     SplineOriginInputKey                                        OFFSET(get<float>, {0x29C, 4, 0, 0})
	DMember(float)                                     SplineEndInputKey                                           OFFSET(get<float>, {0x2A0, 4, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimGemSmasher.OverdriveFailedDuringSustainHold
	// void OverdriveFailedDuringSustainHold();                                                                                 // [0x20c3f9c] Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemSmasher.OnInputUpdated
	// void OnInputUpdated(FKey BoundKey);                                                                                      // [0x20c3f9c] Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemSmasher.OnInputReleased
	// void OnInputReleased();                                                                                                  // [0x2ea9e40] Native|Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemSmasher.OnInputPressed
	// void OnInputPressed();                                                                                                   // [0x21387d0] Native|Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemSmasher.EndSustainHoldEffect
	// void EndSustainHoldEffect();                                                                                             // [0x20c3f9c] Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemSmasher.BeginSustainHoldEffect
	// void BeginSustainHoldEffect(bool bIsOverdrive);                                                                          // [0x20c3f9c] Event|Public|BlueprintEvent 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimGemTrackItemMgr
/// Size: 0x00B8 (0x0000D8 - 0x000190)
class UPilgrimGemTrackItemMgr : public UPilgrimTrackItemMgr
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TMap<FPilgrimTrackItemKey, APilgrimGem*>)  ActiveGemsMap                                               OFFSET(get<T>, {0xD8, 80, 0, 0})
	CMember(TArray<class APilgrimGem*>)                ActiveGems                                                  OFFSET(get<T>, {0x128, 16, 0, 0})
	CMember(TSet<APilgrimGem*>)                        GemsInSlopWindow                                            OFFSET(get<T>, {0x138, 80, 0, 0})
	CMember(class UPilgrimSustainTrackItemMgr*)        SustainTrackItemMgr                                         OFFSET(get<T>, {0x188, 8, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimGemTrackItemMgr.OnGemSmashFinished
	// void OnGemSmashFinished(class APilgrimGem* Gem);                                                                         // [0xbae355c] Final|Native|Private 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimInputConfig
/// Size: 0x00C0 (0x000030 - 0x0000F0)
class UPilgrimInputConfig : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TMap<UInputAction*, EPilgrimTrackLane>)    InputActionToPilgrimLanePress                               OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TMap<UInputAction*, EPilgrimTrackLane>)    InputActionToPilgrimLaneRelease                             OFFSET(get<T>, {0x80, 80, 0, 0})
	CMember(class UInputAction*)                       OverdriveInputAction                                        OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UInputAction*)                       Overdrive5LaneInputAction                                   OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UInputAction*)                       GuitarStrumInputAction                                      OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class UInputAction*)                       Modulate                                                    OFFSET(get<T>, {0xE8, 8, 0, 0})
};

/// Class /Script/PilgrimCoreRuntime.PilgrimLeaderboardLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPilgrimLeaderboardLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardLibrary.SoloLeaderboardTypeFromInstrument
	// EPilgrimLeaderboardType SoloLeaderboardTypeFromInstrument(EPilgrimTrackType Instrument);                                 // [0xbae8f28] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardLibrary.LeaderboardTypeToString
	// FString LeaderboardTypeToString(EPilgrimLeaderboardType LeaderboardType);                                                // [0xbae8984] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardLibrary.LeaderboardTypeFromString
	// EPilgrimLeaderboardType LeaderboardTypeFromString(FString LeaderboardString);                                            // [0xbae82ac] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardLibrary.IsSoloLeaderboard
	// bool IsSoloLeaderboard(EPilgrimLeaderboardType LeaderboardType);                                                         // [0xbae8228] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardLibrary.IsBandLeaderboard
	// bool IsBandLeaderboard(EPilgrimLeaderboardType LeaderboardType);                                                         // [0xbae81a4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardLibrary.InstrumentFromSoloLeaderboardType
	// EPilgrimTrackType InstrumentFromSoloLeaderboardType(EPilgrimLeaderboardType LeaderboardType);                            // [0xbae8108] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardLibrary.GetInstrumentFromGameplayTag
	// EPilgrimTrackType GetInstrumentFromGameplayTag(FGameplayTag& InstrumentGametag);                                         // [0xbae7d74] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardLibrary.GetGameplayTagFromInstrument
	// FGameplayTag GetGameplayTagFromInstrument(EPilgrimTrackType Instrument);                                                 // [0xbae7ca4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardLibrary.BandSizeFromLeaderboardType
	// int32_t BandSizeFromLeaderboardType(EPilgrimLeaderboardType LeaderboardType);                                            // [0xbae79b8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardLibrary.BandLeaderboardTypeFromSize
	// EPilgrimLeaderboardType BandLeaderboardTypeFromSize(int32_t Size);                                                       // [0xbae793c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimLeaderboardManager
/// Size: 0x0458 (0x0000A0 - 0x0004F8)
class UPilgrimLeaderboardManager : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1272;

public:
	CMember(TMap<uint32_t, UPilgrimRequestFriendScoreWrapper*>) RequestCacheWrapperMap                             OFFSET(get<T>, {0x100, 80, 0, 0})
};

/// Class /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent
/// Size: 0x0120 (0x0000A0 - 0x0001C0)
class UPilgrimLeaderboardPlayerComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FMulticastInlineDelegate)                  OnFriendsSurpassed                                          OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBandFriendLeaderboardOptionChanged                        OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	DMember(bool)                                      bEnableBandFriendLeaderboardOption                          OFFSET(get<bool>, {0xC0, 1, 1, 0})
	DMember(float)                                     FriendPopupTimeSeconds                                      OFFSET(get<float>, {0x1A8, 4, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.SetFriendFeedCache
	// void SetFriendFeedCache(FPilgrimPlayerFeedResult& FeedResult);                                                           // [0xbae8e84] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.SetCurrentSetlistInfo
	// void SetCurrentSetlistInfo(FName SongShortName, EPilgrimTrackType Instrument);                                           // [0xbae8c9c] Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.ServerRequestSpotlightCompetitions
	// void ServerRequestSpotlightCompetitions(FPilgrimSpotlightCompetitionParams Params, int32_t RequestID);                   // [0xbae8bb0] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.ServerCachePlayerFriendsHistory
	// void ServerCachePlayerFriendsHistory(FPilgrimPlayerHistoryParams HistoryParams, TArray<FUniqueNetIdRepl> FriendAccountIds, int32_t RequestID); // [0xbae8a44] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.OnRep_ChangedBandFriendLeaderboardOption
	// void OnRep_ChangedBandFriendLeaderboardOption();                                                                         // [0xbae8a0c] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.OnFriendsSurpassed__DelegateSignature
	// void OnFriendsSurpassed__DelegateSignature(FPilgrimPlayerFeedResultEntry HighestFriendEntry, int32_t TotalFriendsSurpassed); // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.OnBandFriendLeaderboardOptionChanged__DelegateSignature
	// void OnBandFriendLeaderboardOptionChanged__DelegateSignature(bool bOptionEnabled);                                       // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.IsBandFriendLeaderboardEnabled
	// bool IsBandFriendLeaderboardEnabled();                                                                                   // [0xbae8188] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.GetSpotlightCompetitions
	// void GetSpotlightCompetitions(FPilgrimGetSpotlightParams& SpotlightParams, TArray<FPilgrimSpotlightCompetition>& OutCompetitions); // [0xbae8000] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.GetPostMatchFriendRankAndDelta
	// void GetPostMatchFriendRankAndDelta(int32_t FinalScore, int32_t& OutRank, int32_t& OutDelta);                            // [0xbae7e3c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.ClientRequestSpotlightCompetitionsComplete
	// void ClientRequestSpotlightCompetitionsComplete(FPilgrimSpotlightCompetitionParams Params, TArray<FPilgrimSpotlightCompetition> SpotlightCompetitions, int32_t RequestID); // [0xbae7b74] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.ClientCachePlayerFriendsHistoryComplete
	// void ClientCachePlayerFriendsHistoryComplete(FPilgrimPlayerHistoryParams HistoryParams, TArray<FPilgrimPlayerHistoryResult> Results, int32_t RequestID); // [0xbae7a38] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.CheckPlayerScoreForFriendSurpasser
	// void CheckPlayerScoreForFriendSurpasser(int32_t CurrentScore);                                                           // [0x9545c24] Native|Public|BlueprintCallable 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimMediaStreamer
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UPilgrimMediaStreamer : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(class UStemConfiguration*)                 BusStemConfiguration                                        OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UPilgrimSongMetadata*)               Song                                                        OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UFortBaseStreamingVideo*)            FortBaseStreaming                                           OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UStemmedMediaStreamAsset*)           StemmedMediaStreamAsset                                     OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UMidiFile*)                          MidiFile                                                    OFFSET(get<T>, {0xC0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStreamerPrepared                                          OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	CMember(EPilgrimStreamerStatus)                    StreamingStatus                                             OFFSET(get<T>, {0xD8, 1, 0, 0})
	CMember(class USkeleton*)                          LipSyncSkeleton                                             OFFSET(get<T>, {0xE0, 8, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimMediaStreamer.Stop
	// void Stop();                                                                                                             // [0xbaecd08] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMediaStreamer.PrepareSong
	// void PrepareSong(class UPilgrimSongMetadata* InSong);                                                                    // [0xbaec8f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMediaStreamer.PlaySong
	// void PlaySong();                                                                                                         // [0xbaec860] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMediaStreamer.OnVideoSuccess
	// void OnVideoSuccess();                                                                                                   // [0xbaec84c] Final|Native|Private 
	// Function /Script/PilgrimCoreRuntime.PilgrimMediaStreamer.OnVideoOpenTimeout
	// void OnVideoOpenTimeout();                                                                                               // [0xbaec158] Final|Native|Private 
	// Function /Script/PilgrimCoreRuntime.PilgrimMediaStreamer.OnVideoOpenFailed
	// void OnVideoOpenFailed(FString FailedUrl);                                                                               // [0xbaeba78] Final|Native|Private 
	// Function /Script/PilgrimCoreRuntime.PilgrimMediaStreamer.OnVideoOpened
	// void OnVideoOpened(FString OpenedUrl);                                                                                   // [0xbaec16c] Final|Native|Private 
	// Function /Script/PilgrimCoreRuntime.PilgrimMediaStreamer.OnVideoError
	// void OnVideoError(EBaseMediaTerminalErrorReason Reason);                                                                 // [0xbaeb9f8] Final|Native|Private 
	// Function /Script/PilgrimCoreRuntime.PilgrimMediaStreamer.OnStreamerPreparedEvent__DelegateSignature
	// void OnStreamerPreparedEvent__DelegateSignature();                                                                       // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimMediaStreamer.OnSongDataDownloaded
	// void OnSongDataDownloaded(class UCatalogData* CatalogData, bool bSuccess);                                               // [0xbaeb91c] Final|Native|Private 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimMidiEventRouter
/// Size: 0x03E0 (0x000028 - 0x000408)
class UPilgrimMidiEventRouter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1032;

public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance
/// Size: 0x0558 (0x000290 - 0x0007E8)
class APilgrimMusicBattleInstance : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2024;

public:
	SMember(FMulticastInlineDelegate)                  OnMusicBattleFinished                                       OFFSET(getStruct<T>, {0x290, 16, 0, 0})
	DMember(char)                                      Team                                                        OFFSET(get<char>, {0x2A0, 1, 0, 0})
	SMember(FPilgrimMusicBattleData)                   MusicBattleData                                             OFFSET(getStruct<T>, {0x2A8, 72, 0, 0})
	SMember(FName)                                     SongToPlayShortName                                         OFFSET(getStruct<T>, {0x2F0, 4, 0, 0})
	CMember(class UPilgrimSongMetadata*)               SongToPlay                                                  OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(EPilgrimSongDifficulty)                    SongDifficultyToPlay                                        OFFSET(get<T>, {0x300, 1, 0, 0})
	DMember(bool)                                      bClientHasReceivedSongToPlay                                OFFSET(get<bool>, {0x301, 1, 0, 0})
	SMember(FPilgrimSinglePlayerBattleData)            SinglePlayerBattleData                                      OFFSET(getStruct<T>, {0x308, 16, 0, 0})
	DMember(int32_t)                                   LocalPlayerIndex                                            OFFSET(get<int32_t>, {0x318, 4, 0, 0})
	CMember(TArray<class AFortPlayerStateAthena*>)     MusicBattlePlayers                                          OFFSET(get<T>, {0x320, 16, 0, 0})
	SMember(FMusicBattleSinglePlayerOptions)           SinglePlayerBattleOptions                                   OFFSET(getStruct<T>, {0x330, 8, 0, 0})
	CMember(class UPilgrimGameConfig*)                 PilgrimGameConfig                                           OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(EMusicBattleType)                          MusicBattleType                                             OFFSET(get<T>, {0x340, 1, 0, 0})
	CMember(class UAudioComponent*)                    LocalMetasoundPlayer                                        OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class UAudioComponent*)                    LocalMetasoundMixer                                         OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(TArray<FString>)                           DisableScoreCeilingForSongs                                 OFFSET(get<T>, {0x358, 16, 0, 0})
	DMember(int32_t)                                   SrvFIThrMs                                                  OFFSET(get<int32_t>, {0x368, 4, 0, 0})
	CMember(class UHarmonixAudioAnalyzerResultsProvider*) FFTAnalyzerResultsProvider                               OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(TMap<UPilgrimPlayerControllerComponent*, int32_t>) CurrentPlayerToIndexMap                             OFFSET(get<T>, {0x3E8, 80, 0, 0})
	CMember(class UPilgrimSongData*)                   SongData                                                    OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(TMap<AFortPlayerStateAthena*, UServerPilgrimGame*>) ServerPilgrimGameMap                               OFFSET(get<T>, {0x490, 80, 0, 0})
	CMember(TArray<class UPilgrimGemBreakListener*>)   GemBreakListeners                                           OFFSET(get<T>, {0x688, 16, 0, 0})
	CMember(TSet<UPilgrimPlayerControllerComponent*>)  PlayersWhoOwnCurrentSong                                    OFFSET(get<T>, {0x790, 80, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.UpdateVisibilityOfUI
	// void UpdateVisibilityOfUI();                                                                                             // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.UpdateScore
	// void UpdateScore();                                                                                                      // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.UpdateLocalPlayerScore
	// void UpdateLocalPlayerScore(FPilgrimGameProgress& LocalPlayerGameProgress);                                              // [0xbaecda4] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.SubtractFromBandScore
	// void SubtractFromBandScore(float Score);                                                                                 // [0xbaecd1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.ShouldUseTouchUIForLocalPlayer
	// bool ShouldUseTouchUIForLocalPlayer();                                                                                   // [0xbaecc94] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.SetupSinglePlayerBattle
	// void SetupSinglePlayerBattle();                                                                                          // [0xbaecc80] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.SetMusicBattleType
	// void SetMusicBattleType(EMusicBattleType NewMusicBattleType);                                                            // [0xbaecc04] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.ServerUserFinishedDisconnecting
	// void ServerUserFinishedDisconnecting();                                                                                  // [0x20c3f9c] Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.ServerOnTimedInputReceived
	// void ServerOnTimedInputReceived(class UPilgrimPlayerControllerComponent* PlayerControllerComponent, FPilgrimTimedInput& TimedInput); // [0xbaecb50] Final|Native|Protected|HasOutParms 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.ServerOnTeamQuickplayScoreChanged
	// void ServerOnTeamQuickplayScoreChanged(class UPilgrimPlayerControllerComponent* PlayerControllerComponent, FPilgrimGameProgress& NextScoreForCurrentPlayer, float LastInputTimeMs); // [0xbaec9c0] Final|Native|Protected|HasOutParms 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.ServerOnSongMidiFinishedLoading
	// void ServerOnSongMidiFinishedLoading();                                                                                  // [0x35cf850] Final|Native|Private 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.ServerOnClientUpdateReceived
	// void ServerOnClientUpdateReceived(class UPilgrimPlayerControllerComponent* PlayerControllerComponent, EMusicBattleClientUpdate ClientUpdate); // [0x8fc9afc] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.ServerFinishDisconnect
	// void ServerFinishDisconnect();                                                                                           // [0xbaec974] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.ServerAllPlayersHaveFinishedSong
	// void ServerAllPlayersHaveFinishedSong();                                                                                 // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.PlayerDisconnected
	// void PlayerDisconnected(class UPilgrimPlayerControllerComponent* ControllerComponent);                                   // [0xbaec874] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.OnTrackHiddenChanged
	// void OnTrackHiddenChanged(bool bHideTrack);                                                                              // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.OnStartedPlayingSong
	// void OnStartedPlayingSong(class UPilgrimSongMetadata* Song);                                                             // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.OnSongLoaded
	// void OnSongLoaded();                                                                                                     // [0xbaeb9e4] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.OnRep_SongToPlay
	// void OnRep_SongToPlay();                                                                                                 // [0xbaeb908] Final|Native|Private 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.OnRep_MusicBattleData
	// void OnRep_MusicBattleData(FPilgrimMusicBattleData& PreviousMusicBattleData);                                            // [0xbaeb86c] Final|Native|Protected|HasOutParms 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.OnPlayerReachedZeroHp
	// void OnPlayerReachedZeroHp(int32_t PlayerId);                                                                            // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.OnMusicBattleFinished__DelegateSignature
	// void OnMusicBattleFinished__DelegateSignature(EMusicBattleEndReason EndReason);                                          // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.OnClientReceivedSongToPlay
	// void OnClientReceivedSongToPlay(class UPilgrimSongMetadata* Song);                                                       // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.NetMulticast_DoMultiplayerDamageEffect
	// void NetMulticast_DoMultiplayerDamageEffect(int32_t DamagingPlayerId, int32_t DamagedPlayerId);                          // [0xbaeb7a8] Net|Native|Event|NetMulticast|Protected|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.NetMulticast_DoBeamClash
	// void NetMulticast_DoBeamClash();                                                                                         // [0x2ea9e40] Net|Native|Event|NetMulticast|Protected|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.NetMulticast_CheatSetPerformanceData
	// void NetMulticast_CheatSetPerformanceData(FString PerformanceArgument);                                                  // [0xbaeb0cc] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.NetMulticast_CheatSeekToTime
	// void NetMulticast_CheatSeekToTime(int32_t Milliseconds);                                                                 // [0x91271b0] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.NetMulticast_CheatEndSong
	// void NetMulticast_CheatEndSong();                                                                                        // [0x68e6b94] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.IsTwoPlayerBattleWithBeams
	// bool IsTwoPlayerBattleWithBeams();                                                                                       // [0xbaeb0a0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.IsSinglePlayerBattleAgainstPrimitiveAI
	// bool IsSinglePlayerBattleAgainstPrimitiveAI();                                                                           // [0xbaeb080] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.IsRestartAllowed
	// bool IsRestartAllowed();                                                                                                 // [0xbaeb044] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.IsPlayerInBattleParticipants
	// bool IsPlayerInBattleParticipants(class AFortPlayerStateAthena* PlayerState);                                            // [0xbaeafb8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.IsLocalPlayerRoaming
	// bool IsLocalPlayerRoaming();                                                                                             // [0xbaeaf94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.IsLocalPlayerInBattleParticipants
	// bool IsLocalPlayerInBattleParticipants();                                                                                // [0xbaeaf70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.IsHardStopped
	// bool IsHardStopped();                                                                                                    // [0xbaeaf4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.IsHardStopAllowed
	// bool IsHardStopAllowed();                                                                                                // [0xbaeaf28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.HandleNewFFTResults
	// void HandleNewFFTResults(FName OutputName, FMetaSoundOutput& Output);                                                    // [0xbaeadac] Final|Native|Private|HasOutParms|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetUnplayedTrackTypesInCurrentSong
	// TSet<EPilgrimTrackType> GetUnplayedTrackTypesInCurrentSong();                                                            // [0xbaead38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetTrackTypeForPlayer
	// EPilgrimTrackType GetTrackTypeForPlayer(class AFortPlayerStateAthena* Player);                                           // [0xbaeaca4] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetTeam
	// char GetTeam();                                                                                                          // [0xbaeac8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetStreakMultiplier
	// float GetStreakMultiplier(FPilgrimGameProgress& LocalPlayerGameProgress);                                                // [0xbaeabe4] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetStartingInstrumentForTrackInCurrentSong
	// ESparksInstrumentType GetStartingInstrumentForTrackInCurrentSong(EPilgrimTrackType TrackType);                           // [0xbaeab58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetSongPlayMethod
	// EPilgrimSongPlayMethod GetSongPlayMethod();                                                                              // [0xbaeab34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetSongDifficultyForPlayer
	// EPilgrimSongDifficulty GetSongDifficultyForPlayer(class AFortPlayerStateAthena* Player);                                 // [0xbaeaaa0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetScoreDensityForPlayer
	// float GetScoreDensityForPlayer(class APlayerState* PlayerState);                                                         // [0xbaeaa10] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetPlayerFromIndex
	// class AFortPlayerStateAthena* GetPlayerFromIndex(int32_t PlayerIndex);                                                   // [0xbaea984] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetPlayedTrackTypesInCurrentSong
	// TSet<EPilgrimTrackType> GetPlayedTrackTypesInCurrentSong();                                                              // [0xbaea910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetNextSongToPlay
	// class UPilgrimSongMetadata* GetNextSongToPlay();                                                                         // [0xbaea8e8] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetMusicClock
	// class UMusicClockComponent* GetMusicClock();                                                                             // [0xbaea8c4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetMusicBattleData
	// FPilgrimMusicBattleData GetMusicBattleData();                                                                            // [0xbaea8a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetLocalPilgrimGame
	// class UPilgrimGame* GetLocalPilgrimGame();                                                                               // [0x20c3f9c] Event|Public|BlueprintEvent|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetEventRouter
	// class UGameplayEventRouterComponent* GetEventRouter();                                                                   // [0xbaea884] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetDifficultyAndTrackType
	// void GetDifficultyAndTrackType(EPilgrimSongDifficulty& OutSongDifficulty, EPilgrimTrackType& OutSongTrackType);          // [0xbaea7ac] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetCurrentLocalPlayer
	// class AFortPlayerStateAthena* GetCurrentLocalPlayer();                                                                   // [0xbaea788] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetConfig
	// class UPilgrimGameConfig* GetConfig();                                                                                   // [0x991d160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.FireLocalPlayerBeam
	// void FireLocalPlayerBeam(EMusicBattleProjectileType ProjectileType);                                                     // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.DoMultiplayerDamage
	// void DoMultiplayerDamage(int32_t DamagingPlayerId, int32_t DamagedPlayerId, FPilgrimGameProgress& GameUpdateThatDidDamage); // [0x20c3f9c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.DoEndGameCheat
	// void DoEndGameCheat(bool bIsWin);                                                                                        // [0xbaea6d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.Debug_IsTrackHidden
	// bool Debug_IsTrackHidden();                                                                                              // [0x2f99024] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.ConnectFFTAnalysis
	// void ConnectFFTAnalysis(class UAudioComponent* AudioComponentWithAnalyzer);                                              // [0xbaea654] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.ClientFireSongEndedAnalyticsForCurrentSong
	// void ClientFireSongEndedAnalyticsForCurrentSong();                                                                       // [0xbaea640] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.Client_DoMultiplayerDamageEffect
	// void Client_DoMultiplayerDamageEffect(int32_t DamagingPlayerId, int32_t DamagedPlayerId);                                // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.Client_DoMultiplayerBeamClash
	// void Client_DoMultiplayerBeamClash();                                                                                    // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.BroadcastMBIEventStarted
	// void BroadcastMBIEventStarted();                                                                                         // [0xbaea5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.BroadcastMBIEventFinished
	// void BroadcastMBIEventFinished();                                                                                        // [0xbaea5bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.AddToBandScore
	// void AddToBandScore(float Score);                                                                                        // [0xbaea534] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.AddMusicBattlePlayers
	// void AddMusicBattlePlayers(TArray<AFortPlayerStateAthena*>& NewPlayers);                                                 // [0xbaea448] Final|Native|Public|HasOutParms 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimNowBar
/// Size: 0x0060 (0x000290 - 0x0002F0)
class APilgrimNowBar : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(class USplineComponent*)                   BeatMarkerSplinePath                                        OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(TMap<EPilgrimTrackLane, AActor*>)          LaneToSmasherMap                                            OFFSET(get<T>, {0x298, 80, 0, 0})
	CMember(TWeakObjectPtr<UPilgrimGame*>)             PilgrimGame                                                 OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimNowBar.SetGemSmasher
	// void SetGemSmasher(EPilgrimTrackLane Lane, class UChildActorComponent* Smasher);                                         // [0xbaeea0c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimNowBar.OnPilgrimGameSet
	// void OnPilgrimGameSet();                                                                                                 // [0x20c3f9c] Event|Public|BlueprintEvent 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimObjectiveProcessorBase
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPilgrimObjectiveProcessorBase : public UFortObjectiveProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimObjectiveProcessor_AccumulateStars
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPilgrimObjectiveProcessor_AccumulateStars : public UPilgrimObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimObjectiveProcessor_Note
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPilgrimObjectiveProcessor_Note : public UPilgrimObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimObjectiveProcessor_OverdriveComplete
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPilgrimObjectiveProcessor_OverdriveComplete : public UPilgrimObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimObjectiveProcessor_ScoreEvent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPilgrimObjectiveProcessor_ScoreEvent : public UPilgrimObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimObjectiveProcessor_SetlistComplete
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPilgrimObjectiveProcessor_SetlistComplete : public UFortObjectiveProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimObjectiveProcessor_SongCompleted
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPilgrimObjectiveProcessor_SongCompleted : public UPilgrimObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimObjectiveProcessor_SongStarted
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPilgrimObjectiveProcessor_SongStarted : public UPilgrimObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimPartitionInitializer
/// Size: 0x0040 (0x000070 - 0x0000B0)
class UPilgrimPartitionInitializer : public UFortClientSettingRecordPartitionInitializer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TWeakObjectPtr<UClass*>)                   PilgrimPresetSelectorClass                                  OFFSET(get<T>, {0x70, 32, 0, 0})
	CMember(TWeakObjectPtr<UPilgrimPresetConfiguration*>) PilgrimPresetConfiguration                               OFFSET(get<T>, {0x90, 32, 0, 0})
};

/// Class /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerComponent
/// Size: 0x00A0 (0x0000A0 - 0x000140)
class UPilgrimPerformanceTrackerComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(TMap<EPilgrimTrackLane, FPilgrimPerformanceTrackerData>) SongPerformanceData                           OFFSET(get<T>, {0xA8, 80, 0, 0})
	CMember(class UPilgrimSongMetadata*)               SongMetadata                                                OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(class APilgrimTrack*)                      MainTrack                                                   OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(class UPilgrimGame*)                       PilgrimGame                                                 OFFSET(get<T>, {0x108, 8, 0, 0})
	SMember(FGameplayEventListenerHandle)              OverdriveActiveEventHandle                                  OFFSET(getStruct<T>, {0x110, 28, 0, 0})
	DMember(int32_t)                                   MaxStreak                                                   OFFSET(get<int32_t>, {0x12C, 4, 0, 0})
	DMember(int32_t)                                   CurrentStreak                                               OFFSET(get<int32_t>, {0x130, 4, 0, 0})
	DMember(float)                                     TimeInOverdriveMs                                           OFFSET(get<float>, {0x134, 4, 0, 0})
	DMember(bool)                                      InOverdrive                                                 OFFSET(get<bool>, {0x138, 1, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerComponent.HandleOverdriveActiveChangedEvent
	// void HandleOverdriveActiveChangedEvent(FPilgrimEvent_Scoring_OverdriveActiveChanged& Payload);                           // [0xbaee97c] Final|Native|Protected|HasOutParms 
	// Function /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerComponent.HandleOnSongEnded
	// void HandleOnSongEnded();                                                                                                // [0xbaee968] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerComponent.GetTotalDeviation
	// float GetTotalDeviation(ECalibratedMusicTimebase Timebase);                                                              // [0xbaee8d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerComponent.GetSampleDeviation
	// float GetSampleDeviation(TArray<float>& Samples, bool IsPopulation);                                                     // [0xbaee718] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerComponent.GetSampleAverage
	// float GetSampleAverage(TArray<float>& Samples);                                                                          // [0xbaee63c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerComponent.GetResultData
	// FPilgrimEvent_Scoring_PerformanceDataResult GetResultData(ECalibratedMusicTimebase Timebase);                            // [0xbaee518] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerComponent.GetLaneOffsets
	// TArray<float> GetLaneOffsets(EPilgrimTrackLane Lane, ECalibratedMusicTimebase Timebase);                                 // [0xbaee430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerComponent.GetAverage
	// float GetAverage(ECalibratedMusicTimebase Timebase);                                                                     // [0xbaee3a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerSaveData
/// Size: 0x0050 (0x000028 - 0x000078)
class UPilgrimPerformanceTrackerSaveData : public USaveGame
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<EPilgrimTrackLane, FPilgrimPerformanceTrackerData>) SongPerformanceData                           OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent
/// Size: 0x0288 (0x0000A0 - 0x000328)
class UPilgrimPlayerControllerComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	SMember(FMulticastInlineDelegate)                  OnServerTimedInputReceived                                  OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnServerSyncHeartbeatMessageReceived                        OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActivateInputPreset                                       OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDesiredInputPresetChanged                                 OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInputSettingsChanged                                      OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMusicBattleClientUpdateReceived                           OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStateMachineMessageReceived                               OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	CMember(class UDataTable*)                         DefaultUnbindsDataTable                                     OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UInputAction*)                       CycleInputsInputAction                                      OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(class UInputAction*)                       CycleLanesInputAction                                       OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(class UInputAction*)                       EmotePickerInputAction                                      OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(TMap<char, UFortInputMappingContext*>)     FallbackKeyboardLaneInputMappingConfigs                     OFFSET(get<T>, {0x140, 80, 0, 0})
	CMember(TMap<char, UFortInputMappingContext*>)     FallbackControllerLaneInputMappingConfigs                   OFFSET(get<T>, {0x190, 80, 0, 0})
	CMember(class UFortInputMappingContext*)           KeyboardAsPeripheralGuitarBeatmatchIMC                      OFFSET(get<T>, {0x1E0, 8, 0, 0})
	CMember(class UFortInputMappingContext*)           PeripheralGuitarBeatmatchIMC                                OFFSET(get<T>, {0x1E8, 8, 0, 0})
	CMember(TMap<char, FPilgrimLaneInputMappingConfig>) LaneInputMappingConfigs                                    OFFSET(get<T>, {0x1F0, 80, 0, 0})
	SMember(FPilgrimTouchBrushesMappingConfig)         TouchBrushesConfig                                          OFFSET(getStruct<T>, {0x240, 16, 0, 0})
	DMember(char)                                      SelectedNumInputLanes                                       OFFSET(get<char>, {0x250, 1, 0, 0})
	CMember(class UFortInputMappingContext*)           SelectedPCBeatmatchIMC                                      OFFSET(get<T>, {0x258, 8, 0, 0})
	CMember(class UFortInputMappingContext*)           SelectedConsoleBeatmatchIMC                                 OFFSET(get<T>, {0x260, 8, 0, 0})
	CMember(class UPilgrimGameUserSettings*)           PilgrimGameUserSettings                                     OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UPilgrimPresetConfiguration*)        PilgrimPresetConfiguration                                  OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(TWeakObjectPtr<UPilgrimGame*>)             ClientPilgrimGame                                           OFFSET(get<T>, {0x318, 8, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.Solo_SendRequestToReplayPreviousSong
	// void Solo_SendRequestToReplayPreviousSong();                                                                             // [0xbaf050c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.Solo_SendRequestToPlayNextSong
	// void Solo_SendRequestToPlayNextSong();                                                                                   // [0xbaf04f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.Solo_SendRequestToLeaveStage
	// void Solo_SendRequestToLeaveStage();                                                                                     // [0xbaf04e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.SetNumInputLanes
	// void SetNumInputLanes(char NumLanes);                                                                                    // [0xbaf0464] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.SetDesiredInputMappingContext
	// void SetDesiredInputMappingContext(class UFortInputMappingContext* NewContext, EHardwareDevicePrimaryType DeviceType, bool bShouldUpdateSettings); // [0xbaf0368] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.ServerSendTimedInput
	// void ServerSendTimedInput(FPilgrimTimedInput TimedInput);                                                                // [0xbaf02a8] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.ServerSendSyncHeartbeatMessage
	// void ServerSendSyncHeartbeatMessage();                                                                                   // [0x19a79c8] Net|Native|Event|Protected|NetServer 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.ServerHandleUpdateMusicBattle
	// void ServerHandleUpdateMusicBattle(EMusicBattleClientUpdate MusicBattleUpdate);                                          // [0xbaf020c] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.ServerHandleStateMachineRequest
	// void ServerHandleStateMachineRequest(EPilgrimStateMachineMessage StateMachineMessage);                                   // [0xb69986c] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.SendUpdateToMusicBattle
	// void SendUpdateToMusicBattle(EMusicBattleClientUpdate MusicBattleUpdate);                                                // [0xbaf018c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.SendRequestToStopAndSkipPostGame
	// void SendRequestToStopAndSkipPostGame();                                                                                 // [0xbaf0178] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.SendRequestToRestartSong
	// void SendRequestToRestartSong();                                                                                         // [0xbaf0164] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.OnServerTimedInputReceived__DelegateSignature
	// void OnServerTimedInputReceived__DelegateSignature(class UPilgrimPlayerControllerComponent* PlayerControllerComponent, FPilgrimTimedInput& TimedInput); // [0x20c3f9c] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.OnServerSyncHeartbeatMessageReceived__DelegateSignature
	// void OnServerSyncHeartbeatMessageReceived__DelegateSignature(class UPilgrimPlayerControllerComponent* PlayerControllerComponent); // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.OnPlayerSentStateMachineMessage__DelegateSignature
	// void OnPlayerSentStateMachineMessage__DelegateSignature(class UPilgrimPlayerControllerComponent* PlayerControllerComponent, EPilgrimStateMachineMessage StateMachineMessage); // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.OnPilgrimGameStart
	// void OnPilgrimGameStart(class UPilgrimGame* PilgrimGame);                                                                // [0xa0e2f34] Native|Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.OnPilgrimGameEnd
	// void OnPilgrimGameEnd(class UPilgrimGame* PilgrimGame);                                                                  // [0xbaf00e0] Native|Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.OnMusicBattleClientUpdateReceived__DelegateSignature
	// void OnMusicBattleClientUpdateReceived__DelegateSignature(class UPilgrimPlayerControllerComponent* PlayerControllerComponent, EMusicBattleClientUpdate MusicBattleUpdate); // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.OnInputSettingsChanged__DelegateSignature
	// void OnInputSettingsChanged__DelegateSignature();                                                                        // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.OnEmotePicker
	// void OnEmotePicker();                                                                                                    // [0xbaf00cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.Multiplayer_SendRequestToLeaveStage
	// void Multiplayer_SendRequestToLeaveStage();                                                                              // [0xbaf00b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.LoadInputConfigurationFromPartition
	// void LoadInputConfigurationFromPartition();                                                                              // [0xbaf00a4] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.IsUsingGamepad
	// bool IsUsingGamepad();                                                                                                   // [0xbaf0080] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.IsLocallyControlled
	// bool IsLocallyControlled();                                                                                              // [0xbaf005c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.IsForceGuitarPeripheralModeOnCheat
	// bool IsForceGuitarPeripheralModeOnCheat();                                                                               // [0xbaf0044] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.InputPresetEvent__DelegateSignature
	// void InputPresetEvent__DelegateSignature(class AFortPlayerController* FortPlayerController, class UFortInputMappingContext* InputMappingContext); // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.HasConnectedPeripheral
	// bool HasConnectedPeripheral(EPilgrimPeripheralInputMode Peripheral);                                                     // [0xbaeffb8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.HandleOnInputDeviceChanged
	// void HandleOnInputDeviceChanged(FPlatformUserId UserId, FInputDeviceId DeviceID);                                        // [0xbaefecc] Final|Native|Private 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.GetTouchBrushForInputAction
	// bool GetTouchBrushForInputAction(FSlateBrush& OutBrush, class UInputAction* InputAction);                                // [0xbaefca8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.GetSelectedPreset
	// class UFortInputMappingContext* GetSelectedPreset();                                                                     // [0xbaefc00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.GetSelectedPCBeamatchInputMappingContext
	// class UFortInputMappingContext* GetSelectedPCBeamatchInputMappingContext();                                              // [0xbaefbe8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.GetSelectedConsoleBeamatchInputMappingContext
	// class UFortInputMappingContext* GetSelectedConsoleBeamatchInputMappingContext();                                         // [0xbaefbd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.GetPilgrimGameUserSettings
	// class UPilgrimGameUserSettings* GetPilgrimGameUserSettings();                                                            // [0xbaefbac] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.GetPilgrimClientSettingRecordPartition
	// class UPilgrimClientSettingRecordPartition* GetPilgrimClientSettingRecordPartition();                                    // [0xbaefafc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.GetNumRelevantInputPresets
	// int32_t GetNumRelevantInputPresets();                                                                                    // [0xbaefad8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.GetLastSelectedPreset
	// class UFortInputMappingContext* GetLastSelectedPreset();                                                                 // [0xbaef898] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.GetIsCurrentDeviceValidForTrackType
	// bool GetIsCurrentDeviceValidForTrackType();                                                                              // [0xbaef874] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.GetIsCurrentDevicePeripheral
	// bool GetIsCurrentDevicePeripheral();                                                                                     // [0xbaef858] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.GetHoldSecondsToSwitchNumLanes
	// float GetHoldSecondsToSwitchNumLanes();                                                                                  // [0x9542294] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.GetCurrentPresetIndex
	// int32_t GetCurrentPresetIndex();                                                                                         // [0xbaef834] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.GetCurrentDevicePeripheralType
	// EPilgrimPeripheralInputMode GetCurrentDevicePeripheralType();                                                            // [0xbaef81c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.FindFirstPresetMatchingCurrentKeybinds
	// class UFortInputMappingContext* FindFirstPresetMatchingCurrentKeybinds();                                                // [0xbaef7c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.DeactivateInputPreset
	// void DeactivateInputPreset();                                                                                            // [0xbaef7b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.CycleSelectedPreset
	// void CycleSelectedPreset();                                                                                              // [0xbaef79c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.CycleSelectedNumInputLanes
	// void CycleSelectedNumInputLanes();                                                                                       // [0xbaef788] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.CheckConnectedPeripherals
	// void CheckConnectedPeripherals();                                                                                        // [0xbaef760] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.AreSelectedInputMappingContextsActive
	// bool AreSelectedInputMappingContextsActive();                                                                            // [0xbaef4d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.ActivateSelectedInputMappingContexts
	// void ActivateSelectedInputMappingContexts();                                                                             // [0xbaef3a4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimPlayspace
/// Size: 0x0040 (0x0007F0 - 0x000830)
class APilgrimPlayspace : public ASparksMusicPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
	CMember(TArray<class APilgrimMusicBattleInstance*>) PilgrimMusicBattleInstances                                OFFSET(get<T>, {0x7F0, 16, 0, 0})
	CMember(class UNetworkedMusicClockManager*)        MusicClockManager                                           OFFSET(get<T>, {0x800, 8, 0, 0})
	CMember(class UPilgrimPlayspaceComponent_SongPreloader*) SongPreloader                                         OFFSET(get<T>, {0x808, 8, 0, 0})
	CMember(class UPilgrimMediaStreamer*)              MediaStreamer                                               OFFSET(get<T>, {0x810, 8, 0, 0})
	CMember(class UPilgrimGemAnalyzer*)                GemAnalyzer                                                 OFFSET(get<T>, {0x818, 8, 0, 0})
	CMember(class UPilgrimPlayspaceComponent_LipSyncAssetManager*) PilgrimLipSyncManager                           OFFSET(get<T>, {0x820, 8, 0, 0})
	CMember(class UPilgrimGameConfig*)                 PilgrimGameConfig                                           OFFSET(get<T>, {0x828, 8, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.TryGetPilgrimGameForTeam
	// class UPilgrimGame* TryGetPilgrimGameForTeam(int32_t TeamIndex);                                                         // [0xbaf06a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.TryGetPilgrimGameForPlayer
	// class UPilgrimGame* TryGetPilgrimGameForPlayer(class AController* Controller);                                           // [0xbaf05ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.TryGetMusicBattleInstanceForTeam
	// class APilgrimMusicBattleInstance* TryGetMusicBattleInstanceForTeam(int32_t Team);                                       // [0xbaf0520] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.HasAnotherSongToPlay
	// bool HasAnotherSongToPlay();                                                                                             // [0xbaeff90] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.GetStandinPlayerStates
	// TArray<AFortPlayerStateAthena*> GetStandinPlayerStates();                                                                // [0xbaefc64] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.GetStandinPlayerPawns
	// TArray<AFortPlayerPawnAthena*> GetStandinPlayerPawns();                                                                  // [0xbaefc24] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.GetPilgrimGameForTeam
	// class UPilgrimGame* GetPilgrimGameForTeam(int32_t TeamIndex);                                                            // [0xbaefb20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.GetNetworkedMusicClockManager
	// class UNetworkedMusicClockManager* GetNetworkedMusicClockManager(class UObject* WorldContextObject);                     // [0xbaefa58] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.GetMusicClock
	// class UMusicClockComponent* GetMusicClock(class UObject* WorldContextObject);                                            // [0xbaef9d8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.GetMusicBattleInstanceForTeam
	// class APilgrimMusicBattleInstance* GetMusicBattleInstanceForTeam(int32_t Team);                                          // [0xbaef94c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.GetMusicBattleInstanceForPlayer
	// class APilgrimMusicBattleInstance* GetMusicBattleInstanceForPlayer(class AController* Controller);                       // [0xbaef8bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.GetConfig
	// class UPilgrimGameConfig* GetConfig();                                                                                   // [0xbaef804] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.GetAllMusicBattleInstances
	// TArray<APilgrimMusicBattleInstance*> GetAllMusicBattleInstances();                                                       // [0xbaef7e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.ClearMusicBattleInstances
	// void ClearMusicBattleInstances();                                                                                        // [0xbaef774] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.BroadcastCameraDirectorIntermissionEvent
	// void BroadcastCameraDirectorIntermissionEvent(FGameplayTagContainer TagsToSend);                                         // [0xbaef69c] Native|Public|BlueprintCallable|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.BroadcastCameraDirectorDynamicEvent
	// void BroadcastCameraDirectorDynamicEvent(FGameplayTagContainer TagsToSend, class AActor* Target, float ShotTimeLength, bool bWaitForTransition); // [0xbaef4f8] Native|Public|BlueprintCallable|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.AddMusicBattleInstance
	// void AddMusicBattleInstance(class APilgrimMusicBattleInstance* MusicBattleInstance);                                     // [0xbaef3b8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimPlayspaceComponent_LipSyncAssetManager
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UPilgrimPlayspaceComponent_LipSyncAssetManager : public UPlayspaceComponent_LipSyncAssetManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class UAnimSequence*)                      CachedLipsyncAnimSequence                                   OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/PilgrimCoreRuntime.PilgrimPremadeSetlist
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UPilgrimPremadeSetlist : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FText)                                     SetlistTitle                                                OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(TArray<FName>)                             SongShortNameList                                           OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FGameplayTag)                              SetlistTag                                                  OFFSET(getStruct<T>, {0x68, 4, 0, 0})
	SMember(FGameplayTagContainer)                     AdditionalTags                                              OFFSET(getStruct<T>, {0x70, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               SetlistArt                                                  OFFSET(get<T>, {0x90, 32, 0, 0})
};

/// Class /Script/PilgrimCoreRuntime.PilgrimPresetConfiguration
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UPilgrimPresetConfiguration : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(class UFortInputMappingContext*)           GlobalInputMappingContext                                   OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UFortInputMappingContext*)           CheatInputMappingContext                                    OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UFortInputMappingContext*)           GreenRoomInputMappingContext                                OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UFortInputMappingContext*)           GreenRoomAltInputMappingContext                             OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TMap<char, FPilgrimLaneInputMappingConfig>) LaneInputMappingConfigs                                    OFFSET(get<T>, {0x50, 80, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimPresetConfiguration.GetDeviceInputMappingContexts
	// TArray<UFortInputMappingContext*> GetDeviceInputMappingContexts(int32_t NumLanes, EHardwareDevicePrimaryType DeviceType); // [0xbaf247c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimPresetSelectorBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UPilgrimPresetSelectorBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimQuestDefinitionComponent_TextFormat
/// Size: 0x0000 (0x000078 - 0x000078)
class UPilgrimQuestDefinitionComponent_TextFormat : public UFortQuestDefinitionComponent_TextFormat
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimQuestLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPilgrimQuestLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimQuestLibrary.QuestPassesFilter
	// bool QuestPassesFilter(TScriptInterface<Class> QuestInterface, FPilgrimQuestFilter& QuestFilter);                        // [0xbaf2edc] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimQuestLibrary.GetQuestDisplayInfo
	// FPilgrimQuestDisplayInfo GetQuestDisplayInfo(class UObject* WorldContextObject, TScriptInterface<Class> Quest);          // [0xbaf29ac] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimQuestLibrary.GetFilteredQuests
	// void GetFilteredQuests(TArray<TScriptInterface<Class>>& OutQuests, class APlayerState* Player, FPilgrimQuestFilter& Filter); // [0xbaf2588] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimRandomSetlist
/// Size: 0x0068 (0x0000A0 - 0x000108)
class UPilgrimRandomSetlist : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	DMember(int32_t)                                   NumSongsToPopulate                                          OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	SMember(FGameplayTagQuery)                         SongFilterQuery                                             OFFSET(getStruct<T>, {0xB0, 72, 0, 0})
	CMember(TArray<class UPilgrimSongMetadata*>)       SongList                                                    OFFSET(get<T>, {0xF8, 16, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimRandomSetlist.PopulateRandomSongs
	// void PopulateRandomSongs(class UObject* WorldContextObject);                                                             // [0xbaf2e5c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimRenderTargetComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UPilgrimRenderTargetComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(class UTextureRenderTarget2D*)             RenderTarget                                                OFFSET(get<T>, {0xA0, 8, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimRenderTargetComponent.GetUVScaleOffset
	// FVector4f GetUVScaleOffset();                                                                                            // [0xbaf2e34] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimRenderTargetComponent.GetRenderTarget
	// class UTextureRenderTarget2D* GetRenderTarget();                                                                         // [0xbaf2b48] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimRenderTargetComponent.GetLeftTopRightBottom
	// FVector4f GetLeftTopRightBottom();                                                                                       // [0xbaf28fc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimRenderTargetComponent.CropTargetAndGetProjectionMatrix
	// FMatrix CropTargetAndGetProjectionMatrix(FVector4f& InLeftTopRightBottom, float FOV);                                    // [0xbaf2298] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimRequestFriendScoreWrapper
/// Size: 0x00F0 (0x000028 - 0x000118)
class UPilgrimRequestFriendScoreWrapper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimScoreDebugPrinter
/// Size: 0x0008 (0x000028 - 0x000030)
class UPilgrimScoreDebugPrinter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimScoringModel
/// Size: 0x0438 (0x000028 - 0x000460)
class UPilgrimScoringModel : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	SMember(FPilgrimGameProgress)                      GameProgress                                                OFFSET(getStruct<T>, {0x30, 112, 0, 0})
	SMember(FPilgrimGameConfigSettings)                GameConfigSettings                                          OFFSET(getStruct<T>, {0xA0, 752, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   ContextActor                                                OFFSET(get<T>, {0x3A8, 8, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimScoringModel.GetScoreRequiredForStar
	// int32_t GetScoreRequiredForStar(int32_t Stars);                                                                          // [0xbaf2b8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimScoringModel.ComputeSustainScorePerBeat
	// float ComputeSustainScorePerBeat(EPilgrimScoringMode ScoringMode);                                                       // [0xbaf2208] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimScoringModel.ComputeStreakMultiplier
	// float ComputeStreakMultiplier(EPilgrimScoringMode ScoringMode);                                                          // [0xbaf2178] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimScoringModel.ComputeOverdriveMultiplier
	// float ComputeOverdriveMultiplier(EPilgrimScoringMode ScoringMode);                                                       // [0xbaf20e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimScoringModel.ComputeMaxScore
	// float ComputeMaxScore(TArray<FTrackItemInfo>& Gems, class UPilgrimSongData* SongData);                                   // [0xbaf1f54] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimScoringModel.ComputeGemBaseScoreValue
	// float ComputeGemBaseScoreValue(EPilgrimScoringMode ScoringMode);                                                         // [0xbaf1ec4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimScoringModel.ComputeAccuracyMultiplier
	// float ComputeAccuracyMultiplier(EPilgrimScoringMode ScoringMode, FPilgrimGemHitAccuracy& Accuracy);                      // [0xbaf1dd4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimScoringModifier
/// Size: 0x0000 (0x000030 - 0x000030)
class UPilgrimScoringModifier : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimScoringModifier.Apply
	// float Apply(float InputValue);                                                                                           // [0x20c3f9c] Event|Public|BlueprintEvent 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimSetlistInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UPilgrimSetlistInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimSetlistInterface.RemoveUnavailableSongs
	// void RemoveUnavailableSongs(class UObject* WorldContextObject, FPlayspaceUser& ExcludedUser);                            // [0xbaf3080] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimSetlistInterface.GetSongList
	// TArray<UPilgrimSongMetadata*> GetSongList(class UObject* WorldContextObject);                                            // [0xbaf2d8c] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSetlistInterface.GetSongAtIndex
	// class UPilgrimSongMetadata* GetSongAtIndex(class UObject* WorldContextObject, int32_t Index);                            // [0xbaf2cc4] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSetlistInterface.GetSetlistDuration
	// FTimespan GetSetlistDuration(class UObject* WorldContextObject);                                                         // [0xbaf2c38] RequiredAPI|Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSetlistInterface.GetNumSongs
	// int32_t GetNumSongs(class UObject* WorldContextObject);                                                                  // [0xbaf2918] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimSettings
/// Size: 0x0008 (0x000030 - 0x000038)
class UPilgrimSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   NumGemPoolItems                                             OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   NumBeatMarkerPoolItems                                      OFFSET(get<int32_t>, {0x34, 4, 0, 0})
};

/// Class /Script/PilgrimCoreRuntime.PilgrimSongCatalog
/// Size: 0x00B0 (0x0000A0 - 0x000150)
class UPilgrimSongCatalog : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(TMap<FName, UPilgrimSongMetadata*>)        SongsByShortName                                            OFFSET(get<T>, {0xA0, 80, 0, 0})
	CMember(TMap<FString, UPilgrimSongMetadata*>)      SongsByShortMcpTemplateId                                   OFFSET(get<T>, {0xF0, 80, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimSongCatalog.PlayerHasSongEntitlement
	// bool PlayerHasSongEntitlement(class AFortPlayerController* Player, class UPilgrimSongMetadata* Song);                    // [0xbaf5790] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongCatalog.OnCMSCatalogRetrieved
	// void OnCMSCatalogRetrieved(bool bSuccess);                                                                               // [0xbaf56fc] Final|Native|Private 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongCatalog.IsSongShared
	// bool IsSongShared(class AFortPlayerController* Player, FName SongShortName);                                             // [0xbaf5480] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongCatalog.GetSortedSongList
	// TArray<UPilgrimSongMetadata*> GetSortedSongList(EPilgrimSongSortMethod SortMethod, EPilgrimSongSortDirection SortDirection, FGameplayTagQuery& TagQuery); // [0xbaf5068] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongCatalog.GetSongByShortName
	// class UPilgrimSongMetadata* GetSongByShortName(FName ShortName);                                                         // [0xbaf4f44] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongCatalog.GetSongByMcpTemplateId
	// class UPilgrimSongMetadata* GetSongByMcpTemplateId(FString McpTemplateId);                                               // [0xbaf486c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongCatalog.GetRandomSongList
	// TArray<UPilgrimSongMetadata*> GetRandomSongList(int32_t NumSongs, FGameplayTagQuery& TagQuery);                          // [0xbaf4538] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongCatalog.GetPilgrimSongCatalog
	// class UPilgrimSongCatalog* GetPilgrimSongCatalog(class UObject* WorldContextObject);                                     // [0xbaf4484] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimSongData
/// Size: 0x00B8 (0x0000D0 - 0x000188)
class UPilgrimSongData : public UParsedMidiEventData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	CMember(TMap<EPilgrimSongDifficulty, FRBTrackInfo>) TracksPerDifficulty                                        OFFSET(get<T>, {0x120, 80, 0, 0})
	CMember(TArray<FTrackItemInfo>)                    BeatMarkers                                                 OFFSET(get<T>, {0x170, 16, 0, 0})
};

/// Class /Script/PilgrimCoreRuntime.PilgrimSongMetadata
/// Size: 0x0170 (0x000030 - 0x0001A0)
class UPilgrimSongMetadata : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FName)                                     ShortName                                                   OFFSET(getStruct<T>, {0x50, 4, 0, 0})
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FText)                                     Artist                                                      OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FGameplayTagContainer)                     AdditionalTags                                              OFFSET(getStruct<T>, {0x78, 32, 0, 0})
	CMember(TArray<ESparksGenre>)                      Genre                                                       OFFSET(get<T>, {0x98, 16, 0, 0})
	DMember(int32_t)                                   Year                                                        OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	CMember(TMap<EPilgrimTrackType, int32_t>)          IntensityPerInstrument                                      OFFSET(get<T>, {0xB0, 80, 0, 0})
	CMember(EMusicKey)                                 Key                                                         OFFSET(get<T>, {0x100, 1, 0, 0})
	CMember(EMusicKeyMode)                             Mode                                                        OFFSET(get<T>, {0x101, 1, 0, 0})
	SMember(FString)                                   StreamingVUID                                               OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	SMember(FString)                                   PreviewVUID                                                 OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	SMember(FTimespan)                                 duration                                                    OFFSET(getStruct<T>, {0x128, 8, 0, 0})
	CMember(ESparksInstrumentType)                     DrumStartingIntrument                                       OFFSET(get<T>, {0x130, 1, 0, 0})
	CMember(ESparksInstrumentType)                     BassStartingIntrument                                       OFFSET(get<T>, {0x131, 1, 0, 0})
	CMember(ESparksInstrumentType)                     GuitarStartingIntrument                                     OFFSET(get<T>, {0x132, 1, 0, 0})
	CMember(ESparksInstrumentType)                     VocalsStartingIntrument                                     OFFSET(get<T>, {0x133, 1, 0, 0})
	CMember(class UCatalogData*)                       SparksCatalogData                                           OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(TWeakObjectPtr<UStemmedMusicAsset*>)       StemmedMusicAsset                                           OFFSET(get<T>, {0x140, 32, 0, 0})
	CMember(TWeakObjectPtr<UAnimSequence*>)            LipSyncAnimAsset                                            OFFSET(get<T>, {0x160, 32, 0, 0})
	CMember(TWeakObjectPtr<UStemmedMusicAsset*>)       StemmedMusicAssetRuntime                                    OFFSET(get<T>, {0x180, 32, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetYear
	// int32_t GetYear();                                                                                                       // [0xbaf5384] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetTitle
	// FText GetTitle();                                                                                                        // [0xbaf5348] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetStreamingVUID
	// FString GetStreamingVUID();                                                                                              // [0xbaf5314] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetStemmedMusicAsset
	// TWeakObjectPtr<UStemmedMusicAsset*> GetStemmedMusicAsset();                                                              // [0xbaf52dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetStartingInstrumentType
	// ESparksInstrumentType GetStartingInstrumentType(EPilgrimTrackType TrackType);                                            // [0xbaf5250] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetSparksCatalogData
	// class UCatalogData* GetSparksCatalogData(class UObject* WorldContext);                                                   // [0xbaf51c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetShortName
	// FName GetShortName();                                                                                                    // [0xbaf4840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetRawIntensity
	// int32_t GetRawIntensity(EPilgrimTrackType Instrument);                                                                   // [0xbaf47b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetPreviewVUID
	// FString GetPreviewVUID();                                                                                                // [0xbaf4504] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetMusicMode
	// EMusicKeyMode GetMusicMode();                                                                                            // [0xbaf446c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetMusicKey
	// EMusicKey GetMusicKey();                                                                                                 // [0x7ea93b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetMappedIntensity
	// int32_t GetMappedIntensity(EPilgrimTrackType Instrument, int32_t Min, int32_t Max);                                      // [0xbaf4374] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetLipSyncAnimAsset
	// TWeakObjectPtr<UAnimSequence*> GetLipSyncAnimAsset();                                                                    // [0xbaf4340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetIntensityPerInstrument
	// TMap<EPilgrimTrackType, int32_t> GetIntensityPerInstrument();                                                            // [0xbaf42b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetDuration
	// FTimespan GetDuration();                                                                                                 // [0xbaf4288] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetArtist
	// FText GetArtist();                                                                                                       // [0xbaf424c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetAlbumArtUrl
	// FString GetAlbumArtUrl();                                                                                                // [0xbaf3b8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetAdditionalTags
	// FGameplayTagContainer GetAdditionalTags();                                                                               // [0xbaf3b5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimPlayspaceComponent_SongPreloader
/// Size: 0x0098 (0x0000A0 - 0x000138)
class UPilgrimPlayspaceComponent_SongPreloader : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FName)                                     SongToLoad                                                  OFFSET(getStruct<T>, {0xB8, 4, 0, 0})
	CMember(class UPilgrimSongMetadata*)               SongMetadata                                                OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(TMap<FUniqueNetIdRepl, bool>)              PlayersFinishedLoading                                      OFFSET(get<T>, {0xC8, 80, 0, 0})
	DMember(bool)                                      bServerFinishedLoading                                      OFFSET(get<bool>, {0x118, 1, 0, 0})
	DMember(bool)                                      bBroadcastedLoadingFinished                                 OFFSET(get<bool>, {0x119, 1, 0, 0})
	SMember(FTimerHandle)                              LoadTimeoutTimerHandle                                      OFFSET(getStruct<T>, {0x130, 8, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspaceComponent_SongPreloader.OnStreamerPrepared
	// void OnStreamerPrepared();                                                                                               // [0xbaf577c] Final|Native|Private 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspaceComponent_SongPreloader.NetMulticast_LoadSong
	// void NetMulticast_LoadSong(FName Song);                                                                                  // [0xbaf55e0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspaceComponent_SongPreloader.NetMulticast_HandleAllLoadingFinished
	// void NetMulticast_HandleAllLoadingFinished();                                                                            // [0x181fae4] Final|Net|NetReliableNative|Event|NetMulticast|Private 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimControllerComponent_SongPreloader
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPilgrimControllerComponent_SongPreloader : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimControllerComponent_SongPreloader.ServerKickPlayerForNetworkIssues
	// void ServerKickPlayerForNetworkIssues(FText Reason);                                                                     // [0xbaf5a0c] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/PilgrimCoreRuntime.PilgrimControllerComponent_SongPreloader.ServerFinishedLoadingSong
	// void ServerFinishedLoadingSong(FName Song);                                                                              // [0xbaf58f0] Net|NetReliableNative|Event|Public|NetServer 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimSustainTrackItemMgr
/// Size: 0x0060 (0x0000D8 - 0x000138)
class UPilgrimSustainTrackItemMgr : public UPilgrimTrackItemMgr
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	CMember(TArray<class APilgrimTrackSustain*>)       ActiveSustains                                              OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TMap<FPilgrimTrackItemKey, APilgrimTrackSustain*>) ActiveSustainsMap                                   OFFSET(get<T>, {0xE8, 80, 0, 0})
};

/// Class /Script/PilgrimCoreRuntime.PilgrimTogglePlasticInstrumentAbility
/// Size: 0x0000 (0x000B48 - 0x000B48)
class UPilgrimTogglePlasticInstrumentAbility : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2888;

public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimTouchButtonBase
/// Size: 0x0040 (0x0002F0 - 0x000330)
class UPilgrimTouchButtonBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(class UInputAction*)                       PressAction                                                 OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(EWidgetTouchKbmControllerTransitionType)   WidgetTransitionType                                        OFFSET(get<T>, {0x2F8, 1, 0, 0})
	DMember(bool)                                      DeactivateInputActionIfDragOutsideHitbox                    OFFSET(get<bool>, {0x2F9, 1, 0, 0})
	SMember(FLinearColor)                              PressedColor                                                OFFSET(getStruct<T>, {0x2FC, 16, 0, 0})
	SMember(FLinearColor)                              ReleasedColor                                               OFFSET(getStruct<T>, {0x30C, 16, 0, 0})
	CMember(class UImage*)                             Image_Icon                                                  OFFSET(get<T>, {0x320, 8, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimTouchButtonBase.HandleInputMethodChanged
	// void HandleInputMethodChanged(ECommonInputType CurrentInputType);                                                        // [0xbaf53a4] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimTrack
/// Size: 0x0120 (0x000290 - 0x0003B0)
class APilgrimTrack : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	CMember(class UChildActorComponent*)               NowBarChildActor                                            OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class USceneComponent*)                    TopOfTrack                                                  OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class UClass*)                             PilgrimGemClass                                             OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class UClass*)                             BeatMarkerClass                                             OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UClass*)                             SustainClass                                                OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class USceneComponent*)                    SceneRoot                                                   OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UPilgrimTrackCaptureComponent*)      TrackCaptureComponent2D                                     OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UMaterialInterface*)                 PilgrimTrackAlphaMaterial                                   OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UMaterialParameterCollection*)       PilgrimTrackMaterialParameterCollection                     OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UMaterialParameterCollectionInstance*) PilgrimTrackMaterialParameterCollectionInstance           OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(TWeakObjectPtr<UPilgrimGame*>)             ParentGame                                                  OFFSET(get<T>, {0x2E8, 32, 0, 0})
	CMember(class USplineComponent*)                   BeatMarkerSpline                                            OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(TWeakObjectPtr<APilgrimNowBar*>)           CachedNowBar                                                OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UPilgrimGemTrackItemMgr*)            GemMgr                                                      OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UPilgrimSustainTrackItemMgr*)        SustainMgr                                                  OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UPilgrimBeatMarkerTrackItemMgr*)     BeatMarkerMgr                                               OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(TMap<EPilgrimTrackLane, TWeakObjectPtr<APilgrimGemSmasher*>>) SmasherMap                               OFFSET(get<T>, {0x330, 80, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimTrack.UpdateBeatmarkerVisibility
	// void UpdateBeatmarkerVisibility(bool bNewIsVisible);                                                                     // [0xbaf5aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrack.OnGemSmashed
	// void OnGemSmashed(EPilgrimTrackLane Lane, FPilgrimGemHitAccuracy& Accuracy, bool bIsOverdrive);                          // [0x20c3f9c] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrack.OnGameEnded
	// void OnGameEnded();                                                                                                      // [0x2ea9e40] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrack.HideAllItems
	// void HideAllItems();                                                                                                     // [0xbaf5424] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrack.AddActorItemToScene
	// void AddActorItemToScene(class AActor* Item);                                                                            // [0x9ad68dc] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimTrackCaptureComponent
/// Size: 0x0010 (0x000AE0 - 0x000AF0)
class UPilgrimTrackCaptureComponent : public USceneCaptureComponent2D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2800;

public:
	CMember(class AActor*)                             ViewOwner                                                   OFFSET(get<T>, {0xAE0, 8, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackCaptureComponent.SetViewOwnerActor
	// void SetViewOwnerActor(class AActor* InViewOwner);                                                                       // [0xbb0b058] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackCaptureComponent.IncludeActor
	// void IncludeActor(class AActor* TrackActor, bool bIncludeFromChildActors);                                               // [0xbb0ab84] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackCaptureComponent.GetViewOwnerActor
	// class AActor* GetViewOwnerActor();                                                                                       // [0xbb0aaa8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimTrackItemInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UPilgrimTrackItemInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackItemInterface.OnGameEnded
	// void OnGameEnded();                                                                                                      // [0x20c3f9c] Event|Public|BlueprintEvent 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimTrackSustain
/// Size: 0x0058 (0x000290 - 0x0002E8)
class APilgrimTrackSustain : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	DMember(float)                                     InputKeyStartOfSustain                                      OFFSET(get<float>, {0x298, 4, 0, 0})
	DMember(float)                                     InputKeyEndOfSustain                                        OFFSET(get<float>, {0x29C, 4, 0, 0})
	CMember(TWeakObjectPtr<UPilgrimGame*>)             ParentGamePtr                                               OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(TWeakObjectPtr<APilgrimGemSmasher*>)       ParentSmasherPtr                                            OFFSET(get<T>, {0x2A8, 8, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackSustain.UpdateSplineInputKeys
	// void UpdateSplineInputKeys(float NewKeyStart, float NewKeyEnd);                                                          // [0xbb0b0e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackSustain.PlaceSustainAlongSpline
	// void PlaceSustainAlongSpline();                                                                                          // [0x20c3f9c] Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackSustain.OnSustainKeyRelease
	// void OnSustainKeyRelease();                                                                                              // [0x2ea9e40] Native|Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackSustain.OnSustainKeyDownSuccess
	// void OnSustainKeyDownSuccess();                                                                                          // [0x21387d0] Native|Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackSustain.OnSustainInit
	// void OnSustainInit();                                                                                                    // [0x20c3f9c] Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackSustain.OnSustainFail
	// void OnSustainFail();                                                                                                    // [0x20c3f9c] Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackSustain.OnIsOverdriveChanged
	// void OnIsOverdriveChanged();                                                                                             // [0x20c3f9c] Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackSustain.OnAttachToSmasher
	// void OnAttachToSmasher(class APilgrimGemSmasher* Smasher);                                                               // [0xbb0aed8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackSustain.IsInActiveOverdriveSection
	// bool IsInActiveOverdriveSection();                                                                                       // [0xa1c47f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackSustain.GetTrackItemInfo
	// FTrackItemInfo GetTrackItemInfo();                                                                                       // [0xbb0aa74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackSustain.GetSplinePathIfRelevant
	// class USplineComponent* GetSplinePathIfRelevant();                                                                       // [0xbb0aa48] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimTrackTypeUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UPilgrimTrackTypeUtils : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackTypeUtils.IsGuitarPeripheralTrack
	// bool IsGuitarPeripheralTrack(EPilgrimTrackType TrackType);                                                               // [0xbb0ae58] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimVerbProcessor_DeployOverdrive
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPilgrimVerbProcessor_DeployOverdrive : public UPilgrimObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimWaitForEventRouterAction
/// Size: 0x0020 (0x000030 - 0x000050)
class UPilgrimWaitForEventRouterAction : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FMulticastInlineDelegate)                  OnEventRouterAvailable                                      OFFSET(getStruct<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimWaitForEventRouterAction.PilgrimWaitForEventRouter
	// class UPilgrimWaitForEventRouterAction* PilgrimWaitForEventRouter(class AActor* ContextActor);                           // [0xbb0afd8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimWaitForEventRouterAction.PilgrimEventRouterAvailableDelegate__DelegateSignature
	// void PilgrimEventRouterAvailableDelegate__DelegateSignature(class UGameplayEventRouterComponent* EventRouter);           // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimWaitForEventRouterAction.HandleContextActorEndPlay
	// void HandleContextActorEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                          // [0xbb0aac0] Final|Native|Private 
};

/// Class /Script/PilgrimCoreRuntime.ServerPilgrimGame
/// Size: 0x0038 (0x000028 - 0x000060)
class UServerPilgrimGame : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UPilgrimGameEvaluator*)              GameEvaluator                                               OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UPilgrimScoringModel*)               ScoringModel                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UPilgrimSongData*)                   SongData                                                    OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UPilgrimSongMetadata*)               SongBeingPlayed                                             OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   ContextActor                                                OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UPilgrimGameConfig*)                 PilgrimGameConfig                                           OFFSET(get<T>, {0x50, 8, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreRuntime.ServerPilgrimGame.GetScoringDensity
	// float GetScoringDensity();                                                                                               // [0x6b8a198] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.FortClientPilot_QuickSmokeSparks
/// Size: 0x0010 (0x000310 - 0x000320)
class UFortClientPilot_QuickSmokeSparks : public UFortClientPilot_GameplayBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimGameScoreInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UPilgrimGameScoreInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/PilgrimCoreRuntime.TrackItemInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FTrackItemInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   StartTick                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   EndTick                                                     OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   NumScorables                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     Ms                                                          OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   DurationMs                                                  OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   DurationTicks                                               OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	CMember(EPilgrimTrackType)                         Track                                                       OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(EPilgrimTrackLane)                         Lane                                                        OFFSET(get<T>, {0x19, 1, 0, 0})
	CMember(EBeatMarkerType)                           BeatType                                                    OFFSET(get<T>, {0x1A, 1, 0, 0})
	DMember(int32_t)                                   TrackItemIndex                                              OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(bool)                                      IsOverdriveGem                                              OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(int32_t)                                   OverdriveSectionNum                                         OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(bool)                                      IsEndOfOverdriveSection                                     OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bAllowHitOnPress                                            OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bAllowHitOnRelease                                          OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(bool)                                      bIsSustain                                                  OFFSET(get<bool>, {0x2B, 1, 0, 0})
	DMember(bool)                                      bIsAutoHopo                                                 OFFSET(get<bool>, {0x2C, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGameProgress
/// Size: 0x0070 (0x000000 - 0x000070)
class FPilgrimGameProgress : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(int32_t)                                   NumHits                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   NumMisses                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   NumPasses                                                   OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bHasFullCombo                                               OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bHasPerfectCombo                                            OFFSET(get<bool>, {0xD, 1, 0, 0})
	DMember(int32_t)                                   CurrentTick                                                 OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   NoteStreak                                                  OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(float)                                     CurrentScore                                                OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     CurrentModifierBonus                                        OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   CurrentStar                                                 OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(float)                                     NextStarProgress                                            OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   StreakScoreMultiplier                                       OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   NotesPastLastMultiplier                                     OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   NotesToNextMultiplier                                       OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(float)                                     CurrentHealth                                               OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      IsOverdriveActive                                           OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(float)                                     CurrentOverdrive                                            OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   CurrentOverdriveSectionNum                                  OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     CurrentModulation                                           OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     BandScoreContribution                                       OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     BandModifierBonusContribution                               OFFSET(get<float>, {0x4C, 4, 0, 0})
	CMember(EOverdriveScoringState)                    OverdriveScoringState                                       OFFSET(get<T>, {0x50, 1, 0, 0})
	DMember(float)                                     MaxScore                                                    OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      bIsAtMaxStreak                                              OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(float)                                     CurrentSustainScore                                         OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     CurrentChordScore                                           OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     OverdriveTime                                               OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(int32_t)                                   NumPerfects                                                 OFFSET(get<int32_t>, {0x68, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimMusicBattleData
/// Size: 0x0048 (0x000000 - 0x000048)
class FPilgrimMusicBattleData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FPilgrimMusicBattlePlayerState>)    MusicBattleStates                                           OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   LastPlayableIndexProcessed                                  OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   LastPlayableIndexReceived                                   OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	SMember(FPilgrimBandState)                         BandState                                                   OFFSET(getStruct<T>, {0x18, 44, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimBandState
/// Size: 0x002C (0x000000 - 0x00002C)
class FPilgrimBandState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	DMember(float)                                     BandHealth                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     BandScore                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     BandModifierBonus                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     CurrentScoreFromOverdrive                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     TotalScoreFromOverdrive                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   BandStar                                                    OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(float)                                     NextBandStarProgress                                        OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     BandVarietyBonus                                            OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     BaseBandScore                                               OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   BandMultiplier                                              OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(bool)                                      bAllPlayersHaveMaxStreak                                    OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bAllPlayersHaveOverdriveReady                               OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bAllPlayersHaveOverdriveActive                              OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(bool)                                      bAnyPlayersHaveOverdriveActive                              OFFSET(get<bool>, {0x2B, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimMusicBattlePlayerState
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FPilgrimMusicBattlePlayerState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(class AFortPlayerStateAthena*)             PlayerState                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(char)                                      Team                                                        OFFSET(get<char>, {0x8, 1, 0, 0})
	CMember(EPilgrimTrackType)                         TrackType                                                   OFFSET(get<T>, {0x9, 1, 0, 0})
	SMember(FGameplayTagContainer)                     InstrumentTags                                              OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	CMember(TArray<FPilgrimGameProgress>)              ScoreUpdateHistory                                          OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(int32_t)                                   LastPlayableIndexProcessed                                  OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   LastPlayableIndexReceived                                   OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	SMember(FPilgrimGameProgress)                      PilgrimGameProgress                                         OFFSET(getStruct<T>, {0x48, 112, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimTimedInput
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimTimedInput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EPilgrimTimedInputType)                    InputType                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bIsPress                                                    OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(float)                                     ExperiencedTick                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(EPilgrimTrackLane)                         TrackLane                                                   OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.MusicBattleSinglePlayerOptions
/// Size: 0x0008 (0x000000 - 0x000008)
class FMusicBattleSinglePlayerOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bOpponentFiresBack                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     OpponentGemSuccessRate                                      OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimSinglePlayerBattleData
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimSinglePlayerBattleData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FPilgrimSinglePlayerBattleHealth>)  PlayerHealths                                               OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimSinglePlayerBattleHealth
/// Size: 0x0008 (0x000000 - 0x000008)
class FPilgrimSinglePlayerBattleHealth : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     MaxHp                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     CurrentHp                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimLeaderboardRequestParams
/// Size: 0x0070 (0x000000 - 0x000070)
class FPilgrimLeaderboardRequestParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     SongShortName                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EPilgrimLeaderboardType)                   LeaderboardType                                             OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FUniqueNetIdRepl)                          RequestingPlayerAccountId                                   OFFSET(getStruct<T>, {0x8, 48, 0, 0})
	DMember(bool)                                      bFriendsOnly                                                OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bCenteredOnRequestingPlayer                                 OFFSET(get<bool>, {0x39, 1, 0, 0})
	DMember(int32_t)                                   Page                                                        OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   ControllerId                                                OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(bool)                                      bIsSpotlightCompetition                                     OFFSET(get<bool>, {0x44, 1, 0, 0})
	SMember(FString)                                   SpotlightGroup                                              OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	DMember(bool)                                      bUseCache                                                   OFFSET(get<bool>, {0x58, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimLeaderboardPage
/// Size: 0x0038 (0x000000 - 0x000038)
class FPilgrimLeaderboardPage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     SongShortName                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EPilgrimLeaderboardType)                   LeaderboardType                                             OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(int32_t)                                   Page                                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   TotalPages                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	CMember(TArray<FPilgrimLeaderboardEntry>)          Entries                                                     OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bIsSpotlightCompetition                                     OFFSET(get<bool>, {0x20, 1, 0, 0})
	SMember(FString)                                   SpotlightGroup                                              OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimLeaderboardEntryRpl
/// Size: 0x0030 (0x000000 - 0x000030)
class FPilgrimLeaderboardEntryRpl : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   Rank                                                        OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     Percentile                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FPilgrimLeaderboardScoreData)              ScoreData                                                   OFFSET(getStruct<T>, {0x8, 32, 0, 0})
	SMember(FDateTime)                                 DateTime                                                    OFFSET(getStruct<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimLeaderboardScoreData
/// Size: 0x0020 (0x000000 - 0x000020)
class FPilgrimLeaderboardScoreData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   Score                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   StarsEarned                                                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     Accuracy                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bFullCombo                                                  OFFSET(get<bool>, {0xC, 1, 0, 0})
	CMember(EPilgrimSongDifficulty)                    Difficulty                                                  OFFSET(get<T>, {0xD, 1, 0, 0})
	CMember(TArray<EPilgrimTrackType>)                 InstrumentsPlayed                                           OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimLeaderboardEntry
/// Size: 0x0058 (0x000030 - 0x000088)
class FPilgrimLeaderboardEntry : public FPilgrimLeaderboardEntryRpl
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(bool)                                      bHasLocalPlayer                                             OFFSET(get<bool>, {0x30, 1, 0, 0})
	CMember(TMap<FString, FString>)                    PlayerAccountIdToDisplayNameMap                             OFFSET(get<T>, {0x38, 80, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPersonalBestParams
/// Size: 0x0068 (0x000000 - 0x000068)
class FPilgrimPersonalBestParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FUniqueNetIdRepl)                          PlayerAccountId                                             OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FName)                                     SongShortName                                               OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	CMember(EPilgrimTrackType)                         InstrumentType                                              OFFSET(get<T>, {0x34, 1, 0, 0})
	DMember(int32_t)                                   ControllerId                                                OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   BandSize                                                    OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   SetlistIndex                                                OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(bool)                                      bUseCache                                                   OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(bool)                                      bIsSpotlightCompetition                                     OFFSET(get<bool>, {0x45, 1, 0, 0})
	SMember(FString)                                   SpotlightGroup                                              OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPersonalBestResult
/// Size: 0x0198 (0x000000 - 0x000198)
class FPilgrimPersonalBestResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	SMember(FPilgrimLeaderboardEntry)                  BestSolo                                                    OFFSET(getStruct<T>, {0x0, 136, 0, 0})
	SMember(FPilgrimLeaderboardEntry)                  BestBand                                                    OFFSET(getStruct<T>, {0x88, 136, 0, 0})
	SMember(FPilgrimLeaderboardEntry)                  BestSpotlight                                               OFFSET(getStruct<T>, {0x110, 136, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.SongShortNameMatcher
/// Size: 0x0018 (0x000000 - 0x000018)
class FSongShortNameMatcher : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FName>)                             SongShortNames                                              OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(ESongShortNameMatchType)                   MatchType                                                   OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPlayerFeedParams
/// Size: 0x0098 (0x000000 - 0x000098)
class FPilgrimPlayerFeedParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(EPilgrimPlayerFeedSortType)                SortType                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   ControllerId                                                OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FGameplayTagQuery)                         SongQuery                                                   OFFSET(getStruct<T>, {0x8, 72, 0, 0})
	SMember(FSongShortNameMatcher)                     SongShortNameMatcher                                        OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	CMember(TArray<EPilgrimLeaderboardType>)           Leaderboards                                                OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<FUniqueNetIdRepl>)                  FriendIds                                                   OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPlayerFeedResult
/// Size: 0x0020 (0x000000 - 0x000020)
class FPilgrimPlayerFeedResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FPilgrimPlayerFeedResultEntry>)     Entries                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FPilgrimPlayerFeedSongSummary>)     SongSummary                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPlayerFeedSongSummary
/// Size: 0x0018 (0x000000 - 0x000018)
class FPilgrimPlayerFeedSongSummary : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     SongShortName                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<int32_t>)                           EntryIndexes                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPlayerFeedResultEntry
/// Size: 0x0038 (0x000000 - 0x000038)
class FPilgrimPlayerFeedResultEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   FriendName                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     SongShortName                                               OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	CMember(EPilgrimLeaderboardType)                   LeaderboardType                                             OFFSET(get<T>, {0x14, 1, 0, 0})
	CMember(TArray<EPilgrimTrackType>)                 InstrumentsPlayed                                           OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(int32_t)                                   PlayerHighscore                                             OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   FriendHighscore                                             OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	SMember(FDateTime)                                 FriendAchievedScoreDate                                     OFFSET(getStruct<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimCustomSetlistEntry
/// Size: 0x000C (0x000000 - 0x00000C)
class FPilgrimCustomSetlistEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     SongShortName                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<APlayerState*>)             AddedByPlayer                                               OFFSET(get<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimCheatPerformanceArgument
/// Size: 0x000C (0x000000 - 0x00000C)
class FPilgrimCheatPerformanceArgument : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimSongMeasurePosition
/// Size: 0x000C (0x000000 - 0x00000C)
class FPilgrimSongMeasurePosition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   Measure                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Beat                                                        OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Tick                                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGameConfigSettings
/// Size: 0x02F0 (0x000000 - 0x0002F0)
class FPilgrimGameConfigSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	DMember(float)                                     SlopMs                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     GemBreakEndInputUnlockMs                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     EndOfTrackBuffer                                            OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MsToNowBar                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     BackgroundTrackDb                                           OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     BackgroundTrackGain                                         OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     FireMidiEventTicksEarly                                     OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(TMap<EPilgrimSongDifficulty, float>)       BaseGemScoreValue                                           OFFSET(get<T>, {0x20, 80, 0, 0})
	DMember(int32_t)                                   SustainScorePerBeat                                         OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(float)                                     OutroPreAlertSeconds                                        OFFSET(get<float>, {0x74, 4, 0, 0})
	CMember(TArray<FPilgrimScoreMultiplierInfo>)       ScoreMultiplierDefinitions                                  OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TMap<EPilgrimSongDifficulty, FPlayerHealthModifiers>) PlayerHealthModifiers                            OFFSET(get<T>, {0x88, 80, 0, 0})
	CMember(TArray<float>)                             PilgrimHealthCrowdResponseTiers                             OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TMap<EPilgrimSongDifficulty, FStarPercentageThresholds>) IndividualStarPercentageThresholds            OFFSET(get<T>, {0xE8, 80, 0, 0})
	CMember(TArray<float>)                             BandStarPercentageThresholds                                OFFSET(get<T>, {0x138, 16, 0, 0})
	DMember(bool)                                      IsBandMultiplierBasedOnUniqueInstruments                    OFFSET(get<bool>, {0x148, 1, 0, 0})
	DMember(bool)                                      IsBandVarietyBonusScoredDuringPlay                          OFFSET(get<bool>, {0x149, 1, 0, 0})
	CMember(TArray<float>)                             BandOverdriveScoreMultipliers                               OFFSET(get<T>, {0x150, 16, 0, 0})
	CMember(TArray<float>)                             BandVarietyScoreMultipliers                                 OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(TArray<FPilgrimAccuracyTier>)              AccuracyTiers                                               OFFSET(get<T>, {0x170, 16, 0, 0})
	DMember(int32_t)                                   MaximumDisplayedAccuracyTierIndex                           OFFSET(get<int32_t>, {0x180, 4, 0, 0})
	DMember(float)                                     TeamQuickplayInitialHealth                                  OFFSET(get<float>, {0x184, 4, 0, 0})
	DMember(float)                                     TeamQuickplayOverdriveDecayRate                             OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(float)                                     TeamQuickplayInitialOverdrive                               OFFSET(get<float>, {0x18C, 4, 0, 0})
	DMember(float)                                     TeamQuickplayOverdrive                                      OFFSET(get<float>, {0x190, 4, 0, 0})
	DMember(float)                                     TeamQuickplayOverdriveScoreMultiplier                       OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(float)                                     TeamQuickplayOverdriveHealthGainMultiplier                  OFFSET(get<float>, {0x198, 4, 0, 0})
	DMember(float)                                     TeamQuickplayRequiredOverdriveToActivate                    OFFSET(get<float>, {0x19C, 4, 0, 0})
	DMember(float)                                     TeamQuickplayOverdriveAddedOnSuccesfulSection               OFFSET(get<float>, {0x1A0, 4, 0, 0})
	DMember(bool)                                      bOverdriveClearsGems                                        OFFSET(get<bool>, {0x1A4, 1, 0, 0})
	DMember(bool)                                      bOverdriveClearAutoHoldSustain                              OFFSET(get<bool>, {0x1A5, 1, 0, 0})
	DMember(float)                                     GemBreakPendingBars                                         OFFSET(get<float>, {0x1A8, 4, 0, 0})
	DMember(bool)                                      bEnableInputSpecificGemsAndSmashers                         OFFSET(get<bool>, {0x1AC, 1, 0, 0})
	CMember(class UPilgrimInputConfig*)                InputConfig                                                 OFFSET(get<T>, {0x1B0, 8, 0, 0})
	DMember(bool)                                      bEnableOverdriveSystem                                      OFFSET(get<bool>, {0x1B8, 1, 0, 0})
	DMember(bool)                                      bEnableCaptureSystem                                        OFFSET(get<bool>, {0x1B9, 1, 0, 0})
	DMember(bool)                                      bEnableBandPerformanceScoring                               OFFSET(get<bool>, {0x1BA, 1, 0, 0})
	DMember(float)                                     ArenaInitialShields                                         OFFSET(get<float>, {0x1BC, 4, 0, 0})
	DMember(float)                                     ArenaInitialHealth                                          OFFSET(get<float>, {0x1C0, 4, 0, 0})
	DMember(bool)                                      ArenaInitialAmmo                                            OFFSET(get<bool>, {0x1C4, 1, 0, 0})
	CMember(TMap<EPilgrimSongDifficulty, float>)       DifficultyCaptureFactors                                    OFFSET(get<T>, {0x1C8, 80, 0, 0})
	CMember(TMap<EPilgrimTrackType, UPilgrimInstrumentConfig*>) PerInstrumentConfigs                               OFFSET(get<T>, {0x218, 80, 0, 0})
	CMember(TArray<int32_t>)                           StreakToastThresholds                                       OFFSET(get<T>, {0x268, 16, 0, 0})
	CMember(TMap<ESparksInstrumentType, USoundCue*>)   InstrumentTypeMissCues                                      OFFSET(get<T>, {0x278, 80, 0, 0})
	CMember(class USoundCue*)                          DefaultInstrumentTypeMissCue                                OFFSET(get<T>, {0x2C8, 8, 0, 0})
	DMember(bool)                                      CreateStandinBandmembers                                    OFFSET(get<bool>, {0x2D0, 1, 0, 0})
	CMember(TArray<EPilgrimSongDifficulty>)            SupportedDifficulties                                       OFFSET(get<T>, {0x2D8, 16, 0, 0})
	DMember(float)                                     SongIntroEmbargoMs                                          OFFSET(get<float>, {0x2E8, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimAccuracyTier
/// Size: 0x0018 (0x000000 - 0x000018)
class FPilgrimAccuracyTier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     ThresholdMs                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ScoreMultiplier                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FText)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.StarPercentageThresholds
/// Size: 0x0010 (0x000000 - 0x000010)
class FStarPercentageThresholds : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<float>)                             Thresholds                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PlayerHealthModifiers
/// Size: 0x000C (0x000000 - 0x00000C)
class FPlayerHealthModifiers : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     GemHit                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     GemMiss                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     GemPass                                                     OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimScoreMultiplierInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FPilgrimScoreMultiplierInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   NotesCount                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ScoreMultiplier                                             OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGemBreak
/// Size: 0x0024 (0x000000 - 0x000024)
class FPilgrimGemBreak : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	DMember(int32_t)                                   ID                                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bIsValidGemBreak                                            OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(float)                                     StartBreakAtBar                                             OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     StartBreakAtMs                                              OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     BreakBarDuration                                            OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     BreakMsDuration                                             OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     EndBreakAtBar                                               OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     EndBreakAtMs                                                OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bIsStartingBreak                                            OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bIsEndingBreak                                              OFFSET(get<bool>, {0x21, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGameInProgressSustain
/// Size: 0x0048 (0x000000 - 0x000048)
class FPilgrimGameInProgressSustain : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPlayerHistoryResult
/// Size: 0x0130 (0x000000 - 0x000130)
class FPilgrimPlayerHistoryResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FUniqueNetIdRepl)                          PlayerAccountId                                             OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	CMember(TArray<FPilgrimPlayerHistoryEvent>)        Events                                                      OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPlayerHistoryEvent
/// Size: 0x0080 (0x000000 - 0x000080)
class FPilgrimPlayerHistoryEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FString)                                   GameId                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   EventId                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   EventWindowId                                               OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   TeamID                                                      OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(TArray<FString>)                           TeamAccountIds                                              OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(int32_t)                                   PointsEarned                                                OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int64_t)                                   Rank                                                        OFFSET(get<int64_t>, {0x58, 8, 0, 0})
	DMember(double)                                    Score                                                       OFFSET(get<double>, {0x60, 8, 0, 0})
	DMember(double)                                    Percentile                                                  OFFSET(get<double>, {0x68, 8, 0, 0})
	CMember(TArray<FPilgrimPlayerSessionHistory>)      SessionHistory                                              OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPlayerSessionHistory
/// Size: 0x0038 (0x000000 - 0x000038)
class FPilgrimPlayerSessionHistory : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   SessionId                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FDateTime)                                 EndTime                                                     OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FPilgrimLeaderboardScoreData)              TrackedStats                                                OFFSET(getStruct<T>, {0x18, 32, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPlayerHistoryParams
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FPilgrimPlayerHistoryParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FUniqueNetIdRepl)                          PlayerAccountId                                             OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FGameplayTagQuery)                         SongQuery                                                   OFFSET(getStruct<T>, {0x30, 72, 0, 0})
	SMember(FSongShortNameMatcher)                     SongShortNameMatcher                                        OFFSET(getStruct<T>, {0x78, 24, 0, 0})
	CMember(EPilgrimTrackType)                         InstrumentType                                              OFFSET(get<T>, {0x90, 1, 0, 0})
	CMember(EPilgrimPlayerHistoryScoreParam)           ScoreParam                                                  OFFSET(get<T>, {0x91, 1, 0, 0})
	DMember(int32_t)                                   ControllerId                                                OFFSET(get<int32_t>, {0x94, 4, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerController*>)    RequestingPlayer                                            OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimSpotlightCompetition
/// Size: 0x0070 (0x000000 - 0x000070)
class FPilgrimSpotlightCompetition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FString)                                   SpotlightName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   SpotlightGroup                                              OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FDateTime)                                 BeginTime                                                   OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	SMember(FDateTime)                                 EndTime                                                     OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	CMember(TArray<FString>)                           SongUIDs                                                    OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FName>)                             SongShortNames                                              OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FGameplayTagContainer)                     Constraints                                                 OFFSET(getStruct<T>, {0x50, 32, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimSpotlightCompetitionParams
/// Size: 0x0068 (0x000000 - 0x000068)
class FPilgrimSpotlightCompetitionParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FGameplayTagQuery)                         SongQuery                                                   OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	SMember(FSongShortNameMatcher)                     SongShortNameMatcher                                        OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	CMember(EPilgrimTrackType)                         InstrumentType                                              OFFSET(get<T>, {0x60, 1, 0, 0})
	DMember(bool)                                      bUseCache                                                   OFFSET(get<bool>, {0x61, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGetSpotlightParams
/// Size: 0x0018 (0x000000 - 0x000018)
class FPilgrimGetSpotlightParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     SongShortName                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EPilgrimTrackType)                         InstrumentType                                              OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FDateTime)                                 StartsBefore                                                OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FDateTime)                                 EndsAfter                                                   OFFSET(getStruct<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimTouchBrushesMappingConfig
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimTouchBrushesMappingConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FPilgrimInputActionBrushConfig>)    Mappings                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimInputActionBrushConfig
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FPilgrimInputActionBrushConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class UInputAction*)                       BoundInputAction                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FSlateBrush)                               KeyBrush                                                    OFFSET(getStruct<T>, {0x10, 192, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimLaneInputMappingConfig
/// Size: 0x0030 (0x000000 - 0x000030)
class FPilgrimLaneInputMappingConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UFortInputMappingContext*)           DefaultPCBeatmatchInputMappingContext                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UFortInputMappingContext*)           DefaultConsoleBeatmatchInputMappingContext                  OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<class UFortInputMappingContext*>)   PCBeatmatchInputMappingContexts                             OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<class UFortInputMappingContext*>)   ConsoleBeatmatchInputMappingContexts                        OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.SongTimestampData
/// Size: 0x0048 (0x000000 - 0x000048)
class FSongTimestampData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     ServerWorldTime                                             OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FMidiSongPos)                              ServerSongPosition                                          OFFSET(getStruct<T>, {0x8, 64, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.MinimalSongTimestampData
/// Size: 0x000C (0x000000 - 0x00000C)
class FMinimalSongTimestampData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     ServerWorldTime                                             OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     SecondsIncludingCountIn                                     OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimActorPoolParams
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimActorPoolParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UClass*)                             ActorClass                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.MusicClockCatchUpData
/// Size: 0x0018 (0x000000 - 0x000018)
class FMusicClockCatchUpData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FMusicClockCatchUpStarted)                 StartData                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MaxDesyncMs                                                 OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.MusicClockCatchUpStarted
/// Size: 0x0010 (0x000000 - 0x000010)
class FMusicClockCatchUpStarted : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     CatchupSpeed                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     CurrentExperiencedTime                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerController*>)    WeakLocalPlayer                                             OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.MusicClockCatchUpUpdated
/// Size: 0x0004 (0x000000 - 0x000004)
class FMusicClockCatchUpUpdated : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     DeltaTimestamp                                              OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.MusicClockCatchUpEnded
/// Size: 0x0001 (0x000000 - 0x000001)
class FMusicClockCatchUpEnded : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimAnalyticsEvent_ResultsReturn
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimAnalyticsEvent_ResultsReturn : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPlayerController*)              PlayerController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EPilgrimAnalyticsResultsReturn)            ResultsReturn                                               OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGameBandProgressDelta
/// Size: 0x0024 (0x000000 - 0x000024)
class FPilgrimGameBandProgressDelta : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_SetlistVoteWinnerChanged
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_BandState_SetlistVoteWinnerChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UPilgrimPremadeSetlist*)             NewVoteWinner                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UPilgrimPremadeSetlist*)             PrevVoteWinner                                              OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_OverdriveActiveChanged
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_BandState_OverdriveActiveChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      IsActive                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(class AFortPlayerPawn*)                    ForPlayer                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_OverdriveReadyChanged
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_BandState_OverdriveReadyChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      IsReady                                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(class AFortPlayerPawn*)                    ForPlayer                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_AllOverdriveActiveChanged
/// Size: 0x0001 (0x000000 - 0x000001)
class FPilgrimEvent_BandState_AllOverdriveActiveChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bAllPlayersHaveActiveOverdrive                              OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_AllOverdriveReadyChanged
/// Size: 0x0001 (0x000000 - 0x000001)
class FPilgrimEvent_BandState_AllOverdriveReadyChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bAllPlayersHaveOverdriveReady                               OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_AllMaxStreakChanged
/// Size: 0x0001 (0x000000 - 0x000001)
class FPilgrimEvent_BandState_AllMaxStreakChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bAllPlayersHaveMaxStreak                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_ReadinessChanged
/// Size: 0x0001 (0x000000 - 0x000001)
class FPilgrimEvent_BandState_ReadinessChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bAreAllPlayersReady                                         OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_CustomSetlistChanged
/// Size: 0x0008 (0x000000 - 0x000008)
class FPilgrimEvent_BandState_CustomSetlistChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(TWeakObjectPtr<UPilgrimCustomSetlist*>)    ChangedSetlist                                              OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_OverdriveActiveTrackTypesChanged
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FPilgrimEvent_BandState_OverdriveActiveTrackTypesChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FPilgrimTrackTypesStateMembership)         Membership                                                  OFFSET(getStruct<T>, {0x0, 160, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimTrackTypesStateMembership
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FPilgrimTrackTypesStateMembership : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TSet<EPilgrimTrackType>)                   TrackTypesInState                                           OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TSet<EPilgrimTrackType>)                   TrackTypesNotInState                                        OFFSET(get<T>, {0x50, 80, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_OverdriveReadyTrackTypesChanged
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FPilgrimEvent_BandState_OverdriveReadyTrackTypesChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FPilgrimTrackTypesStateMembership)         Membership                                                  OFFSET(getStruct<T>, {0x0, 160, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_BandHealthChanged
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_BandState_BandHealthChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     LastBandHealth                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     NewBandHealth                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   LastBandHealthTier                                          OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   NewBandHealthTier                                           OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimTimestampedTargetData
/// Size: 0x0010 (0x000008 - 0x000018)
class FPilgrimTimestampedTargetData : public FGameplayAbilityTargetData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FMinimalSongTimestampData)                 SongTimestamp                                               OFFSET(getStruct<T>, {0x8, 12, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGuitarFretPressedState
/// Size: 0x0003 (0x000000 - 0x000003)
class FPilgrimGuitarFretPressedState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvaluatorGuitarState
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvaluatorGuitarState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvaluatorState
/// Size: 0x01B8 (0x000000 - 0x0001B8)
class FPilgrimEvaluatorState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PilgrimGame_PlayingSong
/// Size: 0x0008 (0x000000 - 0x000008)
class FPilgrimEvent_PilgrimGame_PlayingSong : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UPilgrimGame*)                       PilgrimGame                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PilgrimGame_SongStopped
/// Size: 0x0008 (0x000000 - 0x000008)
class FPilgrimEvent_PilgrimGame_SongStopped : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UPilgrimGame*)                       PilgrimGame                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PilgrimGame_TrackFadeEnded
/// Size: 0x0008 (0x000000 - 0x000008)
class FPilgrimEvent_PilgrimGame_TrackFadeEnded : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UPilgrimGame*)                       PilgrimGame                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimDifficultyTrackTypePair
/// Size: 0x0002 (0x000000 - 0x000002)
class FPilgrimDifficultyTrackTypePair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(EPilgrimSongDifficulty)                    Difficulty                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EPilgrimTrackType)                         TrackType                                                   OFFSET(get<T>, {0x1, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGemDensityDataArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimGemDensityDataArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGemDensityData
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimGemDensityData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   SectionIndex                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   NumGems                                                     OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FTimespan)                                 SustainDurationTotal                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGemBreaks
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimGemBreaks : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FPilgrimGemBreak>)                  Breaks                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_GemBreak_Base
/// Size: 0x0048 (0x000000 - 0x000048)
class FPilgrimEvent_GemBreak_Base : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FPilgrimGemBreak)                          Break                                                       OFFSET(getStruct<T>, {0x0, 36, 0, 0})
	CMember(class UPilgrimGemBreakListener*)           Listener                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class AActor*)                             ForActor                                                    OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      bIsLocalPlayer                                              OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(float)                                     CurrentSongMS                                               OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     CurrentSongBar                                              OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_GemBreak_Started
/// Size: 0x0000 (0x000048 - 0x000048)
class FPilgrimEvent_GemBreak_Started : public FPilgrimEvent_GemBreak_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_GemBreak_Ended
/// Size: 0x0000 (0x000048 - 0x000048)
class FPilgrimEvent_GemBreak_Ended : public FPilgrimEvent_GemBreak_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_GemBreak_Pending
/// Size: 0x0000 (0x000048 - 0x000048)
class FPilgrimEvent_GemBreak_Pending : public FPilgrimEvent_GemBreak_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGemHitAccuracy
/// Size: 0x0028 (0x000000 - 0x000028)
class FPilgrimGemHitAccuracy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     AccuracyMs                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FPilgrimAccuracyTier)                      AccuracyTier                                                OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(int32_t)                                   TierIndex                                                   OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimInputKeyBinding
/// Size: 0x0020 (0x000000 - 0x000020)
class FPilgrimInputKeyBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FKey)                                      KeyBinding                                                  OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FName)                                     InputAction                                                 OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	DMember(bool)                                      bSendToServer                                               OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(bool)                                      bSendToClient                                               OFFSET(get<bool>, {0x1D, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimInputPresetData
/// Size: 0x0028 (0x000008 - 0x000030)
class FPilgrimInputPresetData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FText)                                     PresetDescription                                           OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TArray<FPilgrimInputKeyBinding>)           LaneBindings                                                OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bIsGameplayBinding                                          OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bIsMouseKeyboardBinding                                     OFFSET(get<bool>, {0x29, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimDefaultUnbindingData
/// Size: 0x0008 (0x000008 - 0x000010)
class FPilgrimDefaultUnbindingData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bDoUnbindPressed                                            OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bDoUnbindReleased                                           OFFSET(get<bool>, {0x9, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGemInputSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FPilgrimGemInputSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_ToggleDebugCalibrationWidget
/// Size: 0x0001 (0x000000 - 0x000001)
class FPilgrimEvent_ToggleDebugCalibrationWidget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_TrackLayoutPresetChanged
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_TrackLayoutPresetChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   PresetName                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_KeybindPresetChanged
/// Size: 0x0018 (0x000000 - 0x000018)
class FPilgrimEvent_KeybindPresetChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(class UInputMappingContext*)               InputMappingContext                                         OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_KeybindPresetActivated
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_KeybindPresetActivated : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UInputMappingContext*)               InputMappingContextGamepad                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UInputMappingContext*)               InputMappingContextKeyboard                                 OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_CameraPresetChanged
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_CameraPresetChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_InputReceived
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_InputReceived : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TWeakObjectPtr<AFortPlayerControllerGameplay*>) UserController                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     InputAction                                                 OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      bPressEvent                                                 OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_InputOffsetCalculated
/// Size: 0x003C (0x000000 - 0x00003C)
class FPilgrimEvent_InputOffsetCalculated : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
	CMember(EPilgrimTrackLane)                         Lane                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     Offset                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   TrackerGemIndex                                             OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FTrackItemInfo)                            GemInfo                                                     OFFSET(getStruct<T>, {0xC, 48, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerUsingPeripheralChanged
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_PlayerUsingPeripheralChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPlayerState*)                   ForPlayer                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bIsUsingPeripheral                                          OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bIsInputDeviceValidForTrackType                             OFFSET(get<bool>, {0x9, 1, 0, 0})
	CMember(EPilgrimPeripheralInputMode)               CurrentPeripheralDeviceType                                 OFFSET(get<T>, {0xA, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPlayerHistoryCacheEntry
/// Size: 0x01E8 (0x000000 - 0x0001E8)
class FPilgrimPlayerHistoryCacheEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEventCacheDownload
/// Size: 0x0240 (0x000000 - 0x000240)
class FPilgrimEventCacheDownload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimSpotlightChallengeCache
/// Size: 0x0108 (0x000000 - 0x000108)
class FPilgrimSpotlightChallengeCache : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimLeaderboardPageCache
/// Size: 0x0048 (0x000000 - 0x000048)
class FPilgrimLeaderboardPageCache : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimLeaderboardCache
/// Size: 0x0060 (0x000000 - 0x000060)
class FPilgrimLeaderboardCache : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPersonalBestResultRpl
/// Size: 0x0090 (0x000000 - 0x000090)
class FPilgrimPersonalBestResultRpl : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FPilgrimLeaderboardEntryRpl)               BestSolo                                                    OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FPilgrimLeaderboardEntryRpl)               BestBand                                                    OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	SMember(FPilgrimLeaderboardEntryRpl)               BestSpotlight                                               OFFSET(getStruct<T>, {0x60, 48, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPersonalBestHistoryRpl
/// Size: 0x0128 (0x000000 - 0x000128)
class FPilgrimPersonalBestHistoryRpl : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	DMember(bool)                                      bSoloReachedNewHighscore                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bBandReachedNewHighscore                                    OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bSpotlightReachedNewHighscore                               OFFSET(get<bool>, {0x2, 1, 0, 0})
	SMember(FPilgrimPersonalBestResultRpl)             LoadedScore                                                 OFFSET(getStruct<T>, {0x8, 144, 0, 0})
	SMember(FPilgrimPersonalBestResultRpl)             NewScore                                                    OFFSET(getStruct<T>, {0x98, 144, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPlayerHistoryCacheParams
/// Size: 0x0060 (0x000000 - 0x000060)
class FPilgrimPlayerHistoryCacheParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FUniqueNetIdRepl)                          PlayerAccountId                                             OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FString)                                   GameId                                                      OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   EventId                                                     OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   EventWindowId                                               OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimLeaderboardIdParams
/// Size: 0x0018 (0x000000 - 0x000018)
class FPilgrimLeaderboardIdParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     SongShortName                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EPilgrimLeaderboardType)                   LeaderboardType                                             OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(bool)                                      bIsSpotlightCompetition                                     OFFSET(get<bool>, {0x5, 1, 0, 0})
	SMember(FString)                                   SpotlightGroup                                              OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_Base
/// Size: 0x0014 (0x000000 - 0x000014)
class FPilgrimEvent_Midi_Base : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(EPilgrimTrackType)                         TrackType                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   AtMidiTick                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   EndsAtMidiTick                                              OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(TWeakObjectPtr<UPilgrimGame*>)             PilgrimGameContext                                          OFFSET(get<T>, {0xC, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteBase
/// Size: 0x0004 (0x000014 - 0x000018)
class FPilgrimEvent_Midi_NoteBase : public FPilgrimEvent_Midi_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   EventNote                                                   OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteGuitar
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_NoteGuitar : public FPilgrimEvent_Midi_NoteBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteGuitar_Start
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_NoteGuitar_Start : public FPilgrimEvent_Midi_NoteGuitar
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteGuitar_End
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_NoteGuitar_End : public FPilgrimEvent_Midi_NoteGuitar
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteBass
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_NoteBass : public FPilgrimEvent_Midi_NoteBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteBass_Start
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_NoteBass_Start : public FPilgrimEvent_Midi_NoteBass
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteBass_End
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_NoteBass_End : public FPilgrimEvent_Midi_NoteBass
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteVocals
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_NoteVocals : public FPilgrimEvent_Midi_NoteBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteVocals_Start
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_NoteVocals_Start : public FPilgrimEvent_Midi_NoteVocals
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteVocals_End
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_NoteVocals_End : public FPilgrimEvent_Midi_NoteVocals
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteDrum
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_NoteDrum : public FPilgrimEvent_Midi_NoteBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteDrum_Start
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_NoteDrum_Start : public FPilgrimEvent_Midi_NoteDrum
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteDrum_End
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_NoteDrum_End : public FPilgrimEvent_Midi_NoteDrum
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteEvents
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_NoteEvents : public FPilgrimEvent_Midi_NoteBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteEvents_Start
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_NoteEvents_Start : public FPilgrimEvent_Midi_NoteEvents
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteEvents_End
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_NoteEvents_End : public FPilgrimEvent_Midi_NoteEvents
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_TextBase
/// Size: 0x0024 (0x000014 - 0x000038)
class FPilgrimEvent_Midi_TextBase : public FPilgrimEvent_Midi_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   EventString                                                 OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(TArray<FString>)                           EventPayload                                                OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_TextGuitar
/// Size: 0x0000 (0x000038 - 0x000038)
class FPilgrimEvent_Midi_TextGuitar : public FPilgrimEvent_Midi_TextBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_TextGuitar_Start
/// Size: 0x0000 (0x000038 - 0x000038)
class FPilgrimEvent_Midi_TextGuitar_Start : public FPilgrimEvent_Midi_TextGuitar
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_TextBass
/// Size: 0x0000 (0x000038 - 0x000038)
class FPilgrimEvent_Midi_TextBass : public FPilgrimEvent_Midi_TextBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_TextBass_Start
/// Size: 0x0000 (0x000038 - 0x000038)
class FPilgrimEvent_Midi_TextBass_Start : public FPilgrimEvent_Midi_TextBass
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_TextVocals
/// Size: 0x0000 (0x000038 - 0x000038)
class FPilgrimEvent_Midi_TextVocals : public FPilgrimEvent_Midi_TextBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_TextVocals_Start
/// Size: 0x0000 (0x000038 - 0x000038)
class FPilgrimEvent_Midi_TextVocals_Start : public FPilgrimEvent_Midi_TextVocals
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_TextDrum
/// Size: 0x0000 (0x000038 - 0x000038)
class FPilgrimEvent_Midi_TextDrum : public FPilgrimEvent_Midi_TextBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_TextDrum_Start
/// Size: 0x0000 (0x000038 - 0x000038)
class FPilgrimEvent_Midi_TextDrum_Start : public FPilgrimEvent_Midi_TextDrum
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_TextEvents
/// Size: 0x0000 (0x000038 - 0x000038)
class FPilgrimEvent_Midi_TextEvents : public FPilgrimEvent_Midi_TextBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_TextEvents_Start
/// Size: 0x0000 (0x000038 - 0x000038)
class FPilgrimEvent_Midi_TextEvents_Start : public FPilgrimEvent_Midi_TextEvents
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeBase
/// Size: 0x0004 (0x000014 - 0x000018)
class FPilgrimEvent_Midi_StrikeBase : public FPilgrimEvent_Midi_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bIsChord                                                    OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeGuitar
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_StrikeGuitar : public FPilgrimEvent_Midi_StrikeBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeGuitar_Start
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_StrikeGuitar_Start : public FPilgrimEvent_Midi_StrikeGuitar
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeGuitar_End
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_StrikeGuitar_End : public FPilgrimEvent_Midi_StrikeGuitar
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeBass
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_StrikeBass : public FPilgrimEvent_Midi_StrikeBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeBass_Start
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_StrikeBass_Start : public FPilgrimEvent_Midi_StrikeBass
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeBass_End
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_StrikeBass_End : public FPilgrimEvent_Midi_StrikeBass
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeVocals
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_StrikeVocals : public FPilgrimEvent_Midi_StrikeBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeVocals_Start
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_StrikeVocals_Start : public FPilgrimEvent_Midi_StrikeVocals
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeVocals_End
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_StrikeVocals_End : public FPilgrimEvent_Midi_StrikeVocals
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeDrum
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_StrikeDrum : public FPilgrimEvent_Midi_StrikeBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeDrum_Start
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_StrikeDrum_Start : public FPilgrimEvent_Midi_StrikeDrum
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeDrum_End
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_StrikeDrum_End : public FPilgrimEvent_Midi_StrikeDrum
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeEvents
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_StrikeEvents : public FPilgrimEvent_Midi_StrikeBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeEvents_Start
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_StrikeEvents_Start : public FPilgrimEvent_Midi_StrikeEvents
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeEvents_End
/// Size: 0x0000 (0x000018 - 0x000018)
class FPilgrimEvent_Midi_StrikeEvents_End : public FPilgrimEvent_Midi_StrikeEvents
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NotifyBeginOutro
/// Size: 0x0001 (0x000000 - 0x000001)
class FPilgrimEvent_Midi_NotifyBeginOutro : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/PilgrimCoreRuntime.DifficultyInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FDifficultyInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FTrackItemInfo>)                    GemsInProgress                                              OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_EventBase
/// Size: 0x0008 (0x000000 - 0x000008)
class FPilgrimEvent_MBI_EventBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(TWeakObjectPtr<APilgrimMusicBattleInstance*>) MusicBattleInstance                                      OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_Started
/// Size: 0x0000 (0x000008 - 0x000008)
class FPilgrimEvent_MBI_Started : public FPilgrimEvent_MBI_EventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_Finished
/// Size: 0x0000 (0x000008 - 0x000008)
class FPilgrimEvent_MBI_Finished : public FPilgrimEvent_MBI_EventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_ServerDecidedSongToPlay
/// Size: 0x0008 (0x000008 - 0x000010)
class FPilgrimEvent_MBI_ServerDecidedSongToPlay : public FPilgrimEvent_MBI_EventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UPilgrimSongMetadata*)               SongToPlay                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_ServerInitializedScoring
/// Size: 0x0000 (0x000008 - 0x000008)
class FPilgrimEvent_MBI_ServerInitializedScoring : public FPilgrimEvent_MBI_EventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_ClientGotSongToPlay
/// Size: 0x0008 (0x000008 - 0x000010)
class FPilgrimEvent_MBI_ClientGotSongToPlay : public FPilgrimEvent_MBI_EventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UPilgrimSongMetadata*)               SongToPlay                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_ClientUpdateLipSyncData
/// Size: 0x0008 (0x000000 - 0x000008)
class FPilgrimEvent_MBI_ClientUpdateLipSyncData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UAnimSequence*)                      AnimSequence                                                OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_CVarEnableTraversalChanged
/// Size: 0x0001 (0x000000 - 0x000001)
class FPilgrimEvent_MBI_CVarEnableTraversalChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      EnabledTraversal                                            OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_SongLoaded
/// Size: 0x0010 (0x000008 - 0x000018)
class FPilgrimEvent_MBI_SongLoaded : public FPilgrimEvent_MBI_EventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UPilgrimSongMetadata*)               LoadedSong                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(EPilgrimSongPlayMethod)                    PlayMethod                                                  OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGameInProgressOverdrive
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimGameInProgressOverdrive : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimRewindDetails
/// Size: 0x000C (0x000000 - 0x00000C)
class FPilgrimRewindDetails : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGamePlayerProgressDelta
/// Size: 0x0054 (0x000000 - 0x000054)
class FPilgrimGamePlayerProgressDelta : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 84;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimObjectiveFilterBase
/// Size: 0x0120 (0x0000A0 - 0x0001C0)
class FPilgrimObjectiveFilterBase : public FObjectiveFilter
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FObjectiveSubjectTags)                     SongID                                                      OFFSET(getStruct<T>, {0xA0, 72, 0, 0})
	SMember(FObjectiveSubjectTags)                     InstrumentId                                                OFFSET(getStruct<T>, {0xE8, 72, 0, 0})
	SMember(FObjectiveSubjectTags)                     BandInstrumentIds                                           OFFSET(getStruct<T>, {0x130, 72, 0, 0})
	SMember(FSongShortNameMatcher)                     SongShortName                                               OFFSET(getStruct<T>, {0x178, 24, 0, 0})
	SMember(FSongItemDefPrimaryAssetNameMatcher)       SongSIDMatcher                                              OFFSET(getStruct<T>, {0x190, 24, 0, 0})
	SMember(FInt32Range)                               RequiredBandMembers                                         OFFSET(getStruct<T>, {0x1A8, 16, 0, 0})
	CMember(EPilgrimSongDifficulty)                    RequiredDifficulty                                          OFFSET(get<T>, {0x1B8, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.SongItemDefPrimaryAssetNameMatcher
/// Size: 0x0018 (0x000000 - 0x000018)
class FSongItemDefPrimaryAssetNameMatcher : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<class USparksSongItemDefinition*>)  SongItemDefs                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(ESongShortNameMatchType)                   MatchType                                                   OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimObjectiveFilter_AccumulateStars
/// Size: 0x0008 (0x0001C0 - 0x0001C8)
class FPilgrimObjectiveFilter_AccumulateStars : public FPilgrimObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	CMember(EPilgrimAccumulateStarsMessageType)        VerbType                                                    OFFSET(get<T>, {0x1C0, 1, 0, 0})
	DMember(char)                                      StarType                                                    OFFSET(get<char>, {0x1C1, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimObjectiveFilter_Note
/// Size: 0x0030 (0x0001C0 - 0x0001F0)
class FPilgrimObjectiveFilter_Note : public FPilgrimObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	DMember(bool)                                      DidHit                                                      OFFSET(get<bool>, {0x1C0, 1, 0, 0})
	DMember(bool)                                      DidPass                                                     OFFSET(get<bool>, {0x1C1, 1, 0, 0})
	DMember(bool)                                      DidMiss                                                     OFFSET(get<bool>, {0x1C2, 1, 0, 0})
	DMember(bool)                                      IsChord                                                     OFFSET(get<bool>, {0x1C3, 1, 0, 0})
	SMember(FInt32Range)                               RequiredStreak                                              OFFSET(getStruct<T>, {0x1C4, 16, 0, 0})
	SMember(FInt32Range)                               RequiredMultiplier                                          OFFSET(getStruct<T>, {0x1D4, 16, 0, 0})
	CMember(EPilgrimNoteEventMessageIncrementType)     IncrementType                                               OFFSET(get<T>, {0x1E4, 1, 0, 0})
	DMember(int32_t)                                   IncrementValue                                              OFFSET(get<int32_t>, {0x1E8, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimObjectiveFilter_OverdriveComplete
/// Size: 0x0000 (0x0001C0 - 0x0001C0)
class FPilgrimObjectiveFilter_OverdriveComplete : public FPilgrimObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimObjectiveFilter_ScoreEvent
/// Size: 0x0090 (0x0001C0 - 0x000250)
class FPilgrimObjectiveFilter_ScoreEvent : public FPilgrimObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FInt32Range)                               RequiredScore                                               OFFSET(getStruct<T>, {0x1C0, 16, 0, 0})
	SMember(FInt32Range)                               RequiredStars                                               OFFSET(getStruct<T>, {0x1D0, 16, 0, 0})
	SMember(FInt32Range)                               RequiredCurrentScore                                        OFFSET(getStruct<T>, {0x1E0, 16, 0, 0})
	SMember(FInt32Range)                               RequiredCurrentStars                                        OFFSET(getStruct<T>, {0x1F0, 16, 0, 0})
	SMember(FInt32Range)                               RequiredCurrentSustainScore                                 OFFSET(getStruct<T>, {0x200, 16, 0, 0})
	SMember(FInt32Range)                               RequiredDeltaSustainScore                                   OFFSET(getStruct<T>, {0x210, 16, 0, 0})
	SMember(FInt32Range)                               RequiredCurrentChordScore                                   OFFSET(getStruct<T>, {0x220, 16, 0, 0})
	SMember(FInt32Range)                               RequiredDeltaChordScore                                     OFFSET(getStruct<T>, {0x230, 16, 0, 0})
	DMember(bool)                                      RequireSustain                                              OFFSET(get<bool>, {0x240, 1, 0, 0})
	DMember(bool)                                      RequireChord                                                OFFSET(get<bool>, {0x241, 1, 0, 0})
	DMember(bool)                                      RequireOverdrive                                            OFFSET(get<bool>, {0x242, 1, 0, 0})
	CMember(EPilgrimScoreEventMessageType)             ScoreType                                                   OFFSET(get<T>, {0x243, 1, 0, 0})
	CMember(EPilgrimScoreEventMessageIncrementType)    IncrementType                                               OFFSET(get<T>, {0x244, 1, 0, 0})
	DMember(int32_t)                                   IncrementValue                                              OFFSET(get<int32_t>, {0x248, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimObjectiveFilter_SetlistComplete
/// Size: 0x0060 (0x0000A0 - 0x000100)
class FPilgrimObjectiveFilter_SetlistComplete : public FObjectiveFilter
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FFloatRange)                               RequiredSoloScore                                           OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FInt32Range)                               RequiredSoloStars                                           OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FFloatRange)                               RequiredBandScore                                           OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FInt32Range)                               RequiredBandStars                                           OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FInt32Range)                               RequiredNumSongs                                            OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FInt32Range)                               RequiredBandMembers                                         OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimObjectiveFilter_SongCompleted
/// Size: 0x0080 (0x0001C0 - 0x000240)
class FPilgrimObjectiveFilter_SongCompleted : public FPilgrimObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FFloatRange)                               RequiredSoloScore                                           OFFSET(getStruct<T>, {0x1C0, 16, 0, 0})
	SMember(FInt32Range)                               RequiredSoloStars                                           OFFSET(getStruct<T>, {0x1D0, 16, 0, 0})
	DMember(bool)                                      bRequiredGoldSoloStars                                      OFFSET(get<bool>, {0x1E0, 1, 0, 0})
	SMember(FFloatRange)                               RequiredBandScore                                           OFFSET(getStruct<T>, {0x1E4, 16, 0, 0})
	SMember(FInt32Range)                               RequiredBandStars                                           OFFSET(getStruct<T>, {0x1F4, 16, 0, 0})
	DMember(bool)                                      bRequiredGoldBandStars                                      OFFSET(get<bool>, {0x204, 1, 0, 0})
	SMember(FFloatRange)                               RequiredNoteAccuracy                                        OFFSET(getStruct<T>, {0x208, 16, 0, 0})
	CMember(EComboType)                                RequiredComboType                                           OFFSET(get<T>, {0x218, 1, 0, 0})
	DMember(bool)                                      bUseRequiredComboType                                       OFFSET(get<bool>, {0x219, 1, 0, 0})
	SMember(FFloatRange)                               RequiredOverdriveTime                                       OFFSET(getStruct<T>, {0x21C, 16, 0, 0})
	SMember(FFloatRange)                               RequiredPercentPerfect                                      OFFSET(getStruct<T>, {0x22C, 16, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimObjectiveFilter_SongStarted
/// Size: 0x0000 (0x0001C0 - 0x0001C0)
class FPilgrimObjectiveFilter_SongStarted : public FPilgrimObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerTriggerData
/// Size: 0x001C (0x000000 - 0x00001C)
class FPilgrimPerformanceTrackerTriggerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerSampleData
/// Size: 0x0018 (0x000000 - 0x000018)
class FPilgrimPerformanceTrackerSampleData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerData
/// Size: 0x0120 (0x000000 - 0x000120)
class FPilgrimPerformanceTrackerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimDuelInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FPilgrimDuelInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayTag)                              EventMessage                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerPawn*>)          Pawn                                                        OFFSET(get<T>, {0x4, 8, 0, 0})
	SMember(FVector)                                   OriginalLocation                                            OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FRotator)                                  OriginalRotation                                            OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEventMessageData
/// Size: 0x0088 (0x000000 - 0x000088)
class FPilgrimEventMessageData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayTag)                              EventMessage                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FPilgrimDuelInfo)                          Challenger                                                  OFFSET(getStruct<T>, {0x8, 64, 0, 0})
	SMember(FPilgrimDuelInfo)                          Challenged                                                  OFFSET(getStruct<T>, {0x48, 64, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPresetIndices
/// Size: 0x0008 (0x000000 - 0x000008)
class FPilgrimPresetIndices : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_DifficultyChanged
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_PlayerState_DifficultyChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPlayerPawn*)                    ForPlayer                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EPilgrimSongDifficulty)                    NewSongDifficulty                                           OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(EPilgrimSongDifficulty)                    PrevSongDifficulty                                          OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_InstrumentChanged
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_PlayerState_InstrumentChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPlayerPawn*)                    ForPlayer                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EPilgrimTrackType)                         NewInstrumentChoice                                         OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(EPilgrimTrackType)                         PrevInstrumentChoice                                        OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_SongVoteChanged
/// Size: 0x0018 (0x000000 - 0x000018)
class FPilgrimEvent_PlayerState_SongVoteChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class AFortPlayerPawn*)                    ForPlayer                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UPilgrimSongMetadata*)               NewSongVote                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UPilgrimSongMetadata*)               PrevSongVote                                                OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_SetlistVoteChanged
/// Size: 0x0018 (0x000000 - 0x000018)
class FPilgrimEvent_PlayerState_SetlistVoteChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class AFortPlayerPawn*)                    ForPlayer                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UPilgrimPremadeSetlist*)             NewSetlistVote                                              OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UPilgrimPremadeSetlist*)             PrevSetlistVote                                             OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_ReadinessChanged
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_PlayerState_ReadinessChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPlayerPawn*)                    ForPlayer                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bIsReady                                                    OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_HighscoreChanged
/// Size: 0x0128 (0x000000 - 0x000128)
class FPilgrimEvent_PlayerState_HighscoreChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(class AFortPlayerPawn*)                    ForPlayer                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FPilgrimPersonalBestResultRpl)             NewHighscore                                                OFFSET(getStruct<T>, {0x8, 144, 0, 0})
	SMember(FPilgrimPersonalBestResultRpl)             PrevHighscore                                               OFFSET(getStruct<T>, {0x98, 144, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_NewHighscore
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_PlayerState_NewHighscore : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPlayerPawn*)                    ForPlayer                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   Score                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(EPilgrimPersonalBestType)                  BestType                                                    OFFSET(get<T>, {0xC, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_ConnectedPeripheralsChanged
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_PlayerState_ConnectedPeripheralsChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPlayerState*)                   ForPlayer                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EPilgrimPeripheralInputMode)               PeripheralType                                              OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(EInputDeviceConnectionState)               ConnectionState                                             OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_HasConnectedPeripheralChanged
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_PlayerState_HasConnectedPeripheralChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPlayerState*)                   ForPlayer                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EPilgrimPeripheralInputMode)               PeripheralType                                              OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(bool)                                      HasConnectedPeripheral                                      OFFSET(get<bool>, {0x9, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimQuestFilter
/// Size: 0x00C8 (0x000000 - 0x0000C8)
class FPilgrimQuestFilter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FGameplayTagQuery)                         QuestTagQuery                                               OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	SMember(FGameplayTagQuery)                         QuestObjectiveFilterQuery                                   OFFSET(getStruct<T>, {0x48, 72, 0, 0})
	SMember(FSongShortNameMatcher)                     QuestObjectiveFilterMatcher                                 OFFSET(getStruct<T>, {0x90, 24, 0, 0})
	SMember(FSongItemDefPrimaryAssetNameMatcher)       QuestObjectiveSongSIDMatcher                                OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	DMember(bool)                                      bShowCompletedQuests                                        OFFSET(get<bool>, {0xC0, 1, 0, 0})
	DMember(bool)                                      bShowUpdatedQuests                                          OFFSET(get<bool>, {0xC1, 1, 0, 0})
	DMember(bool)                                      bShowUnchangedQuests                                        OFFSET(get<bool>, {0xC2, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimQuestDisplayInfo
/// Size: 0x0070 (0x000000 - 0x000070)
class FPilgrimQuestDisplayInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FText)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FText)                                     ShortDescription                                            OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FText)                                     CompletionText                                              OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FFortRewardInfo)                           RewardInfo                                                  OFFSET(getStruct<T>, {0x40, 48, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_StreakChanged
/// Size: 0x000C (0x000000 - 0x00000C)
class FPilgrimEvent_Scoring_StreakChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   CurrentStreak                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   PreviousStreak                                              OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxStreak                                                   OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_StarChanged
/// Size: 0x000C (0x000000 - 0x00000C)
class FPilgrimEvent_Scoring_StarChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   CurrentStar                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   PreviousStar                                                OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxStar                                                     OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_MaxStreakStateChanged
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_Scoring_MaxStreakStateChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPlayerPawn*)                    ForPlayer                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   PlayerIndex                                                 OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bIsAtMaxStreak                                              OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_OverdriveReady
/// Size: 0x0001 (0x000000 - 0x000001)
class FPilgrimEvent_Scoring_OverdriveReady : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_OverdriveActiveChanged
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_Scoring_OverdriveActiveChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      IsActive                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(class APlayerState*)                       DeployingPlayer                                             OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_FinishedOverdriveSection
/// Size: 0x0001 (0x000000 - 0x000001)
class FPilgrimEvent_Scoring_FinishedOverdriveSection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bIsSuccess                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_PerformanceDataResult
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FPilgrimEvent_Scoring_PerformanceDataResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(class AFortPlayerPawn*)                    ForPlayer                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(double)                                    TotalOffset                                                 OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   TotalSamples                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   TotalGems                                                   OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   TotalHits                                                   OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   TotalMisses                                                 OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   TotalPasses                                                 OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   TotalNotes                                                  OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(float)                                     MaxValue                                                    OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     MinValue                                                    OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     StandardDeviation                                           OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     AverageOffset                                               OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   MaxStreak                                                   OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(float)                                     TimeInOverdriveMs                                           OFFSET(get<float>, {0x3C, 4, 0, 0})
	CMember(TMap<int32_t, int32_t>)                    HistogramSamples                                            OFFSET(get<T>, {0x40, 80, 0, 0})
	CMember(TArray<int32_t>)                           AccuracyTierCounts                                          OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_FullComboLost
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_Scoring_FullComboLost : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPlayerState*)                   ForPlayer                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   PlayerIndex                                                 OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_PerfectComboLost
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_Scoring_PerfectComboLost : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPlayerState*)                   ForPlayer                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   PlayerIndex                                                 OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_ScoreChanged
/// Size: 0x0020 (0x000000 - 0x000020)
class FPilgrimEvent_Scoring_ScoreChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class AFortPlayerPawn*)                    ForPlayer                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   PlayerIndex                                                 OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     SoloDelta                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     BandDelta                                                   OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     SoloScore                                                   OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     BandScore                                                   OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_AutoplayActiveChanged
/// Size: 0x0001 (0x000000 - 0x000001)
class FPilgrimEvent_Scoring_AutoplayActiveChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bIsAutoplayActive                                           OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_GemScored
/// Size: 0x0068 (0x000000 - 0x000068)
class FPilgrimEvent_Scoring_GemScored : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(class AFortPlayerState*)                   ForPlayer                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FPilgrimGemHitAccuracy)                    Accuracy                                                    OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	SMember(FTrackItemInfo)                            Gem                                                         OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	DMember(float)                                     BaseScore                                                   OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     BonusScore                                                  OFFSET(get<float>, {0x64, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_LocalPlayerMiss
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_LocalPlayerMiss : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPlayerState*)                   ForPlayer                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EPilgrimTrackType)                         CurrentTrackType                                            OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(EPilgrimTrackLane)                         Lanes                                                       OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_LocalPlayerStrummed
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_LocalPlayerStrummed : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<EPilgrimTrackLane>)                 LanesPressed                                                OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_OnMistake
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_Scoring_OnMistake : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EScoringMistakeType)                       MistakeType                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(class AFortPlayerState*)                   Player                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_Modulated
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_Scoring_Modulated : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPlayerState*)                   ForPlayer                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     CurrentModulation                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     LastModulation                                              OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_ScoringModifierAdded
/// Size: 0x0020 (0x000000 - 0x000020)
class FPilgrimEvent_ScoringModifierAdded : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UPilgrimScoringModifier*)            ScoringModifier                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<class UPilgrimScoringModifier*>)    ScoringModifiers                                            OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(EPilgrimScoringTarget)                     Target                                                      OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_ScoringModifierRemoved
/// Size: 0x0020 (0x000000 - 0x000020)
class FPilgrimEvent_ScoringModifierRemoved : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UPilgrimScoringModifier*)            ScoringModifier                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<class UPilgrimScoringModifier*>)    RemainingScoringModifiers                                   OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(EPilgrimScoringTarget)                     Target                                                      OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PilgrimSettings_TrackBackgroundOpacityChanged
/// Size: 0x0001 (0x000000 - 0x000001)
class FPilgrimEvent_PilgrimSettings_TrackBackgroundOpacityChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PilgrimSettings_UseAlternative5LaneTouchLayoutChanged
/// Size: 0x0001 (0x000000 - 0x000001)
class FPilgrimEvent_PilgrimSettings_UseAlternative5LaneTouchLayoutChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bUseAlternative5LaneTouchLayout                             OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PilgrimSettings_UseGuitarLeftyFlipChanged
/// Size: 0x0001 (0x000000 - 0x000001)
class FPilgrimEvent_PilgrimSettings_UseGuitarLeftyFlipChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bUseGuitarLeftyFlip                                         OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.RBTrackInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FRBTrackInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_SongLoading_Started
/// Size: 0x0004 (0x000000 - 0x000004)
class FPilgrimEvent_SongLoading_Started : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Song                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_SongLoading_EveryoneFinished
/// Size: 0x0004 (0x000000 - 0x000004)
class FPilgrimEvent_SongLoading_EveryoneFinished : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Song                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimSongPlaylistEntry
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimSongPlaylistEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UPilgrimSongMetadata*)               Song                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EPilgrimSongDifficulty)                    SongDifficulty                                              OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimSongSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimSongSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UPilgrimSongMetadata*)               Song                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     SongShortName                                               OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(EPilgrimSongDifficulty)                    Difficulty                                                  OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(EPilgrimTrackType)                         TrackType                                                   OFFSET(get<T>, {0xD, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimSongTime
/// Size: 0x0018 (0x000000 - 0x000018)
class FPilgrimSongTime : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimStreakInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FPilgrimStreakInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   NotesCount                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     DamageMultiplier                                            OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimCoreToggleRenderTargetEvent
/// Size: 0x0001 (0x000000 - 0x000001)
class FPilgrimCoreToggleRenderTargetEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bToggleRenderTargetOn                                       OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimTrackItemKey
/// Size: 0x0008 (0x000000 - 0x000008)
class FPilgrimTrackItemKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/PilgrimCoreRuntime.TrackSpawnParams
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FTrackSpawnParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimVerbMessageBase
/// Size: 0x00B8 (0x000078 - 0x000130)
class FPilgrimVerbMessageBase : public FVerbMessage
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FName)                                     SongShortName                                               OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	SMember(FSubjectTagsPair)                          SongID                                                      OFFSET(getStruct<T>, {0x80, 56, 0, 0})
	SMember(FSubjectTagsPair)                          InstrumentId                                                OFFSET(getStruct<T>, {0xB8, 56, 0, 0})
	SMember(FSubjectTagsPair)                          BandInstrumentIds                                           OFFSET(getStruct<T>, {0xF0, 56, 0, 0})
	DMember(char)                                      NumBandMembers                                              OFFSET(get<char>, {0x128, 1, 0, 0})
	CMember(EPilgrimSongDifficulty)                    Difficulty                                                  OFFSET(get<T>, {0x129, 1, 0, 0})
	SMember(FName)                                     SongItemDefPrimaryAssetName                                 OFFSET(getStruct<T>, {0x12C, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimVerbMessage_AccumulateStars
/// Size: 0x0008 (0x000130 - 0x000138)
class FPilgrimVerbMessage_AccumulateStars : public FPilgrimVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	DMember(char)                                      TotalStars                                                  OFFSET(get<char>, {0x130, 1, 0, 0})
	DMember(char)                                      DeltaStars                                                  OFFSET(get<char>, {0x131, 1, 0, 0})
	DMember(bool)                                      bIsBandStar                                                 OFFSET(get<bool>, {0x132, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimVerbMessage_DeployOverdrive
/// Size: 0x0000 (0x000130 - 0x000130)
class FPilgrimVerbMessage_DeployOverdrive : public FPilgrimVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimVerbMessage_Note
/// Size: 0x0010 (0x000130 - 0x000140)
class FPilgrimVerbMessage_Note : public FPilgrimVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(bool)                                      DidHit                                                      OFFSET(get<bool>, {0x130, 1, 0, 0})
	DMember(bool)                                      DidPass                                                     OFFSET(get<bool>, {0x131, 1, 0, 0})
	DMember(bool)                                      DidMiss                                                     OFFSET(get<bool>, {0x132, 1, 0, 0})
	DMember(bool)                                      IsChord                                                     OFFSET(get<bool>, {0x133, 1, 0, 0})
	DMember(int32_t)                                   NoteStreak                                                  OFFSET(get<int32_t>, {0x134, 4, 0, 0})
	DMember(int32_t)                                   Multiplier                                                  OFFSET(get<int32_t>, {0x138, 4, 0, 0})
	DMember(float)                                     TimeSinceLastNoteMS                                         OFFSET(get<float>, {0x13C, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimVerbMessage_OverdriveComplete
/// Size: 0x0000 (0x000130 - 0x000130)
class FPilgrimVerbMessage_OverdriveComplete : public FPilgrimVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimVerbMessage_ScoreEvent
/// Size: 0x0028 (0x000130 - 0x000158)
class FPilgrimVerbMessage_ScoreEvent : public FPilgrimVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	DMember(int32_t)                                   CurrentScore                                                OFFSET(get<int32_t>, {0x130, 4, 0, 0})
	DMember(int32_t)                                   DeltaScore                                                  OFFSET(get<int32_t>, {0x134, 4, 0, 0})
	DMember(int32_t)                                   CurrentStars                                                OFFSET(get<int32_t>, {0x138, 4, 0, 0})
	DMember(int32_t)                                   DeltaStars                                                  OFFSET(get<int32_t>, {0x13C, 4, 0, 0})
	DMember(float)                                     CurrentChordScore                                           OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     DeltaChordScore                                             OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(float)                                     CurrentSustainScore                                         OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(float)                                     DeltaSustainScore                                           OFFSET(get<float>, {0x14C, 4, 0, 0})
	DMember(bool)                                      bIsInOverdrive                                              OFFSET(get<bool>, {0x150, 1, 0, 0})
	DMember(bool)                                      bIsBandScore                                                OFFSET(get<bool>, {0x151, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimVerbMessage_SetlistComplete
/// Size: 0x0018 (0x000078 - 0x000090)
class FPilgrimVerbMessage_SetlistComplete : public FVerbMessage
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(float)                                     SoloScore                                                   OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     BandScore                                                   OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(int32_t)                                   SoloStars                                                   OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	DMember(int32_t)                                   BandStars                                                   OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	DMember(int32_t)                                   NumSongs                                                    OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	DMember(char)                                      NumBandMembers                                              OFFSET(get<char>, {0x8C, 1, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimVerbMessage_SongCompleted
/// Size: 0x0028 (0x000130 - 0x000158)
class FPilgrimVerbMessage_SongCompleted : public FPilgrimVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	DMember(float)                                     SoloScore                                                   OFFSET(get<float>, {0x130, 4, 0, 0})
	DMember(float)                                     BandScore                                                   OFFSET(get<float>, {0x134, 4, 0, 0})
	DMember(int32_t)                                   SoloStars                                                   OFFSET(get<int32_t>, {0x138, 4, 0, 0})
	DMember(int32_t)                                   BandStars                                                   OFFSET(get<int32_t>, {0x13C, 4, 0, 0})
	DMember(int32_t)                                   NumPlayers                                                  OFFSET(get<int32_t>, {0x140, 4, 0, 0})
	DMember(float)                                     NoteAccuracy                                                OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(float)                                     OverdriveTime                                               OFFSET(get<float>, {0x148, 4, 0, 0})
	CMember(EComboType)                                ComboType                                                   OFFSET(get<T>, {0x14C, 1, 0, 0})
	DMember(float)                                     PercentPerfect                                              OFFSET(get<float>, {0x150, 4, 0, 0})
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimVerbMessage_SongStarted
/// Size: 0x0000 (0x000130 - 0x000130)
class FPilgrimVerbMessage_SongStarted : public FPilgrimVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimVerbFilter_DeployOverdrive
/// Size: 0x0000 (0x0001C0 - 0x0001C0)
class FPilgrimVerbFilter_DeployOverdrive : public FPilgrimObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimTrackLane
/// Size: 0x08
enum class EPilgrimTrackLane : uint8_t
{
	EPilgrimTrackLane__TrackLaneNone                                                 = 0,
	EPilgrimTrackLane__TrackLane0                                                    = 1,
	EPilgrimTrackLane__TrackLane1                                                    = 2,
	EPilgrimTrackLane__TrackLane2                                                    = 4,
	EPilgrimTrackLane__TrackLane3                                                    = 8,
	EPilgrimTrackLane__TrackLane4                                                    = 16,
	EPilgrimTrackLane__TrackLane5                                                    = 32,
	EPilgrimTrackLane__NumTrackLanes                                                 = 6
};

/// Enum /Script/PilgrimCoreRuntime.EBeatMarkerType
/// Size: 0x03
enum class EBeatMarkerType : uint8_t
{
	EBeatMarkerType__None                                                            = 0,
	EBeatMarkerType__OnBeat                                                          = 1,
	EBeatMarkerType__OnDownbeat                                                      = 2
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimTrackType
/// Size: 0x10
enum class EPilgrimTrackType : uint8_t
{
	EPilgrimTrackType__TrackGuitar                                                   = 0,
	EPilgrimTrackType__TrackBass                                                     = 1,
	EPilgrimTrackType__TrackVocals                                                   = 2,
	EPilgrimTrackType__TrackDrum                                                     = 3,
	EPilgrimTrackType__TrackPlasticGuitar                                            = 4,
	EPilgrimTrackType__TrackPlasticBass                                              = 5,
	EPilgrimTrackType__TrackPlasticDrum                                              = 6,
	EPilgrimTrackType__TrackEvents                                                   = 7,
	EPilgrimTrackType__TrackNone                                                     = 8,
	EPilgrimTrackType__NumTrackTypes                                                 = 8
};

/// Enum /Script/PilgrimCoreRuntime.EOverdriveScoringState
/// Size: 0x03
enum class EOverdriveScoringState : uint8_t
{
	EOverdriveScoringState__None                                                     = 0,
	EOverdriveScoringState__FailedSection                                            = 1,
	EOverdriveScoringState__ActiveSection                                            = 2
};

/// Enum /Script/PilgrimCoreRuntime.EMusicBattleProjectileType
/// Size: 0x05
enum class EMusicBattleProjectileType : uint8_t
{
	EMusicBattleProjectileType__None                                                 = 0,
	EMusicBattleProjectileType__BeamSuccess                                          = 1,
	EMusicBattleProjectileType__BeamFailure                                          = 2,
	EMusicBattleProjectileType__BeamClash                                            = 3,
	EMusicBattleProjectileType__BothMiss                                             = 4
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimSongDifficulty
/// Size: 0x06
enum class EPilgrimSongDifficulty : uint8_t
{
	EPilgrimSongDifficulty__DifficultyEasy                                           = 0,
	EPilgrimSongDifficulty__DifficultyMedium                                         = 1,
	EPilgrimSongDifficulty__DifficultyHard                                           = 2,
	EPilgrimSongDifficulty__DifficultyExpert                                         = 3,
	EPilgrimSongDifficulty__None                                                     = 4,
	EPilgrimSongDifficulty__NumDifficulties                                          = 5
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimSongPlayMethod
/// Size: 0x03
enum class EPilgrimSongPlayMethod : uint8_t
{
	EPilgrimSongPlayMethod__Invalid                                                  = 0,
	EPilgrimSongPlayMethod__Streaming                                                = 1,
	EPilgrimSongPlayMethod__LocalMetasounds                                          = 2
};

/// Enum /Script/PilgrimCoreRuntime.EMusicBattleEndReason
/// Size: 0x05
enum class EMusicBattleEndReason : uint8_t
{
	EMusicBattleEndReason__NoReason                                                  = 0,
	EMusicBattleEndReason__CompletedNormally                                         = 1,
	EMusicBattleEndReason__HardStopAndSkipPostGame                                   = 2,
	EMusicBattleEndReason__HardStopAndContinueFlow                                   = 3,
	EMusicBattleEndReason__RestartingSong                                            = 4
};

/// Enum /Script/PilgrimCoreRuntime.EMusicBattleClientUpdate
/// Size: 0x04
enum class EMusicBattleClientUpdate : uint8_t
{
	EMusicBattleClientUpdate__SongFinished                                           = 0,
	EMusicBattleClientUpdate__TearDownFinished                                       = 1,
	EMusicBattleClientUpdate__StopAndSkipPostGame                                    = 2,
	EMusicBattleClientUpdate__StopAndRestartSong                                     = 3
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimTimedInputType
/// Size: 0x05
enum class EPilgrimTimedInputType : uint8_t
{
	EPilgrimTimedInputType__None                                                     = 0,
	EPilgrimTimedInputType__Lane                                                     = 1,
	EPilgrimTimedInputType__DeployOverdrive                                          = 2,
	EPilgrimTimedInputType__Strum                                                    = 3,
	EPilgrimTimedInputType__Modulate                                                 = 4
};

/// Enum /Script/PilgrimCoreRuntime.EMusicBattleType
/// Size: 0x05
enum class EMusicBattleType : uint8_t
{
	EMusicBattleType__None                                                           = 0,
	EMusicBattleType__SinglePlayerLocalVs                                            = 1,
	EMusicBattleType__MultiplayerVs                                                  = 2,
	EMusicBattleType__SinglePlayerSparks                                             = 3,
	EMusicBattleType__TeamQuickplay                                                  = 4
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimLeaderboardType
/// Size: 0x11
enum class EPilgrimLeaderboardType : uint8_t
{
	EPilgrimLeaderboardType__SoloGuitar                                              = 0,
	EPilgrimLeaderboardType__SoloBass                                                = 1,
	EPilgrimLeaderboardType__SoloVocals                                              = 2,
	EPilgrimLeaderboardType__SoloDrum                                                = 3,
	EPilgrimLeaderboardType__BandDuo                                                 = 4,
	EPilgrimLeaderboardType__BandTrio                                                = 5,
	EPilgrimLeaderboardType__BandQuad                                                = 6,
	EPilgrimLeaderboardType__SoloPeripheralGuitar                                    = 7,
	EPilgrimLeaderboardType__SoloPeripheralBass                                      = 8,
	EPilgrimLeaderboardType__SoloPeripheralDrum                                      = 9,
	EPilgrimLeaderboardType__Invalid                                                 = 10
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimPlayerFeedSortType
/// Size: 0x04
enum class EPilgrimPlayerFeedSortType : uint8_t
{
	EPilgrimPlayerFeedSortType__NewestScore                                          = 0,
	EPilgrimPlayerFeedSortType__OldestScore                                          = 1,
	EPilgrimPlayerFeedSortType__HighestScore                                         = 2,
	EPilgrimPlayerFeedSortType__LowestScore                                          = 3
};

/// Enum /Script/PilgrimCoreRuntime.ESongShortNameMatchType
/// Size: 0x04
enum class ESongShortNameMatchType : uint8_t
{
	ESongShortNameMatchType__AlwaysMatch                                             = 0,
	ESongShortNameMatchType__MatchAny                                                = 1,
	ESongShortNameMatchType__MatchAll                                                = 2,
	ESongShortNameMatchType__MatchNone                                               = 3
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimPeripheralInputMode
/// Size: 0x02
enum class EPilgrimPeripheralInputMode : uint8_t
{
	EPilgrimPeripheralInputMode__None                                                = 0,
	EPilgrimPeripheralInputMode__Guitar                                              = 1
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimCantAddSongReason
/// Size: 0x07
enum class EPilgrimCantAddSongReason : uint8_t
{
	EPilgrimCantAddSongReason__None                                                  = 0,
	EPilgrimCantAddSongReason__SetlistLocked                                         = 1,
	EPilgrimCantAddSongReason__SongAlreadyAdded                                      = 2,
	EPilgrimCantAddSongReason__PlayerHasAddedMaxSongs                                = 3,
	EPilgrimCantAddSongReason__InvalidSongShortName                                  = 4,
	EPilgrimCantAddSongReason__MissingSong                                           = 5,
	EPilgrimCantAddSongReason__SongNotAvailable                                      = 6
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimPlayerHistoryScoreParam
/// Size: 0x03
enum class EPilgrimPlayerHistoryScoreParam : uint8_t
{
	EPilgrimPlayerHistoryScoreParam__AllScores                                       = 0,
	EPilgrimPlayerHistoryScoreParam__HigherScores                                    = 1,
	EPilgrimPlayerHistoryScoreParam__LowerScores                                     = 2
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimStreamerStatus
/// Size: 0x07
enum class EPilgrimStreamerStatus : uint8_t
{
	EPilgrimStreamerStatus__Idle                                                     = 0,
	EPilgrimStreamerStatus__DownloadingMidi                                          = 1,
	EPilgrimStreamerStatus__Preparing                                                = 2,
	EPilgrimStreamerStatus__Opening                                                  = 3,
	EPilgrimStreamerStatus__Ready                                                    = 4,
	EPilgrimStreamerStatus__Streaming                                                = 5,
	EPilgrimStreamerStatus__Errored                                                  = 6
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimStateMachineMessage
/// Size: 0x05
enum class EPilgrimStateMachineMessage : uint8_t
{
	EPilgrimStateMachineMessage__None                                                = 0,
	EPilgrimStateMachineMessage__Solo_PlayPreviousSong                               = 1,
	EPilgrimStateMachineMessage__Solo_PlayNextSong                                   = 2,
	EPilgrimStateMachineMessage__Solo_LeaveStage                                     = 3,
	EPilgrimStateMachineMessage__Multiplayer_LeaveStage                              = 4
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimAnalyticsSongEndReason
/// Size: 0x03
enum class EPilgrimAnalyticsSongEndReason : uint8_t
{
	EPilgrimAnalyticsSongEndReason__SongFinished                                     = 0,
	EPilgrimAnalyticsSongEndReason__SongRestarted                                    = 1,
	EPilgrimAnalyticsSongEndReason__PlayerDisconnected                               = 2
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimAnalyticsSongAccessScope
/// Size: 0x04
enum class EPilgrimAnalyticsSongAccessScope : uint8_t
{
	EPilgrimAnalyticsSongAccessScope__None                                           = 0,
	EPilgrimAnalyticsSongAccessScope__Player                                         = 1,
	EPilgrimAnalyticsSongAccessScope__Party                                          = 2,
	EPilgrimAnalyticsSongAccessScope__All                                            = 3
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimAnalyticsResultsReturn
/// Size: 0x04
enum class EPilgrimAnalyticsResultsReturn : uint8_t
{
	EPilgrimAnalyticsResultsReturn__None                                             = 0,
	EPilgrimAnalyticsResultsReturn__LeaveToLobby                                     = 1,
	EPilgrimAnalyticsResultsReturn__LeaveStage                                       = 2,
	EPilgrimAnalyticsResultsReturn__LeaveStage_Timer                                 = 3
};

/// Enum /Script/PilgrimCoreRuntime.EPresetLanesDifficulty
/// Size: 0x02
enum class EPresetLanesDifficulty : uint8_t
{
	EPresetLanesDifficulty__General                                                  = 4,
	EPresetLanesDifficulty__Expert                                                   = 5
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimInputCategory
/// Size: 0x03
enum class EPilgrimInputCategory : uint8_t
{
	EPilgrimInputCategory__Lane                                                      = 0,
	EPilgrimInputCategory__Overdrive                                                 = 1,
	EPilgrimInputCategory__Strum                                                     = 2
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimEvaluatorRuleSet
/// Size: 0x02
enum class EPilgrimEvaluatorRuleSet : uint8_t
{
	standard                                                                         = 0,
	StrummedGuitar                                                                   = 1
};

/// Enum /Script/PilgrimCoreRuntime.EGemReleaseHandlingBehavior
/// Size: 0x02
enum class EGemReleaseHandlingBehavior : uint8_t
{
	DefaultProcessing                                                                = 0,
	ForceRelease                                                                     = 1
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimGemInputState
/// Size: 0x04
enum class EPilgrimGemInputState : uint8_t
{
	EPilgrimGemInputState__GemHit                                                    = 0,
	EPilgrimGemInputState__UserSwingAndMiss                                          = 1,
	EPilgrimGemInputState__GemPassed                                                 = 2,
	EPilgrimGemInputState__NumGemInputStates                                         = 3
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimPersonalBestType
/// Size: 0x04
enum class EPilgrimPersonalBestType : uint8_t
{
	EPilgrimPersonalBestType__SoloScore                                              = 0,
	EPilgrimPersonalBestType__BandScore                                              = 1,
	EPilgrimPersonalBestType__SpotlightScore                                         = 2,
	EPilgrimPersonalBestType__Invalid                                                = 3
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimAccumulateStarsMessageType
/// Size: 0x03
enum class EPilgrimAccumulateStarsMessageType : uint8_t
{
	EPilgrimAccumulateStarsMessageType__BandStars                                    = 0,
	EPilgrimAccumulateStarsMessageType__SoloStars                                    = 1,
	EPilgrimAccumulateStarsMessageType__Count                                        = 2
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimAccumulateStarTypes
/// Size: 0x03
enum class EPilgrimAccumulateStarTypes : uint8_t
{
	EPilgrimAccumulateStarTypes__None                                                = 0,
	EPilgrimAccumulateStarTypes__Regular                                             = 1,
	EPilgrimAccumulateStarTypes__Golden                                              = 2
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimNoteEventMessageIncrementType
/// Size: 0x03
enum class EPilgrimNoteEventMessageIncrementType : uint8_t
{
	EPilgrimNoteEventMessageIncrementType__ByTime                                    = 0,
	EPilgrimNoteEventMessageIncrementType__ByValue                                   = 1,
	EPilgrimNoteEventMessageIncrementType__Count                                     = 2
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimScoreEventMessageType
/// Size: 0x03
enum class EPilgrimScoreEventMessageType : uint8_t
{
	EPilgrimScoreEventMessageType__BandScore                                         = 0,
	EPilgrimScoreEventMessageType__SoloScore                                         = 1,
	EPilgrimScoreEventMessageType__Count                                             = 2
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimScoreEventMessageIncrementType
/// Size: 0x04
enum class EPilgrimScoreEventMessageIncrementType : uint8_t
{
	EPilgrimScoreEventMessageIncrementType__ByScore                                  = 0,
	EPilgrimScoreEventMessageIncrementType__ByStars                                  = 1,
	EPilgrimScoreEventMessageIncrementType__ByValue                                  = 2,
	EPilgrimScoreEventMessageIncrementType__Count                                    = 3
};

/// Enum /Script/PilgrimCoreRuntime.EScoringMistakeType
/// Size: 0x02
enum class EScoringMistakeType : uint8_t
{
	EScoringMistakeType__Miss                                                        = 0,
	EScoringMistakeType__Pass                                                        = 1
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimScoringMode
/// Size: 0x02
enum class EPilgrimScoringMode : uint8_t
{
	EPilgrimScoringMode__IncludeModifiers                                            = 0,
	EPilgrimScoringMode__ExcludeModifiers                                            = 1
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimScoringTarget
/// Size: 0x06
enum class EPilgrimScoringTarget : uint8_t
{
	EPilgrimScoringTarget__None                                                      = 0,
	EPilgrimScoringTarget__BaseGem                                                   = 1,
	EPilgrimScoringTarget__StreakMultiplier                                          = 2,
	EPilgrimScoringTarget__OverdriveMultiplier                                       = 3,
	EPilgrimScoringTarget__SustainPerBeat                                            = 4,
	EPilgrimScoringTarget__AccuracyMultiplier                                        = 5
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimSongSortMethod
/// Size: 0x03
enum class EPilgrimSongSortMethod : uint8_t
{
	EPilgrimSongSortMethod__Artist                                                   = 0,
	EPilgrimSongSortMethod__Title                                                    = 1,
	EPilgrimSongSortMethod__Year                                                     = 2
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimSongSortDirection
/// Size: 0x02
enum class EPilgrimSongSortDirection : uint8_t
{
	EPilgrimSongSortDirection__Ascending                                             = 0,
	EPilgrimSongSortDirection__Descending                                            = 1
};

/// Enum /Script/PilgrimCoreRuntime.EWidgetTouchKbmControllerTransitionType
/// Size: 0x04
enum class EWidgetTouchKbmControllerTransitionType : uint8_t
{
	EWidgetTouchKbmControllerTransitionType__Opacity                                 = 0,
	EWidgetTouchKbmControllerTransitionType__Collapse                                = 1,
	EWidgetTouchKbmControllerTransitionType__DoNothing                               = 2,
	EWidgetTouchKbmControllerTransitionType__Count                                   = 3
};

/// Enum /Script/PilgrimCoreRuntime.EGemHitMethod
/// Size: 0x02
enum class EGemHitMethod : uint8_t
{
	Press                                                                            = 0,
	Release                                                                          = 1
};

/// Enum /Script/PilgrimCoreRuntime.EComboType
/// Size: 0x03
enum class EComboType : uint8_t
{
	EComboType__None                                                                 = 0,
	EComboType__Full                                                                 = 1,
	EComboType__Perfect                                                              = 2
};

