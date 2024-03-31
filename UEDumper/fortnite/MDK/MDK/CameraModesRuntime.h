
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags

/// Class /Script/CameraModesRuntime.CameraModes_FirstPersonCameraController
/// Size: 0x0028 (0x0003D0 - 0x0003F8)
class ACameraModes_FirstPersonCameraController : public AFortFirstPersonCameraController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1016;

public:
	SMember(FGameplayTag)                              PreventWeaponHolsterTag                                     OFFSET(getStruct<T>, {0x3D0, 4, 0, 0})
	DMember(float)                                     HeadMotionScalar                                            OFFSET(get<float>, {0x3D4, 4, 0, 0})
	CMember(TArray<class UClass*>)                     AllowedWeaponClassList                                      OFFSET(get<T>, {0x3D8, 16, 0, 0})
	CMember(class USkeletalMeshComponent*)             FirstPersonSkeletalMeshComp                                 OFFSET(get<T>, {0x3E8, 8, 0, 0})


	/// Functions
	// Function /Script/CameraModesRuntime.CameraModes_FirstPersonCameraController.UpdateFirstPersonFOV
	// void UpdateFirstPersonFOV(float FOV);                                                                                    // [0x186becc] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/CameraModesRuntime.CameraModes_FirstPersonCameraController.SetFovOverride
	// void SetFovOverride(float FOV, float TransitionTime);                                                                    // [0x186becc] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/CameraModesRuntime.CameraModes_FirstPersonCameraController.OnLocalPlayerVisibilityChanged
	// void OnLocalPlayerVisibilityChanged(bool bShouldBeVisible);                                                              // [0x186becc] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/CameraModesRuntime.CameraModes_FirstPersonCameraController.HandleWeaponEquipped
	// void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                                  // [0xc035e94] Final|Native|Private 
	// Function /Script/CameraModesRuntime.CameraModes_FirstPersonCameraController.ClearFovOverride
	// void ClearFovOverride(float TransitionTime);                                                                             // [0x186becc] Event|Protected|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/CameraModesRuntime.FortCheatManager_CameraModes
/// Size: 0x0008 (0x000028 - 0x000030)
class UFortCheatManager_CameraModes : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UClass*)                             CameraControllerClass                                       OFFSET(get<T>, {0x28, 8, 0, 0})


	/// Functions
	// Function /Script/CameraModesRuntime.FortCheatManager_CameraModes.EnableFpCameraForAllPlayers
	// void EnableFpCameraForAllPlayers(bool bEnable);                                                                          // [0x63958fc] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/CameraModesRuntime.FortCheatManager_CameraModes.EnableFpCamera
	// void EnableFpCamera(bool bEnable);                                                                                       // [0x63958fc] Final|BlueprintAuthorityOnly|Exec|Native|Public 
};
