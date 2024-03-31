
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameFeatures
/// dependency: GameplayAbilities
/// dependency: MotionTrajectory
/// dependency: PoseSearch
/// dependency: ProxyTable

/// Class /Script/LocomotionInitiativeRuntime.FortLocomotionLayerMaskDataAsset
/// Size: 0x0020 (0x000030 - 0x000050)
class UFortLocomotionLayerMaskDataAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     MaskingHeadTorsoAlpha                                       OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     MaskingLeftArmAlpha                                         OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MaskingRightArmAlpha                                        OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     MaskingWeaponAlpha                                          OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     MutingHeadTorsoAlpha                                        OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     MutingLeftArmAlpha                                          OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     MutingRightArmAlpha                                         OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     MutingWeaponAlpha                                           OFFSET(get<float>, {0x4C, 4, 0, 0})


	/// Functions
	// Function /Script/LocomotionInitiativeRuntime.FortLocomotionLayerMaskDataAsset.ApplyTo
	// void ApplyTo(FFortLocomotionLayerMaskDataSet& DataAsset);                                                                // [0xb7d6f30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LocomotionInitiativeRuntime.FortPlayerMotionMatchingLocomotionAnimInstance
/// Size: 0x0460 (0x0015F0 - 0x001A50)
class UFortPlayerMotionMatchingLocomotionAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6736;

public:
	SMember(FCachedAnimStateArray)                     IdleStatesData                                              OFFSET(getStruct<T>, {0x15F0, 24, 0, 0})
	SMember(FVector)                                   FutureRootMotionVelocity                                    OFFSET(getStruct<T>, {0x1608, 24, 0, 0})
	SMember(FMotionMatchingLODConfig)                  HighEndConfig                                               OFFSET(getStruct<T>, {0x1620, 56, 0, 0})
	SMember(FMotionMatchingLODConfig)                  LowEndConfig                                                OFFSET(getStruct<T>, {0x1658, 56, 0, 0})
	SMember(FMotionMatchingLODConfig)                  CurrentLODConfig                                            OFFSET(getStruct<T>, {0x1690, 56, 0, 0})
	CMember(class UAnimSequence*)                      SelectedIdleBreak                                           OFFSET(get<T>, {0x16C8, 8, 0, 0})
	CMember(class UProxyAsset*)                        MotionMatchingLODProxyAsset                                 OFFSET(get<T>, {0x16D0, 8, 0, 0})
	DMember(int32_t)                                   MotionMatchingLOD                                           OFFSET(get<int32_t>, {0x16D8, 4, 0, 0})
	SMember(FMotionMatchingBlendInfo)                  MotionMatchingBlendInfo                                     OFFSET(getStruct<T>, {0x16DC, 8, 0, 0})
	CMember(class UClass*)                             StopBranchOutWindowNotifyClass                              OFFSET(get<T>, {0x16E8, 8, 0, 0})
	CMember(EFortMotionMatchingLocomotionState)        LocomotionState                                             OFFSET(get<T>, {0x16F0, 1, 0, 0})
	DMember(float)                                     StartToLoopSearchDelaySeconds                               OFFSET(get<float>, {0x16F4, 4, 0, 0})
	DMember(float)                                     PivotToLoopSearchDelaySeconds                               OFFSET(get<float>, {0x16F8, 4, 0, 0})
	DMember(float)                                     PivotSpeedThreshold                                         OFFSET(get<float>, {0x16FC, 4, 0, 0})
	DMember(float)                                     PivotDotProductThresholdRun                                 OFFSET(get<float>, {0x1700, 4, 0, 0})
	DMember(float)                                     DiagonalDetectionThreshold                                  OFFSET(get<float>, {0x1704, 4, 0, 0})
	DMember(float)                                     PivotDotProductThresholdWalk                                OFFSET(get<float>, {0x1708, 4, 0, 0})
	DMember(float)                                     LocomotionStateTime                                         OFFSET(get<float>, {0x170C, 4, 0, 0})
	DMember(float)                                     VelocityDirection                                           OFFSET(get<float>, {0x1710, 4, 0, 0})
	DMember(float)                                     MotionMatchingWeight                                        OFFSET(get<float>, {0x1714, 4, 0, 0})
	CMember(EPoseSearchInterruptMode)                  DatabaseSearchInterruptMode                                 OFFSET(get<T>, {0x1718, 1, 0, 0})
	DMember(bool)                                      bUseOrientationWarping                                      OFFSET(get<bool>, {0x1719, 1, 0, 0})
	DMember(bool)                                      bUseFutureForOrientationWarping                             OFFSET(get<bool>, {0x171A, 1, 0, 0})
	DMember(bool)                                      bIsLowEnd                                                   OFFSET(get<bool>, {0x171B, 1, 0, 0})
	DMember(bool)                                      bUseLocomotionBlendspace                                    OFFSET(get<bool>, {0x171C, 1, 0, 0})
	DMember(bool)                                      bShouldPlayIdle                                             OFFSET(get<bool>, {0x171D, 1, 0, 0})
	DMember(bool)                                      bShouldPlayIdleBreak                                        OFFSET(get<bool>, {0x171E, 1, 0, 0})
	DMember(bool)                                      bShouldExitIdleBreak                                        OFFSET(get<bool>, {0x171F, 1, 0, 0})
	DMember(bool)                                      bShouldExitIdleBreakSlow                                    OFFSET(get<bool>, {0x1720, 1, 0, 0})
	DMember(float)                                     IdleTransitionTimer                                         OFFSET(get<float>, {0x1724, 4, 0, 0})
	DMember(float)                                     IdleBreakTimer                                              OFFSET(get<float>, {0x1728, 4, 0, 0})
	DMember(bool)                                      bBothHandsIKInHandSpace                                     OFFSET(get<bool>, {0x172C, 1, 0, 0})
	DMember(bool)                                      bIsCrouchedTransition                                       OFFSET(get<bool>, {0x172D, 1, 0, 0})
	DMember(bool)                                      bWasCrouching                                               OFFSET(get<bool>, {0x172E, 1, 0, 0})
	DMember(bool)                                      bShouldPlayStandToCrouchTransition                          OFFSET(get<bool>, {0x172F, 1, 0, 0})
	DMember(bool)                                      bShouldPlayCrouchToStandTransition                          OFFSET(get<bool>, {0x1730, 1, 0, 0})
	DMember(bool)                                      bShouldExitCrouchTransition                                 OFFSET(get<bool>, {0x1731, 1, 0, 0})
	DMember(bool)                                      bIsLocallyControlled                                        OFFSET(get<bool>, {0x1732, 1, 0, 0})
	DMember(float)                                     CameraSpamYawThreshold                                      OFFSET(get<float>, {0x1734, 4, 0, 0})
	DMember(float)                                     CameraSpamCoolDownSeconds                                   OFFSET(get<float>, {0x1738, 4, 0, 0})
	DMember(float)                                     CameraSpamSearchThrottleTime                                OFFSET(get<float>, {0x173C, 4, 0, 0})
	DMember(float)                                     DefaultSearchThrottleTime                                   OFFSET(get<float>, {0x1740, 4, 0, 0})
	DMember(float)                                     SearchThrottleTime                                          OFFSET(get<float>, {0x1744, 4, 0, 0})
	DMember(float)                                     AdditiveLeanAlpha                                           OFFSET(get<float>, {0x1748, 4, 0, 0})
	DMember(bool)                                      bEnableAdditiveLeans                                        OFFSET(get<bool>, {0x174C, 1, 0, 0})
	DMember(bool)                                      bEnableAdditiveRunLeans                                     OFFSET(get<bool>, {0x174D, 1, 0, 0})
	DMember(bool)                                      bDisableArcs                                                OFFSET(get<bool>, {0x174E, 1, 0, 0})
	DMember(bool)                                      bDisableDiamonds                                            OFFSET(get<bool>, {0x174F, 1, 0, 0})
	DMember(bool)                                      bIdleToMotionMatchingNoInertialization                      OFFSET(get<bool>, {0x1750, 1, 0, 0})
	DMember(bool)                                      bRelaxedStateChanged                                        OFFSET(get<bool>, {0x1751, 1, 0, 0})
	DMember(bool)                                      bIsMelee                                                    OFFSET(get<bool>, {0x1752, 1, 0, 0})
	DMember(bool)                                      bUseRelaxedMotionMatchingData                               OFFSET(get<bool>, {0x1753, 1, 0, 0})
	SMember(FPoseSearchQueryTrajectory)                Trajectory                                                  OFFSET(getStruct<T>, {0x1758, 16, 0, 0})
	SMember(FTrajectorySamplingData)                   TrajectorySamplingData                                      OFFSET(getStruct<T>, {0x1768, 32, 0, 0})
	SMember(FCharacterTrajectoryData)                  CharacterTrajectoryData                                     OFFSET(getStruct<T>, {0x1790, 480, 0, 0})
	DMember(float)                                     TrajectorySpeedMultiplier                                   OFFSET(get<float>, {0x1970, 4, 0, 0})
	DMember(float)                                     LowFrictionCustomMaxSpeed                                   OFFSET(get<float>, {0x1974, 4, 0, 0})
	DMember(float)                                     LowFrictionCustomBrakingDeceleration                        OFFSET(get<float>, {0x1978, 4, 0, 0})
	DMember(float)                                     LowFrictionCustomFriction                                   OFFSET(get<float>, {0x197C, 4, 0, 0})
	SMember(FFortMotionMatchingAngleSpamTracker)       AccelerationSpamTracker                                     OFFSET(getStruct<T>, {0x1980, 72, 0, 0})
	DMember(bool)                                      bIsPlayingIdleBreak                                         OFFSET(get<bool>, {0x1A3B, 1, 0, 0})
	DMember(bool)                                      bIsPlayingInterruptibleStop                                 OFFSET(get<bool>, {0x1A48, 1, 0, 0})
	DMember(bool)                                      bIsPlayingIdleDatabase                                      OFFSET(get<bool>, {0x1A49, 1, 0, 0})
	DMember(bool)                                      bHasReachedIdle                                             OFFSET(get<bool>, {0x1A4A, 1, 0, 0})


	/// Functions
	// Function /Script/LocomotionInitiativeRuntime.FortPlayerMotionMatchingLocomotionAnimInstance.OnUpdateMotionMatchingState
	// void OnUpdateMotionMatchingState(FAnimUpdateContext& Context, FAnimNodeReference& Node);                                 // [0x143c468] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LocomotionInitiativeRuntime.FortPlayerMotionMatchingLocomotionAnimInstance.OnUpdateMotionMatching
	// void OnUpdateMotionMatching(FAnimUpdateContext& Context, FAnimNodeReference& Node);                                      // [0x143b91c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LocomotionInitiativeRuntime.FortPlayerMotionMatchingLocomotionAnimInstance.OnUpdateIdleBreaks
	// void OnUpdateIdleBreaks(FAnimUpdateContext& Context, FAnimNodeReference& Node);                                          // [0x2dcab18] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LocomotionInitiativeRuntime.FortPlayerMotionMatchingLocomotionAnimInstance.GetMotionMatchingBlendProfile
	// class UBlendProfile* GetMotionMatchingBlendProfile();                                                                    // [0x29fc490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LocomotionInitiativeRuntime.LocomotionInitiativeComponent
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class ULocomotionInitiativeComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(class UClass*)                             MotionMatchingLocomotionAnimBlueprintClass                  OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UClass*)                             RigidBodyPBA_AnimBlueprintClass                             OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FScalableFloat)                            IsLocomotionInitiativeEnabled                               OFFSET(getStruct<T>, {0xB8, 40, 0, 0})
	CMember(class UAnimSequence*)                      CrouchShuffleInPlaceAnim                                    OFFSET(get<T>, {0xE0, 8, 0, 0})
};

/// Class /Script/LocomotionInitiativeRuntime.LocomotionInitiativeGameFeatureData
/// Size: 0x0008 (0x000530 - 0x000538)
class ULocomotionInitiativeGameFeatureData : public UFortGameFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1336;

public:
	SMember(FPerPlatformBool)                          EnableRequestedFullBodyPBAByDefault                         OFFSET(getStruct<T>, {0x530, 1, 0, 0})
	SMember(FPerPlatformBool)                          EnableSkydivingFullBodyPBAByDefault                         OFFSET(getStruct<T>, {0x531, 1, 0, 0})
	SMember(FPerPlatformBool)                          EnableDBNOCarriedFullBodyPBAByDefault                       OFFSET(getStruct<T>, {0x532, 1, 0, 0})
	SMember(FPerPlatformBool)                          SkydivingEnablePhysicsBasedAnimationByDefault               OFFSET(getStruct<T>, {0x533, 1, 0, 0})
};

/// Struct /Script/LocomotionInitiativeRuntime.FortLocomotionLayerMaskDataSet
/// Size: 0x0020 (0x000000 - 0x000020)
class FFortLocomotionLayerMaskDataSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     MaskingHeadTorsoAlpha                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaskingLeftArmAlpha                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaskingRightArmAlpha                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaskingWeaponAlpha                                          OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MutingHeadTorsoAlpha                                        OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MutingLeftArmAlpha                                          OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     MutingRightArmAlpha                                         OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     MutingWeaponAlpha                                           OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/LocomotionInitiativeRuntime.MotionMatchingLODConfig
/// Size: 0x0038 (0x000000 - 0x000038)
class FMotionMatchingLODConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UProxyTable*)                        MotionDatabaseProxyTable                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UAnimSequence*)                      StandIdleLoop                                               OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UAnimSequence*)                      CrouchIdleLoop                                              OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TArray<class UAnimSequence*>)              StandIdleBreak                                              OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<class UAnimSequence*>)              CrouchIdleBreak                                             OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/LocomotionInitiativeRuntime.MotionMatchingBlendInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FMotionMatchingBlendInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     BlendTime                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FName)                                     BlendProfile                                                OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/LocomotionInitiativeRuntime.FortMotionMatchingAngleSpamTracker
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortMotionMatchingAngleSpamTracker : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     DirectionChangeAngleThresholdDegrees                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  SpamAngleChangeCounterThreshold                             OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     SpamDetectionWindowLengthSeconds                            OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SpamDetectionMaxConeAngleDegrees                            OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(uint32_t)                                  MaxSamplesPerSecond                                         OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/LocomotionInitiativeRuntime.LocomotionInitiativeScriptedPlayerInputEntry
/// Size: 0x000C (0x000000 - 0x00000C)
class FLocomotionInitiativeScriptedPlayerInputEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     ForwardInput                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     RightInput                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DurationInSeconds                                           OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/LocomotionInitiativeRuntime.LocomotionInitiativeRecordedInputEntry
/// Size: 0x0038 (0x000000 - 0x000038)
class FLocomotionInitiativeRecordedInputEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   InputVector                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FRotator)                                  ControlRotation                                             OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(float)                                     Timestamp                                                   OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Enum /Script/LocomotionInitiativeRuntime.EFortMotionMatchingLocomotionState
/// Size: 0x06
enum class EFortMotionMatchingLocomotionState : uint8_t
{
	EFortMotionMatchingLocomotionState__Idle                                         = 0,
	EFortMotionMatchingLocomotionState__Start                                        = 1,
	EFortMotionMatchingLocomotionState__Loop                                         = 2,
	EFortMotionMatchingLocomotionState__Pivot                                        = 3,
	EFortMotionMatchingLocomotionState__Stop                                         = 4,
	EFortMotionMatchingLocomotionState__EFortMotionMatchingLocomotionState_MAX       = 5
};
