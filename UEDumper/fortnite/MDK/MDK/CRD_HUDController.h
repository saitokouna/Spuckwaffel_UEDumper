
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DynamicUI
/// dependency: Engine

/// Class /Script/CRD_HUDController.CustomHUDLayoutComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UCustomHUDLayoutComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(char)                                      DynamicUISceneLayerID                                       OFFSET(get<char>, {0xA0, 1, 0, 0})
	CMember(class UDynamicUIScene*)                    CachedScene                                                 OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortAthenaMutator_HUDElementVisibility*>) CachedMutator                                OFFSET(get<T>, {0xB0, 8, 0, 0})


	/// Functions
	// Function /Script/CRD_HUDController.CustomHUDLayoutComponent.UpdateDynamicUIScene
	// void UpdateDynamicUIScene();                                                                                             // [0xac3dcd0] Final|Native|Protected 
	// Function /Script/CRD_HUDController.CustomHUDLayoutComponent.PlayerPreRemoved
	// void PlayerPreRemoved(FUniqueNetIdRepl UniqueNetId, bool bIsLocalPlayer);                                                // [0xac3da68] Final|Native|Protected 
	// Function /Script/CRD_HUDController.CustomHUDLayoutComponent.HandleTeamIndexChanged
	// void HandleTeamIndexChanged(char TeamIndex);                                                                             // [0xac3d9ec] Final|Native|Protected 
	// Function /Script/CRD_HUDController.CustomHUDLayoutComponent.HandleMinigameEnded
	// void HandleMinigameEnded();                                                                                              // [0xac3d9d8] Final|Native|Protected 
	// Function /Script/CRD_HUDController.CustomHUDLayoutComponent.GetTargetWidgetClassFromTag
	// TWeakObjectPtr<UClass*> GetTargetWidgetClassFromTag(FGameplayTag& GameplayTag);                                          // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

