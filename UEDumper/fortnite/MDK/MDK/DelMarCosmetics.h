
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: AudioGameplay
/// dependency: AudioGameplayBehavior
/// dependency: AudioMotorSim
/// dependency: CoreUObject
/// dependency: CosmeticsFrameworkLoadouts
/// dependency: DelMarCore
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: Niagara
/// dependency: PhysicsCore

/// Class /Script/DelMarCosmetics.DelMarCosmeticsSettings
/// Size: 0x0018 (0x000030 - 0x000048)
class UDelMarCosmeticsSettings : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FPrimaryAssetId>)                   RandomCharacters                                            OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/DelMarCosmetics.DelMarPreviewVehicle
/// Size: 0x0690 (0x001EA0 - 0x002530)
class ADelMarPreviewVehicle : public AFortAthenaVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 9520;

public:
	SMember(FCosmeticLoadout)                          PreviewLoadout                                              OFFSET(getStruct<T>, {0x1EA8, 16, 0, 0})
	CMember(TArray<FDelMarPreviewCustomization>)       PreviewCustomizations                                       OFFSET(get<T>, {0x1EB8, 16, 0, 0})
	CMember(class UDelMarVehicleCosmeticComponent*)    CosmeticComponent                                           OFFSET(get<T>, {0x1EC8, 8, 0, 0})
	SMember(FDelMarPreviewConfigs)                     PreviewConfigs                                              OFFSET(getStruct<T>, {0x1ED0, 264, 0, 0})
	CMember(TArray<float>)                             SpringTravelOffset                                          OFFSET(get<T>, {0x2060, 16, 0, 0})
	SMember(FDelMarBouncyChassisState)                 BouncyChassisConfig                                         OFFSET(getStruct<T>, {0x2070, 12, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVehicleForwardStateChanged                                OFFSET(getStruct<T>, {0x2080, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDelMarVehicleHitWall                                      OFFSET(getStruct<T>, {0x20D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDelMarVehicleHitVehicle                                   OFFSET(getStruct<T>, {0x20E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDelMarVehicleHitByVehicle                                 OFFSET(getStruct<T>, {0x20F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHazardHit                                                 OFFSET(getStruct<T>, {0x2498, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVehicleTeleportEntered                                    OFFSET(getStruct<T>, {0x24A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVehicleTeleportExit                                       OFFSET(getStruct<T>, {0x24B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVehicleAppliedTeleportRotation                            OFFSET(getStruct<T>, {0x24C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHeadlightsChanged                                         OFFSET(getStruct<T>, {0x2508, 16, 0, 0})


	/// Functions
	// Function /Script/DelMarCosmetics.DelMarPreviewVehicle.IsWheelOnGround
	// bool IsWheelOnGround(EDelMarVehicleWheelIndex WheelIndex);                                                               // [0xc982e48] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarPreviewVehicle.GetBouncyChassisConfig
	// FDelMarBouncyChassisState GetBouncyChassisConfig();                                                                      // [0xc981dec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarPreviewVehicle.BroadcastVehicleDemolished
	// void BroadcastVehicleDemolished(FGameplayTag DemolishCausedByTag);                                                       // [0xc981990] Native|Public|BlueprintCallable 
	// Function /Script/DelMarCosmetics.DelMarPreviewVehicle.ApplyPreviewLoadout
	// void ApplyPreviewLoadout();                                                                                              // [0xc98197c] Final|Native|Protected 
};

/// Class /Script/DelMarCosmetics.DelMarGaragePreviewVehicle
/// Size: 0x0200 (0x002530 - 0x002730)
class ADelMarGaragePreviewVehicle : public ADelMarPreviewVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 10032;

public:
	SMember(FMulticastInlineDelegate)                  OnActiveCameraUpdatedDelegate                               OFFSET(getStruct<T>, {0x2530, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRotationTransitionStateChanged                            OFFSET(getStruct<T>, {0x2540, 16, 0, 0})
	CMember(class USceneComponent*)                    PreviewPivotComponent                                       OFFSET(get<T>, {0x2550, 8, 0, 0})
	CMember(class UCameraComponent*)                   ActiveCameraComponent                                       OFFSET(get<T>, {0x2560, 8, 0, 0})
	CMember(class UCameraComponent*)                   DefaultZoomInCameraComponent                                OFFSET(get<T>, {0x2568, 8, 0, 0})
	CMember(class UCameraComponent*)                   DefaultZoomOutCameraComponent                               OFFSET(get<T>, {0x2570, 8, 0, 0})
	CMember(TMap<FGameplayTag, FRotator>)              SlotPreviewRotations                                        OFFSET(get<T>, {0x2618, 80, 0, 0})
	CMember(TMap<FGameplayTag, FDelMarPreviewConfigs>) SlotPreviewConfigs                                          OFFSET(get<T>, {0x2668, 80, 0, 0})
	DMember(float)                                     ZoomLevel                                                   OFFSET(get<float>, {0x26B8, 4, 0, 0})
	SMember(FRotator)                                  UserRotationOffset                                          OFFSET(getStruct<T>, {0x26C0, 24, 0, 0})
	SMember(FGameplayTag)                              PreviewSlot                                                 OFFSET(getStruct<T>, {0x26D8, 4, 0, 0})
	SMember(FGameplayTag)                              PreviewVehicleTag                                           OFFSET(getStruct<T>, {0x26DC, 4, 0, 0})
	DMember(float)                                     RotationTransitionTime                                      OFFSET(get<float>, {0x26E0, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarCosmetics.DelMarGaragePreviewVehicle.UpdateActiveCamera
	// void UpdateActiveCamera();                                                                                               // [0x9f44e40] Native|Protected     
	// Function /Script/DelMarCosmetics.DelMarGaragePreviewVehicle.SetZoomLevel
	// void SetZoomLevel(float InZoomLevel);                                                                                    // [0xc983e24] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCosmetics.DelMarGaragePreviewVehicle.SetUserRotationOffset
	// void SetUserRotationOffset(FRotator& InRotationOffset);                                                                  // [0xc983d54] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/DelMarCosmetics.DelMarGaragePreviewVehicle.SetPreviewSlot
	// void SetPreviewSlot(FGameplayTag& InSlot);                                                                               // [0xc983a98] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DelMarCosmetics.DelMarGaragePreviewVehicle.ResetPreviewToCurrentLoadout
	// void ResetPreviewToCurrentLoadout();                                                                                     // [0x35cf850] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCosmetics.DelMarGaragePreviewVehicle.PreviewLoadout
	// void PreviewLoadout(FDelMarLoadout& Loadout);                                                                            // [0xc9834e4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DelMarCosmetics.DelMarGaragePreviewVehicle.PreviewItem
	// void PreviewItem(class UDelMarCosmeticItemDefinition* Item);                                                             // [0xc98345c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCosmetics.DelMarGaragePreviewVehicle.K2_OnActiveCameraUpdated
	// void K2_OnActiveCameraUpdated();                                                                                         // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCosmetics.DelMarGaragePreviewVehicle.IsRotationTransitioning
	// bool IsRotationTransitioning();                                                                                          // [0xc982e30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarGaragePreviewVehicle.GetRotationOffset
	// FRotator GetRotationOffset();                                                                                            // [0xc982260] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCosmetics.DelMarParamOverrideCosmeticActor
/// Size: 0x0050 (0x0002C8 - 0x000318)
class ADelMarParamOverrideCosmeticActor : public ADelMarCosmeticActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(TMap<UClass*, FDelMarParameterOverrides>)  CosmeticActorsParamterOverrides                             OFFSET(get<T>, {0x2C8, 80, 0, 0})
};

/// Class /Script/DelMarCosmetics.DelMarPreviewCameraComponent
/// Size: 0x0010 (0x0009D0 - 0x0009E0)
class UDelMarPreviewCameraComponent : public UCameraComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2528;

public:
	SMember(FGameplayTag)                              PreviewSlot                                                 OFFSET(getStruct<T>, {0x9D0, 4, 0, 0})
	CMember(EDelMarPreviewCameraType)                  PreviewType                                                 OFFSET(get<T>, {0x9D4, 1, 0, 0})
};

/// Class /Script/DelMarCosmetics.DelMarPreviewPivot
/// Size: 0x0008 (0x000290 - 0x000298)
class ADelMarPreviewPivot : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class USceneComponent*)                    SceneComponent                                              OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor
/// Size: 0x02A0 (0x0002C8 - 0x000568)
class ADelMarUnifiedVehicleCosmeticActor : public ADelMarCosmeticActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1384;

public:
	CMember(TArray<class UNiagaraComponent*>)          CachedSideBoosters                                          OFFSET(get<T>, {0x2C8, 16, 0, 0})
	SMember(FName)                                     SideBoosterParam_Scale                                      OFFSET(getStruct<T>, {0x2DC, 4, 0, 0})
	CMember(TArray<FDelMarVehicleBooster>)             Boosters                                                    OFFSET(get<T>, {0x2E0, 16, 0, 0})
	SMember(FDelMarVehicleUnderthrustVfxData)          UnderthrustVfxData                                          OFFSET(getStruct<T>, {0x2F0, 56, 0, 0})
	CMember(class USkeletalMeshComponent*)             BodySkeletalMeshComponent                                   OFFSET(get<T>, {0x378, 8, 0, 0})
	SMember(FAudioGameplayBehaviorInstance)            KickflipAudioBehavior                                       OFFSET(getStruct<T>, {0x380, 16, 0, 0})
	SMember(FAudioGameplayBehaviorInstance)            JumpAudioBehavior                                           OFFSET(getStruct<T>, {0x390, 16, 0, 0})
	CMember(class UNiagaraComponent*)                  JumpFX                                                      OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  SuperSonicFX                                                OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(class UMaterialInterface*)                 SuperSonicRadialBlurMaterial                                OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           SuperSonicRadialBlurMID                                     OFFSET(get<T>, {0x3B8, 8, 0, 0})
	DMember(float)                                     SuperSonicBlurOffset                                        OFFSET(get<float>, {0x3C0, 4, 0, 0})
	DMember(float)                                     SuperSonicForwardSpeedMin                                   OFFSET(get<float>, {0x3C4, 4, 0, 0})
	DMember(float)                                     SuperSonicForwardSpeedMax                                   OFFSET(get<float>, {0x3C8, 4, 0, 0})
	SMember(FName)                                     SuperSonicParam_Spawn                                       OFFSET(getStruct<T>, {0x3CC, 4, 0, 0})
	SMember(FName)                                     RadialBlurParam_Offset                                      OFFSET(getStruct<T>, {0x3D0, 4, 0, 0})
	SMember(FName)                                     RadialBlurParam_Transition                                  OFFSET(getStruct<T>, {0x3D4, 4, 0, 0})
	SMember(FAudioGameplayBehaviorInstance)            DraftingAudioBehavior                                       OFFSET(getStruct<T>, {0x3E0, 16, 0, 0})
	CMember(class UNiagaraComponent*)                  DraftingFX                                                  OFFSET(get<T>, {0x3F0, 8, 0, 0})
	SMember(FName)                                     DraftingParam_Spawn                                         OFFSET(getStruct<T>, {0x3F8, 4, 0, 0})
	SMember(FName)                                     DraftingParam_SpeedGain                                     OFFSET(getStruct<T>, {0x3FC, 4, 0, 0})
	SMember(FName)                                     DraftingParam_Amount                                        OFFSET(getStruct<T>, {0x400, 4, 0, 0})
	SMember(FAudioGameplayBehaviorInstance)            WorldBonusSpeedAudioBehavior                                OFFSET(getStruct<T>, {0x408, 16, 0, 0})
	SMember(FName)                                     WBSGroupEvent_OnBonusSpeedActivated                         OFFSET(getStruct<T>, {0x418, 4, 0, 0})
	SMember(FName)                                     WBSGroupEvent_OnBonusSpeedDeactivated                       OFFSET(getStruct<T>, {0x41C, 4, 0, 0})
	SMember(FName)                                     WBSGroupEvent_OnWorldBonusSpeedStackGained                  OFFSET(getStruct<T>, {0x420, 4, 0, 0})
	SMember(FGameplayTag)                              DemolishTag_RaceFinished                                    OFFSET(getStruct<T>, {0x424, 4, 0, 0})
	SMember(FAudioGameplayBehaviorInstance)            RespawnAudioBehavior                                        OFFSET(getStruct<T>, {0x428, 16, 0, 0})
	SMember(FAudioGameplayBehaviorInstance)            DespawnAudioBehavior                                        OFFSET(getStruct<T>, {0x438, 16, 0, 0})
	CMember(class UNiagaraComponent*)                  TaillightTrailFX_Left                                       OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  TaillightTrailFX_Right                                      OFFSET(get<T>, {0x450, 8, 0, 0})
	SMember(FName)                                     TaillightTrailSocket_Left                                   OFFSET(getStruct<T>, {0x458, 4, 0, 0})
	SMember(FName)                                     TaillightTrailSocket_Right                                  OFFSET(getStruct<T>, {0x45C, 4, 0, 0})
	DMember(float)                                     TaillightTrail_MinForwardSpeed                              OFFSET(get<float>, {0x460, 4, 0, 0})
	CMember(class UNiagaraComponent*)                  TeleportFx                                                  OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UNiagaraSystem*)                     TeleportEnterSystem                                         OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UNiagaraSystem*)                     TeleportExitSystem                                          OFFSET(get<T>, {0x478, 8, 0, 0})
	SMember(FAudioGameplayBehaviorInstance)            UnderthrustAudioBehavior                                    OFFSET(getStruct<T>, {0x480, 16, 0, 0})
	SMember(FAudioGameplayBehaviorInstance)            WheelsAudioBehavior                                         OFFSET(getStruct<T>, {0x490, 16, 0, 0})
	SMember(FName)                                     FrontLeftWheelContactBone                                   OFFSET(getStruct<T>, {0x4A0, 4, 0, 0})
	SMember(FName)                                     FrontRightWheelContactBone                                  OFFSET(getStruct<T>, {0x4A4, 4, 0, 0})
	SMember(FName)                                     BackRightWheelContactBone                                   OFFSET(getStruct<T>, {0x4A8, 4, 0, 0})
	SMember(FName)                                     BackLeftWheelContactBone                                    OFFSET(getStruct<T>, {0x4AC, 4, 0, 0})
	CMember(TArray<FDelMarVehicleCosmeticWheelInfo>)   WheelInfos                                                  OFFSET(get<T>, {0x4B0, 16, 0, 0})
	DMember(float)                                     FxSideSpeedThreshold                                        OFFSET(get<float>, {0x560, 4, 0, 0})
	DMember(float)                                     FxForwardSpeedThreshold                                     OFFSET(get<float>, {0x564, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.ShouldTriggerFX
	// bool ShouldTriggerFX();                                                                                                  // [0xc983ea4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.RemoveBoosterActivationFlags
	// void RemoveBoosterActivationFlags(FName Name);                                                                           // [0xc98359c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnWorldBonusSpeedStackGained
	// void OnWorldBonusSpeedStackGained(FGameplayTag Source, int32_t Stacks);                                                  // [0xc983380] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnVehicleLanded
	// void OnVehicleLanded(float LandingForce, bool bLandedKickflip);                                                          // [0xc9832b8] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnVehicleDemolished
	// void OnVehicleDemolished(FGameplayTag CausedByTag);                                                                      // [0xc983238] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnUnderthrustDeactivated
	// void OnUnderthrustDeactivated();                                                                                         // [0xc983224] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnUnderthrustActivated
	// void OnUnderthrustActivated();                                                                                           // [0xc983210] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnTeleportExited
	// void OnTeleportExited();                                                                                                 // [0xc9831fc] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnTeleportEntered
	// void OnTeleportEntered();                                                                                                // [0xc9831e8] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnKickflipDeactivated
	// void OnKickflipDeactivated();                                                                                            // [0xc9831d0] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnKickflipActivated
	// void OnKickflipActivated(bool bLeftSide);                                                                                // [0xc983150] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnJumpActivated
	// void OnJumpActivated();                                                                                                  // [0xc98313c] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnDriftKickDeactivated
	// void OnDriftKickDeactivated();                                                                                           // [0xc982fe0] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnDriftKickActivated
	// void OnDriftKickActivated(float DriftDirection, EDelMarVehicleDriftState DriftState);                                    // [0xc983078] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnDriftDurationChanged
	// void OnDriftDurationChanged(float duration);                                                                             // [0xc982ff8] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnDriftDeactivated
	// void OnDriftDeactivated();                                                                                               // [0xc982fe0] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnDraftStateChanged
	// void OnDraftStateChanged(EDelmarDraftingState CurrentState);                                                             // [0xc982f60] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnBonusSpeedDeactivated
	// void OnBonusSpeedDeactivated();                                                                                          // [0xc982f4c] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.OnBonusSpeedActivated
	// void OnBonusSpeedActivated();                                                                                            // [0xc982f38] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.InitializeUnderthrustVfxSockets
	// void InitializeUnderthrustVfxSockets();                                                                                  // [0xc982da4] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.GetWheelContactBoneName
	// FName GetWheelContactBoneName(EDelMarVehicleWheelIndex WheelIndex);                                                      // [0xc9822d8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.GetBoosters
	// TArray<UNiagaraComponent*> GetBoosters(EDelMarVehicleBoosterFlags Flags);                                                // [0xc981d48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor.AddBoosterActivationFlags
	// void AddBoosterActivationFlags(EDelMarVehicleBoosterFlags Flags, FName Name);                                            // [0xc981820] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarCosmetics.DelMarVehicleAnimInstance
/// Size: 0x0248 (0x000458 - 0x0006A0)
class UDelMarVehicleAnimInstance : public UFortBaseAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1696;

public:
	SMember(FDelMarBouncyChassisState)                 BouncyChassis                                               OFFSET(getStruct<T>, {0x458, 12, 0, 0})
	SMember(FDelMarBouncyChassisSetup)                 BouncyChassisSetup                                          OFFSET(getStruct<T>, {0x468, 88, 0, 0})
	DMember(float)                                     BouncyChassisBlendRate                                      OFFSET(get<float>, {0x4C0, 4, 0, 0})
	DMember(float)                                     VisualSteerAngleInterpRate                                  OFFSET(get<float>, {0x4C4, 4, 0, 0})
	DMember(float)                                     WheelLerpSpeed                                              OFFSET(get<float>, {0x4C8, 4, 0, 0})
	DMember(float)                                     SuspensionInterpRate                                        OFFSET(get<float>, {0x4CC, 4, 0, 0})
	DMember(float)                                     AirSpinAccel                                                OFFSET(get<float>, {0x4D0, 4, 0, 0})
	DMember(float)                                     AirSpinBrake                                                OFFSET(get<float>, {0x4D4, 4, 0, 0})
	DMember(float)                                     AirSpinDecayRate                                            OFFSET(get<float>, {0x4D8, 4, 0, 0})
	SMember(FDelMarVehicleAnimInfo)                    VehicleInfo                                                 OFFSET(getStruct<T>, {0x4DC, 8, 0, 0})
	DMember(bool)                                      bThrottling                                                 OFFSET(get<bool>, {0x4E4, 1, 0, 0})
	DMember(bool)                                      bReversing                                                  OFFSET(get<bool>, {0x4E5, 1, 0, 0})
	DMember(bool)                                      bAccelerating                                               OFFSET(get<bool>, {0x4E6, 1, 0, 0})
	DMember(bool)                                      bBraking                                                    OFFSET(get<bool>, {0x4E7, 1, 0, 0})
	DMember(float)                                     Throttle                                                    OFFSET(get<float>, {0x4E8, 4, 0, 0})
	DMember(float)                                     Steering                                                    OFFSET(get<float>, {0x4EC, 4, 0, 0})
	DMember(float)                                     SteeringAngle                                               OFFSET(get<float>, {0x4F0, 4, 0, 0})
	DMember(bool)                                      bWheelsOnGround                                             OFFSET(get<bool>, {0x4F4, 1, 0, 0})
	DMember(float)                                     ForwardSpeed                                                OFFSET(get<float>, {0x4F8, 4, 0, 0})
	DMember(bool)                                      bDriftBoostActive                                           OFFSET(get<bool>, {0x4FC, 1, 0, 0})
	DMember(bool)                                      bUnderthrustActive                                          OFFSET(get<bool>, {0x4FD, 1, 0, 0})
	DMember(bool)                                      bDriftActive                                                OFFSET(get<bool>, {0x4FE, 1, 0, 0})
	DMember(bool)                                      bKickflipActive                                             OFFSET(get<bool>, {0x4FF, 1, 0, 0})
	DMember(bool)                                      bJumpActive                                                 OFFSET(get<bool>, {0x500, 1, 0, 0})
	DMember(bool)                                      bTurboActive                                                OFFSET(get<bool>, {0x501, 1, 0, 0})
	SMember(FDelMarVehicleWheelAnimInfo)               WheelInfoFR                                                 OFFSET(getStruct<T>, {0x504, 28, 0, 0})
	SMember(FDelMarVehicleWheelAnimInfo)               WheelInfoFL                                                 OFFSET(getStruct<T>, {0x520, 28, 0, 0})
	SMember(FDelMarVehicleWheelAnimInfo)               WheelInfoBR                                                 OFFSET(getStruct<T>, {0x53C, 28, 0, 0})
	SMember(FDelMarVehicleWheelAnimInfo)               WheelInfoBL                                                 OFFSET(getStruct<T>, {0x558, 28, 0, 0})
};

/// Class /Script/DelMarCosmetics.DelMarWheelAnimInstance
/// Size: 0x0028 (0x000458 - 0x000480)
class UDelMarWheelAnimInstance : public UFortBaseAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	DMember(float)                                     SpinDegrees                                                 OFFSET(get<float>, {0x474, 4, 0, 0})
	CMember(class UDelMarVehicleAnimInstance*)         ParentAnimInstance                                          OFFSET(get<T>, {0x478, 8, 0, 0})
};

/// Class /Script/DelMarCosmetics.DelMarDriverCosmeticPlayerComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UDelMarDriverCosmeticPlayerComponent : public UPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TArray<FName>)                             SequenceBindingTags                                         OFFSET(get<T>, {0xD8, 16, 0, 0})
	SMember(FDelMarDriverCosmeticData)                 CosmeticData                                                OFFSET(getStruct<T>, {0xE8, 24, 0, 0})


	/// Functions
	// Function /Script/DelMarCosmetics.DelMarDriverCosmeticPlayerComponent.On_RepCosmeticData
	// void On_RepCosmeticData();                                                                                               // [0xc983440] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarDriverCosmeticPlayerComponent.HandlePlayerControllerLoadoutChanged
	// void HandlePlayerControllerLoadoutChanged(FCosmeticLoadout& Loadout);                                                    // [0xc982c1c] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCosmetics.DelMarDriverCosmeticPlayerComponent.HandleBotControllerLoadoutChanged
	// void HandleBotControllerLoadoutChanged(class ADelMarAIController* AIController, FFortAthenaLoadout& Loadout);            // [0xc982b14] Final|Native|Protected|HasOutParms 
};

/// Class /Script/DelMarCosmetics.DelMarBodyCosmeticActor
/// Size: 0x0098 (0x0002C8 - 0x000360)
class ADelMarBodyCosmeticActor : public ADelMarCosmeticActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	CMember(TArray<FDelMarVehicleWheelSetup>)          FrontLeftWheelsBoneNames                                    OFFSET(get<T>, {0x2C8, 16, 0, 0})
	CMember(TArray<FDelMarVehicleWheelSetup>)          FrontRightWheelsBoneNames                                   OFFSET(get<T>, {0x2D8, 16, 0, 0})
	CMember(TArray<FDelMarVehicleWheelSetup>)          BackRightWheelsBoneNames                                    OFFSET(get<T>, {0x2E8, 16, 0, 0})
	CMember(TArray<FDelMarVehicleWheelSetup>)          BackLeftWheelsBoneNames                                     OFFSET(get<T>, {0x2F8, 16, 0, 0})
	CMember(TArray<FDelMarVehicleBooster>)             LeftBoostersInfo                                            OFFSET(get<T>, {0x308, 16, 0, 0})
	CMember(TArray<FDelMarVehicleBooster>)             RightBoostersInfo                                           OFFSET(get<T>, {0x318, 16, 0, 0})
	CMember(class USkeletalMesh*)                      SkeletalMesh                                                OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UPhysicsAsset*)                      PhysicsAsset                                                OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UClass*)                             AnimInstanceClass                                           OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(class UDelMarVehicleBodySetup*)            BodySetup                                                   OFFSET(get<T>, {0x340, 8, 0, 0})
	SMember(FVector)                                   WheelContactFxOffset                                        OFFSET(getStruct<T>, {0x348, 24, 0, 0})


	/// Functions
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetWheelSetups
	// TArray<FDelMarVehicleWheelSetup> GetWheelSetups(EDelMarVehicleWheelIndex WheelIndex);                                    // [0xc9823e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetWheelCosmeticActorOffset
	// FVector GetWheelCosmeticActorOffset();                                                                                   // [0x2ba1060] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetSkeletalMesh
	// class USkeletalMesh* GetSkeletalMesh();                                                                                  // [0x7a70ccc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetRightBoostersInfo
	// TArray<FDelMarVehicleBooster> GetRightBoostersInfo();                                                                    // [0xc982224] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetPhysicsAsset
	// class UPhysicsAsset* GetPhysicsAsset();                                                                                  // [0x9647fa4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetLeftBoostersInfo
	// TArray<FDelMarVehicleBooster> GetLeftBoostersInfo();                                                                     // [0xc982028] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetFrontRightWheelsBoneNames
	// TArray<FDelMarVehicleWheelSetup> GetFrontRightWheelsBoneNames();                                                         // [0xc981e50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetFrontLeftWheelsBoneNames
	// TArray<FDelMarVehicleWheelSetup> GetFrontLeftWheelsBoneNames();                                                          // [0xc981e14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetBoosterBySocketName
	// class UNiagaraComponent* GetBoosterBySocketName(FName& SocketName);                                                      // [0xc981c54] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetBodySetup
	// class UDelMarVehicleBodySetup* GetBodySetup();                                                                           // [0x6db7ff8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetBackRightWheelsBoneNames
	// TArray<FDelMarVehicleWheelSetup> GetBackRightWheelsBoneNames();                                                          // [0xc981c18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetBackLeftWheelsBoneNames
	// TArray<FDelMarVehicleWheelSetup> GetBackLeftWheelsBoneNames();                                                           // [0xc981bdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBodyCosmeticActor.GetAnimInstanceClass
	// class UClass* GetAnimInstanceClass();                                                                                    // [0xc981ba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCosmetics.DelMarBoosterCosmeticActor
/// Size: 0x0030 (0x0002C8 - 0x0002F8)
class ADelMarBoosterCosmeticActor : public ADelMarCosmeticActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(class UNiagaraSystem*)                     BoosterFx                                                   OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(TArray<FDelMarVehicleBooster>)             LeftBoosters                                                OFFSET(get<T>, {0x2D0, 16, 0, 0})
	CMember(TArray<FDelMarVehicleBooster>)             RightBoosters                                               OFFSET(get<T>, {0x2E0, 16, 0, 0})
	CMember(class USkeletalMeshComponent*)             BodySkeletalMeshComponent                                   OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCosmetics.DelMarBoosterCosmeticActor.SetRightBoostersEnabled
	// void SetRightBoostersEnabled(bool bSetFrontBoosters, bool bSetBackBoosters, bool bSetSideBoosters, bool bSetDownBoosters, bool bEnabled, bool bReset); // [0xc983b60] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCosmetics.DelMarBoosterCosmeticActor.SetLeftBoostersEnabled
	// void SetLeftBoostersEnabled(bool bSetFrontBoosters, bool bSetBackBoosters, bool bSetSideBoosters, bool bSetDownBoosters, bool bEnabled, bool bReset); // [0xc9838a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCosmetics.DelMarBoosterCosmeticActor.SetAllBoostersEnabled
	// void SetAllBoostersEnabled(bool bSetFrontBoosters, bool bSetBackBoosters, bool bSetSideBoosters, bool bSetDownBoosters, bool bEnabled, bool bReset); // [0xc9836b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCosmetics.DelMarBoosterCosmeticActor.GetRightBoosters
	// TArray<UNiagaraComponent*> GetRightBoosters(bool bFrontBoosters, bool bBackBoosters, bool bSideBoosters, bool bDownBoosters); // [0xc982088] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBoosterCosmeticActor.GetLeftBoosters
	// TArray<UNiagaraComponent*> GetLeftBoosters(bool bFrontBoosters, bool bBackBoosters, bool bSideBoosters, bool bDownBoosters); // [0xc981e8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarBoosterCosmeticActor.GetAllBoosters
	// TArray<UNiagaraComponent*> GetAllBoosters(bool bFrontBoosters, bool bBackBoosters, bool bSideBoosters, bool bDownBoosters); // [0xc981a14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCosmetics.DelMarEngineAudioCosmeticActor
/// Size: 0x0048 (0x0002C8 - 0x000310)
class ADelMarEngineAudioCosmeticActor : public ADelMarCosmeticActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FAudioGameplayBehaviorInstance)            EngineAudio                                                 OFFSET(getStruct<T>, {0x2C8, 16, 0, 0})
	DMember(float)                                     NonLocalVelocityInterpSpeed                                 OFFSET(get<float>, {0x2D8, 4, 0, 0})
	DMember(bool)                                      bDisabled                                                   OFFSET(get<bool>, {0x2DC, 1, 0, 0})
	CMember(class UAudioComponentGroup*)               ComponentGroup                                              OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UAudioMotorModelComponent*)          MotorModel                                                  OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCosmetics.DelMarEngineAudioCosmeticActor.GetComponentGroup
	// class UAudioComponentGroup* GetComponentGroup();                                                                         // [0x7fbbfc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCosmetics.DelMarWheelContactFxCosmeticActor
/// Size: 0x00E0 (0x0002C8 - 0x0003A8)
class ADelMarWheelContactFxCosmeticActor : public ADelMarCosmeticActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 936;

public:
	SMember(FAudioGameplayBehaviorInstance)            WheelSounds                                                 OFFSET(getStruct<T>, {0x2C8, 16, 0, 0})
	DMember(float)                                     FxSideSpeedThreshold                                        OFFSET(get<float>, {0x2D8, 4, 0, 0})
	DMember(float)                                     FxForwardSpeedThreshold                                     OFFSET(get<float>, {0x2DC, 4, 0, 0})
	CMember(class UPhysicalMaterial*)                  ContactMaterial                                             OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(TArray<FDelMarVehicleCosmeticWheelInfo>)   WheelInfos                                                  OFFSET(get<T>, {0x2F0, 16, 0, 0})
	SMember(FName)                                     FrontLeftWheelContactBone                                   OFFSET(getStruct<T>, {0x300, 4, 0, 0})
	SMember(FName)                                     FrontRightWheelContactBone                                  OFFSET(getStruct<T>, {0x304, 4, 0, 0})
	SMember(FName)                                     BackRightWheelContactBone                                   OFFSET(getStruct<T>, {0x308, 4, 0, 0})
	SMember(FName)                                     BackLeftWheelContactBone                                    OFFSET(getStruct<T>, {0x30C, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarCosmetics.DelMarWheelContactFxCosmeticActor.HandleVehicleLanded
	// void HandleVehicleLanded(float LandingForce, bool bLandedKickflip);                                                      // [0xc982cdc] Final|Native|Protected 
	// Function /Script/DelMarCosmetics.DelMarWheelContactFxCosmeticActor.GetWheelContactBoneName
	// FName GetWheelContactBoneName(EDelMarVehicleWheelIndex WheelIndex);                                                      // [0xc982360] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarWheelContactFxCosmeticActor.GetAudioBehavior
	// class UAudioGameplayBehavior* GetAudioBehavior();                                                                        // [0x2f331fc] Final|BlueprintCosmetic|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarWheelContactFxCosmeticActor.BP_UpdateWheelContactFx
	// void BP_UpdateWheelContactFx(FDelMarVehicleCosmeticWheelInfo WheelInfo, bool bActive, float AbsForwardSpeed, float AbsSideSpeed); // [0x20c3f9c] Event|Protected|BlueprintEvent 
};

/// Class /Script/DelMarCosmetics.DelMarCosmeticActorSpawnLogic_Wheel
/// Size: 0x0008 (0x000028 - 0x000030)
class UDelMarCosmeticActorSpawnLogic_Wheel : public UDelMarCosmeticActorSpawnLogic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bFrontWheel                                                 OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bBackWheel                                                  OFFSET(get<bool>, {0x29, 1, 0, 0})
	CMember(EDelMarWheelAttachPoint)                   AttachPoint                                                 OFFSET(get<T>, {0x2A, 1, 0, 0})
	CMember(EDelMarWheelMirrorType)                    MirrorType                                                  OFFSET(get<T>, {0x2B, 1, 0, 0})
	DMember(bool)                                      bOnlyFxEligibleWheels                                       OFFSET(get<bool>, {0x2C, 1, 0, 0})
};

/// Class /Script/DelMarCosmetics.DelMarWheelsCosmeticActor
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class ADelMarWheelsCosmeticActor : public ADelMarCosmeticActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(EDelMarVehicleWheelIndex)                  WheelIndex                                                  OFFSET(get<T>, {0x2C8, 1, 0, 0})


	/// Functions
	// Function /Script/DelMarCosmetics.DelMarWheelsCosmeticActor.IsWheelOnGround
	// bool IsWheelOnGround();                                                                                                  // [0xc982edc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarWheelsCosmeticActor.IsRightWheel
	// bool IsRightWheel();                                                                                                     // [0xc982e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarWheelsCosmeticActor.IsMirrored
	// bool IsMirrored();                                                                                                       // [0xc982df4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarWheelsCosmeticActor.IsLeftWheel
	// bool IsLeftWheel();                                                                                                      // [0xc982df4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarWheelsCosmeticActor.IsFrontWheel
	// bool IsFrontWheel();                                                                                                     // [0xc982dd8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarWheelsCosmeticActor.IsBackWheel
	// bool IsBackWheel();                                                                                                      // [0xc982db8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCosmetics.DelMarWheelsCosmeticActor.GetMirrorType
	// EDelMarWheelMirrorType GetMirrorType();                                                                                  // [0xc982064] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCosmetics.DelMarWheelSKCosmeticActor
/// Size: 0x0008 (0x0002D0 - 0x0002D8)
class ADelMarWheelSKCosmeticActor : public ADelMarWheelsCosmeticActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(class USkeletalMeshComponent*)             SkeletalMeshComponent                                       OFFSET(get<T>, {0x2D0, 8, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarVehicleAnimInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarVehicleAnimInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     SteerAngleDegrees                                           OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     VisualSteerAngleDegrees                                     OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarVehicleWheelAnimInfo
/// Size: 0x001C (0x000000 - 0x00001C)
class FDelMarVehicleWheelAnimInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     SpringToWheelOffsetZ                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FFloatInterval)                            SpringTravelRange                                           OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	DMember(float)                                     WheelRadius                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     TravelDistance                                              OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     SpinSpeedDegrees                                            OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     SpinDegrees                                                 OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarVehicleBooster
/// Size: 0x0018 (0x000000 - 0x000018)
class FDelMarVehicleBooster : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UNiagaraSystem*)                     BoosterSystem                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  NiagaraComponent                                            OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     BoosterSocket                                               OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	DMember(char)                                      BitFlags                                                    OFFSET(get<char>, {0x14, 1, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarVehicleUnderthrustSocket
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarVehicleUnderthrustSocket : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(char)                                      SideFlags                                                   OFFSET(get<char>, {0x4, 1, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarVehicleUnderthrustVfxData
/// Size: 0x0038 (0x000000 - 0x000038)
class FDelMarVehicleUnderthrustVfxData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UNiagaraSystem*)                     UnderthrustVfxSystem                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  NiagaraComponent                                            OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     NiagaraLocationArrayParam                                   OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FName)                                     NiagaraActivationsArrayParam                                OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	CMember(TArray<FDelMarVehicleUnderthrustSocket>)   Sockets                                                     OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarVehicleWheelSetup
/// Size: 0x0010 (0x000000 - 0x000010)
class FDelMarVehicleWheelSetup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     WheelSpinBone                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     WheelPivotBone                                              OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     WheelContactBone                                            OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      bEligibleForPhysMatContactFx                                OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarVehicleCosmeticWheelInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FDelMarVehicleCosmeticWheelInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UNiagaraComponent*)                  ContactParticleComponent                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UNiagaraSystem*)                     ContactParticle                                             OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UPhysicalMaterial*)                  ContactMaterial                                             OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(EDelMarVehicleWheelIndex)                  WheelIndex                                                  OFFSET(get<T>, {0x18, 1, 0, 0})
	SMember(FDelMarVehicleWheelSetup)                  Setup                                                       OFFSET(getStruct<T>, {0x1C, 16, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarOverrideParameter_Bool
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarOverrideParameter_Bool : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      Value                                                       OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarOverrideParameter_Int
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarOverrideParameter_Int : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarOverrideParameter_Float
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarOverrideParameter_Float : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarOverrideParameter_Vector
/// Size: 0x0020 (0x000000 - 0x000020)
class FDelMarOverrideParameter_Vector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarOverrideParameter_Color
/// Size: 0x0014 (0x000000 - 0x000014)
class FDelMarOverrideParameter_Color : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FLinearColor)                              Value                                                       OFFSET(getStruct<T>, {0x4, 16, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarOverrideParameter_Texture
/// Size: 0x0010 (0x000000 - 0x000010)
class FDelMarOverrideParameter_Texture : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UTexture*)                           Value                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarOverrideParameter_StaticMesh
/// Size: 0x0010 (0x000000 - 0x000010)
class FDelMarOverrideParameter_StaticMesh : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UStaticMesh*)                        Value                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarOverrideParameter_Actor
/// Size: 0x0010 (0x000000 - 0x000010)
class FDelMarOverrideParameter_Actor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class AActor*)                             Value                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarOverrideParameter_Material
/// Size: 0x0010 (0x000000 - 0x000010)
class FDelMarOverrideParameter_Material : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UMaterialInterface*)                 Value                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarMaterialParameterCollection
/// Size: 0x0030 (0x000000 - 0x000030)
class FDelMarMaterialParameterCollection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FDelMarOverrideParameter_Float>)    OverrideFloatParameters                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FDelMarOverrideParameter_Vector>)   OverrideVectorParameters                                    OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FDelMarOverrideParameter_Texture>)  OverrideTextureParameters                                   OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarNiagaraParameterCollection
/// Size: 0x0098 (0x000000 - 0x000098)
class FDelMarNiagaraParameterCollection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(class UNiagaraSystem*)                     OverrideNiagaraSystem                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FDelMarOverrideParameter_Bool>)     OverrideBoolParameters                                      OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FDelMarOverrideParameter_Int>)      OverrideIntParameters                                       OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FDelMarOverrideParameter_Float>)    OverrideFloatParameters                                     OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FDelMarOverrideParameter_Vector>)   OverrideVectorParameters                                    OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FDelMarOverrideParameter_Color>)    OverrideColorParameters                                     OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FDelMarOverrideParameter_Texture>)  OverrideTextureParameters                                   OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FDelMarOverrideParameter_Material>) OverrideMaterialsParameters                                 OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<FDelMarOverrideParameter_StaticMesh>) OverrideStaticMeshParameters                              OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FDelMarOverrideParameter_Actor>)    OverrideActorParameters                                     OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarMaterialOverrides
/// Size: 0x0040 (0x000000 - 0x000040)
class FDelMarMaterialOverrides : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   MaterialInstanceDynamicIndex                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(class UMaterialInterface*)                 MaterialInterface                                           OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FDelMarMaterialParameterCollection)        ParameterOverrides                                          OFFSET(getStruct<T>, {0x10, 48, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarNiagaraOverrides
/// Size: 0x0098 (0x000000 - 0x000098)
class FDelMarNiagaraOverrides : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FDelMarNiagaraParameterCollection)         ParameterOverrides                                          OFFSET(getStruct<T>, {0x0, 152, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarParameterOverrides
/// Size: 0x0020 (0x000000 - 0x000020)
class FDelMarParameterOverrides : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FDelMarMaterialOverrides>)          MaterialOverrides                                           OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FDelMarNiagaraOverrides>)           NiagaraOverrides                                            OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarVehicleController_WheelData
/// Size: 0x0024 (0x000000 - 0x000024)
class FDelMarVehicleController_WheelData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FBoneReference)                            SuspensionBone                                              OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FBoneReference)                            SteeringBone                                                OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FBoneReference)                            RollBone                                                    OFFSET(getStruct<T>, {0x18, 12, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarAnimNode_VehicleController
/// Size: 0x0120 (0x0000C8 - 0x0001E8)
class FDelMarAnimNode_VehicleController : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FDelMarBouncyChassisState)                 BouncyChassis                                               OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	SMember(FDelMarVehicleController_WheelData)        FrontLeftWheel                                              OFFSET(getStruct<T>, {0xD4, 36, 0, 0})
	SMember(FDelMarVehicleController_WheelData)        FrontRightWheel                                             OFFSET(getStruct<T>, {0xF8, 36, 0, 0})
	SMember(FDelMarVehicleController_WheelData)        BackLeftWheel                                               OFFSET(getStruct<T>, {0x11C, 36, 0, 0})
	SMember(FDelMarVehicleController_WheelData)        BackRightWheel                                              OFFSET(getStruct<T>, {0x140, 36, 0, 0})
	SMember(FBoneReference)                            ChassisBone                                                 OFFSET(getStruct<T>, {0x164, 12, 0, 0})
	SMember(FDelMarVehicleAnimInfo)                    VehicleInfo                                                 OFFSET(getStruct<T>, {0x170, 8, 0, 0})
	SMember(FDelMarVehicleWheelAnimInfo)               WheelInfoFR                                                 OFFSET(getStruct<T>, {0x178, 28, 0, 0})
	SMember(FDelMarVehicleWheelAnimInfo)               WheelInfoFL                                                 OFFSET(getStruct<T>, {0x194, 28, 0, 0})
	SMember(FDelMarVehicleWheelAnimInfo)               WheelInfoBR                                                 OFFSET(getStruct<T>, {0x1B0, 28, 0, 0})
	SMember(FDelMarVehicleWheelAnimInfo)               WheelInfoBL                                                 OFFSET(getStruct<T>, {0x1CC, 28, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarBouncyChassisState
/// Size: 0x000C (0x000000 - 0x00000C)
class FDelMarBouncyChassisState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     PitchDegrees                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     RollDegrees                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     TranslationZ                                                OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarBoxSpringSetup
/// Size: 0x0050 (0x000000 - 0x000050)
class FDelMarBoxSpringSetup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Strength                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Damping                                                     OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   MaxDisplacement                                             OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x4C, 4, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarBoxSpring
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FDelMarBoxSpring : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FDelMarBoxSpringSetup)                     Setup                                                       OFFSET(getStruct<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarSpringSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarSpringSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Damping                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarBouncyChassisSetup
/// Size: 0x0058 (0x000000 - 0x000058)
class FDelMarBouncyChassisSetup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FDelMarSpringSettings)                     PitchSpring                                                 OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(float)                                     PitchMaxAngleDegrees                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FDelMarSpringSettings)                     RollSpring                                                  OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	DMember(float)                                     RollMaxAngleDegrees                                         OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FDelMarSpringSettings)                     ZSpring                                                     OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	DMember(float)                                     ZMaxDrop                                                    OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     ZMaxRaise                                                   OFFSET(get<float>, {0x24, 4, 0, 0})
	SMember(FVector)                                   MaxDisplacement                                             OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FVector)                                   MassOffset                                                  OFFSET(getStruct<T>, {0x40, 24, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarBouncyChassisInstance
/// Size: 0x0118 (0x000000 - 0x000118)
class FDelMarBouncyChassisInstance : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FDelMarBoxSpring)                          Spring                                                      OFFSET(getStruct<T>, {0x0, 176, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarDriverCosmeticData
/// Size: 0x0018 (0x000000 - 0x000018)
class FDelMarDriverCosmeticData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UAthenaCharacterItemDefinition*)     CharacterDefinition                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FMcpVariantChannelInfo>)            CharacterVariantChannels                                    OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarPreviewConfigs
/// Size: 0x0108 (0x000000 - 0x000108)
class FDelMarPreviewConfigs : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	DMember(bool)                                      bAnyWheelsOnGround                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bWheelsOnGround                                             OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(float)                                     ForwardSpeed                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     SideSpeed                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Acceleration                                                OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Throttle                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Steering                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     SteerAngle                                                  OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     TargetSpeed                                                 OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     BaseTargetSpeed                                             OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     NormalizedForwardSpeed                                      OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     NormalizedBonusSpeed                                        OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(EDelMarVehicleForwardState)                VehicleForwardState                                         OFFSET(get<T>, {0x2C, 1, 0, 0})
	DMember(float)                                     BonusSpeed                                                  OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     WorldAppliedBonusSpeed                                      OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FDelMarVehicleLandingData)                 LandingData                                                 OFFSET(getStruct<T>, {0x38, 12, 0, 0})
	DMember(bool)                                      bLanded                                                     OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(bool)                                      bSkydiving                                                  OFFSET(get<bool>, {0x45, 1, 0, 0})
	CMember(EDelMarVehicleDriftState)                  DriftState                                                  OFFSET(get<T>, {0x46, 1, 0, 0})
	DMember(bool)                                      bDriftControlled                                            OFFSET(get<bool>, {0x47, 1, 0, 0})
	DMember(float)                                     DriftAngle                                                  OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     DriftSlipAngleRatio                                         OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     DriftTargetSide                                             OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     DriftDuration                                               OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      bDriftBoostInRange                                          OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      bDriftBoostLosingAppliedBonusSpeed                          OFFSET(get<bool>, {0x59, 1, 0, 0})
	DMember(float)                                     DriftBoostPotentialPercentage                               OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     DriftBoostAppliedBonusSpeed                                 OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     DriftBoostQueuedBonusSpeed                                  OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     DraftingAppliedBonusSpeed                                   OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     DraftingMaxBonusSpeedPercentage                             OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     DraftingTargetDegrees                                       OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     DraftingCurrentBonusSpeedPercentage                         OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(bool)                                      bHasValidDraftingTarget                                     OFFSET(get<bool>, {0x78, 1, 0, 0})
	CMember(EDelmarDraftingState)                      DraftingState                                               OFFSET(get<T>, {0x79, 1, 0, 0})
	DMember(float)                                     OversteerAccumulationPercentage                             OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(bool)                                      bStartlineBoostActive                                       OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      bFailedStartlineBoost                                       OFFSET(get<bool>, {0x81, 1, 0, 0})
	DMember(float)                                     PercentageMaxBonusSpeedEarned                               OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     StartlineBoostAppliedBonusSpeed                             OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     MaxEarnedBonusSpeed                                         OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(bool)                                      bLeftStrafe                                                 OFFSET(get<bool>, {0x90, 1, 0, 0})
	DMember(bool)                                      bStrafeActive                                               OFFSET(get<bool>, {0x91, 1, 0, 0})
	DMember(bool)                                      bStrafeDisabled                                             OFFSET(get<bool>, {0x92, 1, 0, 0})
	DMember(bool)                                      bCanStrafeBeActivated                                       OFFSET(get<bool>, {0x93, 1, 0, 0})
	DMember(float)                                     StrafeCooldownPercentage                                    OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(bool)                                      bTurboActive                                                OFFSET(get<bool>, {0x98, 1, 0, 0})
	DMember(float)                                     NumCurrentCharges                                           OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(float)                                     NumMaxCharges                                               OFFSET(get<float>, {0xA0, 4, 0, 0})
	CMember(EDelMarTurboZoneState)                     BonusZoneState                                              OFFSET(get<T>, {0xA4, 1, 0, 0})
	DMember(float)                                     PercentageTurboActiveTimeRemaining                          OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     RemainingTurboActiveSeconds                                 OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     TurboAppliedBonusSpeed                                      OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     TurboBonusZoneBonusSpeed                                    OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     TurboAdditionalActiveSeconds                                OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(bool)                                      bKickflipActive                                             OFFSET(get<bool>, {0xBC, 1, 0, 0})
	DMember(bool)                                      bKickflipLeftSide                                           OFFSET(get<bool>, {0xBD, 1, 0, 0})
	DMember(bool)                                      bKickflipSuctionActive                                      OFFSET(get<bool>, {0xBE, 1, 0, 0})
	DMember(float)                                     DistanceToSuctionSurface                                    OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     KickflipDuration                                            OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(int32_t)                                   KickflipActivationCharges                                   OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
	DMember(bool)                                      bReattachmentActive                                         OFFSET(get<bool>, {0xCC, 1, 0, 0})
	SMember(FVector)                                   ReattachmentDirection                                       OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
	DMember(bool)                                      bUnderthrustActive                                          OFFSET(get<bool>, {0xE8, 1, 0, 0})
	DMember(float)                                     UnderthrustPercentageTankRemaining                          OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     UnderthrustActiveDuration                                   OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(bool)                                      bJumpActive                                                 OFFSET(get<bool>, {0xF4, 1, 0, 0})
	DMember(bool)                                      bAirFreestyleActive                                         OFFSET(get<bool>, {0xF5, 1, 0, 0})
	DMember(bool)                                      bVehicleDemolished                                          OFFSET(get<bool>, {0xF6, 1, 0, 0})
	SMember(FGameplayTag)                              DemolishCausedByTag                                         OFFSET(getStruct<T>, {0xF8, 4, 0, 0})
	DMember(bool)                                      bInvulnerabilityActive                                      OFFSET(get<bool>, {0xFC, 1, 0, 0})
	DMember(bool)                                      bVehicleSpawnedThisFrame                                    OFFSET(get<bool>, {0xFD, 1, 0, 0})
	DMember(bool)                                      bFirstVehicleForPlayer                                      OFFSET(get<bool>, {0xFE, 1, 0, 0})
	DMember(bool)                                      bPreviousVehicleDemolished                                  OFFSET(get<bool>, {0xFF, 1, 0, 0})
	DMember(bool)                                      bHeadlightsActive                                           OFFSET(get<bool>, {0x100, 1, 0, 0})
};

/// Struct /Script/DelMarCosmetics.DelMarPreviousPreviewConfigs
/// Size: 0x0038 (0x000000 - 0x000038)
class FDelMarPreviousPreviewConfigs : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/DelMarCosmetics.DelMarPreviewCustomization
/// Size: 0x0018 (0x000000 - 0x000018)
class FDelMarPreviewCustomization : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              SlotTag                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FCosmeticCustomizationInfo>)        CustomizationInfo                                           OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Enum /Script/DelMarCosmetics.EDelMarVehicleBoosterFlags
/// Size: 0x08
enum class EDelMarVehicleBoosterFlags : uint8_t
{
	EDelMarVehicleBoosterFlags__None                                                 = 0,
	EDelMarVehicleBoosterFlags__Side                                                 = 2,
	EDelMarVehicleBoosterFlags__Down                                                 = 4,
	EDelMarVehicleBoosterFlags__Front                                                = 8,
	EDelMarVehicleBoosterFlags__Back                                                 = 16,
	EDelMarVehicleBoosterFlags__Left                                                 = 32,
	EDelMarVehicleBoosterFlags__Right                                                = 64,
	EDelMarVehicleBoosterFlags__All                                                  = 255
};

/// Enum /Script/DelMarCosmetics.EDelMarWheelMirrorType
/// Size: 0x03
enum class EDelMarWheelMirrorType : uint8_t
{
	EDelMarWheelMirrorType__Scale                                                    = 0,
	EDelMarWheelMirrorType__Rotate                                                   = 1,
	EDelMarWheelMirrorType__None                                                     = 2
};

/// Enum /Script/DelMarCosmetics.EDelMarPreviewCameraType
/// Size: 0x03
enum class EDelMarPreviewCameraType : uint8_t
{
	EDelMarPreviewCameraType__None                                                   = 0,
	EDelMarPreviewCameraType__ZoomIn                                                 = 1,
	EDelMarPreviewCameraType__ZoomOut                                                = 2
};

/// Enum /Script/DelMarCosmetics.EDelMarWheelAttachPoint
/// Size: 0x03
enum class EDelMarWheelAttachPoint : uint8_t
{
	EDelMarWheelAttachPoint__Spin                                                    = 0,
	EDelMarWheelAttachPoint__Pivot                                                   = 1,
	EDelMarWheelAttachPoint__Contact                                                 = 2
};

