
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: DynamicRollTablesRuntime
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Class /Script/PlayerAugmentsCodeRuntime.FortAthenaAIBotEvaluator_Augments
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UFortAthenaAIBotEvaluator_Augments : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FName)                                     AugmentStatusKeyName                                        OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     AugmentItemKeyName                                          OFFSET(getStruct<T>, {0xAC, 4, 0, 0})
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortAthenaBTTask_Augments
/// Size: 0x0018 (0x000070 - 0x000088)
class UFortAthenaBTTask_Augments : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(float)                                     MinSelectionTime                                            OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     MaxSelectionTime                                            OFFSET(get<float>, {0x74, 4, 0, 0})
	SMember(FName)                                     AugmentStatusKeyName                                        OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     AugmentItemKeyName                                          OFFSET(getStruct<T>, {0x7C, 4, 0, 0})
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility
/// Size: 0x0078 (0x000B60 - 0x000BD8)
class UFortAugmentSelectionToolAbility : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3032;

public:
	CMember(class UInputComponent*)                    SelectionInputComponent                                     OFFSET(get<T>, {0xB60, 8, 0, 0})
	SMember(FScalableFloat)                            InputPriority                                               OFFSET(getStruct<T>, {0xB68, 40, 0, 0})
	DMember(int32_t)                                   NumChoices                                                  OFFSET(get<int32_t>, {0xB90, 4, 0, 0})
	DMember(int32_t)                                   HighlightedChoiceIndex                                      OFFSET(get<int32_t>, {0xB94, 4, 0, 0})
	SMember(FScalableFloat)                            RerollHoldInputSeconds                                      OFFSET(getStruct<T>, {0xBA8, 40, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.SetHighlightedChoiceIndex
	// void SetHighlightedChoiceIndex(int32_t NewChoiceIndex);                                                                  // [0xb01fde4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.OnSelectedChoiceIndex
	// void OnSelectedChoiceIndex(int32_t ChoiceIndex);                                                                         // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.OnRerollPressedAndCannotAfford
	// void OnRerollPressedAndCannotAfford();                                                                                   // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.OnHoldRerollInputChanged
	// void OnHoldRerollInputChanged(bool bIsPressed, bool bCompletedHold);                                                     // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.OnHighlightSelectionUpdated
	// void OnHighlightSelectionUpdated(int32_t NewHighlightedChoiceIndex);                                                     // [0x186becc] Event|Protected|BlueprintEvent 
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem
/// Size: 0x00A0 (0x0000A8 - 0x000148)
class UFortBattleRoyalePlayerAugmentSystem : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	DMember(float)                                     ServerGrantingStartedTimestamp                              OFFSET(get<float>, {0xA8, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMatchAugmentsResetEvent                                   OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	DMember(bool)                                      bEnableAugmentCollectionUnlocking                           OFFSET(get<bool>, {0xC0, 1, 0, 0})
	SMember(FScalableFloat)                            NumRollsForUnlock                                           OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            EnableUnlocking                                             OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            EnableBRAugmentSystem                                       OFFSET(getStruct<T>, {0x120, 40, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.TryIncrementUnlockRollCount
	// void TryIncrementUnlockRollCount();                                                                                      // [0xb01fed8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.TryClaimUnlock
	// FFortAugmentPassiveUnlockResult TryClaimUnlock();                                                                        // [0xb01fea4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.ResetMatchAugments
	// void ResetMatchAugments();                                                                                               // [0xb01fc68] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.OnServerAugmentGrantTimestampReplicated
	// void OnServerAugmentGrantTimestampReplicated(float ServerGrantStartTimestamp);                                           // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.OnRep_ServerGrantingStartedTimestamp
	// void OnRep_ServerGrantingStartedTimestamp();                                                                             // [0xb01fc10] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.OnPossedPawnChanged
	// void OnPossedPawnChanged(class APawn* OldPawn, class APawn* NewPawn);                                                    // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.OnMatchAugmentsReset
	// void OnMatchAugmentsReset();                                                                                             // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.OnBattleRoyaleMatchAugmentResetDelegate__DelegateSignature
	// void OnBattleRoyaleMatchAugmentResetDelegate__DelegateSignature();                                                       // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.IsBRAugmentSystemEnabled
	// bool IsBRAugmentSystemEnabled();                                                                                         // [0x3cfa7bc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.HandlePossessedPawnChanged
	// void HandlePossessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn);                                             // [0xb01f668] Final|Native|Protected 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.GetServerGrantingStartedTimestamp
	// float GetServerGrantingStartedTimestamp();                                                                               // [0x641684c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.Get
	// class UFortBattleRoyalePlayerAugmentSystem* Get(class AController* Controller);                                          // [0xb01d18c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.ChooseUnlockFromList
	// FFortAugmentPassiveUnlockResult ChooseUnlockFromList(TArray<FPlayerAugmentLockStatus>& LockedList);                      // [0xb01c94c] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.BP_GetAugmentPlayerPawn
	// void BP_GetAugmentPlayerPawn(EFortBRAugmentSystemCastResult& OutExec, class AFortPlayerPawn*& OutFortPlayerPawn);        // [0xb01c0fc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.BP_GetAugmentController
	// void BP_GetAugmentController(EFortBRAugmentSystemCastResult& OutExec, class AController*& OutController);                // [0xb01c014] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.BlueprintAugmentLog
	// void BlueprintAugmentLog(FString Message, EBattleRoyaleBPAugmentLogVerbosity Verbosity, bool bAutonomousProxyOnly);      // [0xb01c1e4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.AuthoritySetServerGrantingStartedTimestamp
	// void AuthoritySetServerGrantingStartedTimestamp(float ServerTimestamp);                                                  // [0xb01be78] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortCollectionDataEntryPlayerAugment
/// Size: 0x0020 (0x000030 - 0x000050)
class UFortCollectionDataEntryPlayerAugment : public UFortCollectionDataEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UFortPlayerAugmentItemDefinition*)   PlayerAugmentItemDefinition                                 OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FText)                                     AdditionalDescription                                       OFFSET(getStruct<T>, {0x38, 24, 0, 0})
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortCollectionDataPlayerAugment
/// Size: 0x0000 (0x000090 - 0x000090)
class UFortCollectionDataPlayerAugment : public UFortCollectionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortContextualTutorial_MultipleAugmentsQueued
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UFortContextualTutorial_MultipleAugmentsQueued : public UFortContextualTutorial
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.FortContextualTutorial_MultipleAugmentsQueued.HandleBindCompletionTrigger
	// void HandleBindCompletionTrigger(class AFortPlayerControllerZone* FortPCZone);                                           // [0xb01f100] Final|Native|Protected 
	// Function /Script/PlayerAugmentsCodeRuntime.FortContextualTutorial_MultipleAugmentsQueued.HandleBindActivationTrigger
	// void HandleBindActivationTrigger(class AFortPlayerControllerZone* FortPCZone);                                           // [0xb01f040] Final|Native|Protected 
	// Function /Script/PlayerAugmentsCodeRuntime.FortContextualTutorial_MultipleAugmentsQueued.CompletionEventCallback
	// void CompletionEventCallback(bool bIsOpened, bool bViewingAugmentInventory);                                             // [0xb01d03c] Final|Native|Protected 
	// Function /Script/PlayerAugmentsCodeRuntime.FortContextualTutorial_MultipleAugmentsQueued.ActivationEventCallback
	// void ActivationEventCallback(int8_t NumPendingAugmentsToGrant);                                                          // [0xb01b2ec] Final|Native|Protected 
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem
/// Size: 0x0530 (0x0000A8 - 0x0005D8)
class UFortControllerComponent_AugmentGrantingSystem : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1496;

public:
	SMember(FMulticastInlineDelegate)                  OnCanSelectAugmentChanged                                   OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSelectedAugmentForGrant                                   OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAvailableAugmentsForGrantingUpdated                       OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAuthorityRequestAugmentChoices                            OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLocalReroll                                               OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnReplicateNumPendingAugmentsToGrant                        OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	CMember(class UFortWeaponItemDefinition*)          AugmentSelectionModeItem                                    OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      CachedResourceCurrencyOverride                              OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(class UFortWorldItem*)                     SelectionModeWorldItem                                      OFFSET(get<T>, {0x138, 8, 0, 0})
	SMember(FScalableFloat)                            Enabled                                                     OFFSET(getStruct<T>, {0x140, 40, 0, 0})
	DMember(int8_t)                                    ReplicatedNumPendingAugmentsToGrant                         OFFSET(get<int8_t>, {0x169, 1, 0, 0})
	CMember(TArray<FPlayerAugmentChoiceDatum>)         ReplicatedAugmentChoices                                    OFFSET(get<T>, {0x170, 16, 0, 0})
	DMember(int8_t)                                    NumFreeRerolls                                              OFFSET(get<int8_t>, {0x180, 1, 0, 0})
	DMember(int8_t)                                    NumLockedSelectionChoices                                   OFFSET(get<int8_t>, {0x181, 1, 0, 0})
	CMember(class UInputComponent*)                    PrimaryInputComponentWeaponMode                             OFFSET(get<T>, {0x188, 8, 0, 0})
	CMember(class UInputComponent*)                    PrimaryInputComponentBuildMode                              OFFSET(get<T>, {0x190, 8, 0, 0})
	CMember(class UInputComponent*)                    TemporaryInputComponent                                     OFFSET(get<T>, {0x198, 8, 0, 0})
	SMember(FScalableFloat)                            AugmentSelectInputPriority                                  OFFSET(getStruct<T>, {0x1A0, 40, 0, 0})
	SMember(FGameplayTagContainer)                     SelectionBlockedPlayerTags                                  OFFSET(getStruct<T>, {0x1C8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     AugmentSelectInputDisablePlayerTags                         OFFSET(getStruct<T>, {0x1E8, 32, 0, 0})
	CMember(TArray<FFortAugmentRerollCost>)            RerollCosts                                                 OFFSET(get<T>, {0x230, 16, 0, 0})
	SMember(FFortItemEntry)                            SelectorItemEntry                                           OFFSET(getStruct<T>, {0x240, 416, 0, 0})
	SMember(FFortItemEntry)                            LocalCachedPreviousWeapon                                   OFFSET(getStruct<T>, {0x3E0, 416, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.ServerRequestReroll
	// void ServerRequestReroll();                                                                                              // [0x86776a8] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.ServerGrantAugment
	// void ServerGrantAugment(class UFortPlayerAugmentItemDefinition* ChosenAugmentDef);                                       // [0x8f0b798] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnSelectedAugmentForGrantDelegate__DelegateSignature
	// void OnSelectedAugmentForGrantDelegate__DelegateSignature(class UFortPlayerAugmentItemDefinition* SelectedAugment);      // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnReplicateNumPendingAugmentsToGrantDelegate__DelegateSignature
	// void OnReplicateNumPendingAugmentsToGrantDelegate__DelegateSignature(int8_t NumPendingAugmentsToGrant);                  // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_SelectorItemEntry
	// void OnRep_SelectorItemEntry();                                                                                          // [0xb01fbfc] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_ReplicatedNumPendingAugmentsToGrant
	// void OnRep_ReplicatedNumPendingAugmentsToGrant();                                                                        // [0xb01fbe8] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_ReplicatedAugmentChoices
	// void OnRep_ReplicatedAugmentChoices();                                                                                   // [0xb01fbd4] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_NumLockedSelectionChoices
	// void OnRep_NumLockedSelectionChoices();                                                                                  // [0xb01fbc0] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_NumFreeRerolls
	// void OnRep_NumFreeRerolls();                                                                                             // [0xb01fbac] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnNumLockedSelectionChoicesUpdatedDelegate__DelegateSignature
	// void OnNumLockedSelectionChoicesUpdatedDelegate__DelegateSignature(int32_t NewNumFreeRerolls);                           // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnMinigameStarted
	// void OnMinigameStarted();                                                                                                // [0xb01fb84] Final|Native|Protected 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnLocalUnequipAugmentSelectionPressed
	// void OnLocalUnequipAugmentSelectionPressed();                                                                            // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnLocalRerollDelegate__DelegateSignature
	// void OnLocalRerollDelegate__DelegateSignature();                                                                         // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnLocalEquipAugmentSelectionPressed
	// void OnLocalEquipAugmentSelectionPressed();                                                                              // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnFreeRerollsUpdatedDelegate__DelegateSignature
	// void OnFreeRerollsUpdatedDelegate__DelegateSignature(int32_t NewNumFreeRerolls);                                         // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnAvailableAugmentsForGrantingUpdatedDelegate__DelegateSignature
	// void OnAvailableAugmentsForGrantingUpdatedDelegate__DelegateSignature(class UFortControllerComponent_AugmentGrantingSystem* GrantingComponent); // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnAuthorityRequestAugmentChoicesDelegate__DelegateSignature
	// void OnAuthorityRequestAugmentChoicesDelegate__DelegateSignature(TArray<UFortPlayerAugmentItemDefinition*>& IgnoreInRoll); // [0x186becc] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.IsSelectionItemEquipped
	// bool IsSelectionItemEquipped();                                                                                          // [0xb01f9dc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.IsSelectionChoicesLocked
	// bool IsSelectionChoicesLocked();                                                                                         // [0xb01f9c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandleUnHolsteredEvent
	// void HandleUnHolsteredEvent();                                                                                           // [0xb01f9ac] Final|Native|Protected 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandleToggleFullscreenMap
	// void HandleToggleFullscreenMap(bool bVisible);                                                                           // [0xb01f8e8] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandlePossessedPawnChanged
	// void HandlePossessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn);                                             // [0xb01f7a8] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandleHolsteredEvent
	// void HandleHolsteredEvent();                                                                                             // [0xb01f62c] Final|Native|Protected 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandleChangedBuildMode
	// void HandleChangedBuildMode(bool bEnteredBuildMode);                                                                     // [0xb01f300] Final|Native|Protected 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.GetPendingAugmentsToGrant
	// int32_t GetPendingAugmentsToGrant();                                                                                     // [0xb01ed8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.GetNumFreeRerolls
	// int32_t GetNumFreeRerolls();                                                                                             // [0xb01ed74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.GetAvailableAugmentsToGrant
	// TArray<FPlayerAugmentChoiceDatum> GetAvailableAugmentsToGrant();                                                         // [0xb01d86c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.GetAugmentGrantingComponentFromController
	// class UFortControllerComponent_AugmentGrantingSystem* GetAugmentGrantingComponentFromController(class AController* Controller); // [0xb01d610] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.ClientSelectAvailableAugmentToGrant
	// void ClientSelectAvailableAugmentToGrant(class UFortPlayerAugmentItemDefinition* ChosenAugmentDef);                      // [0xb01cf7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.CanSelectAugmentChangedDelegate__DelegateSignature
	// void CanSelectAugmentChangedDelegate__DelegateSignature(bool bCanSelectAugment);                                         // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.CanReroll
	// bool CanReroll();                                                                                                        // [0xb01c928] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthoritySetAvailableAugmentChoices
	// void AuthoritySetAvailableAugmentChoices(TArray<FPlayerAugmentChoiceDatum>& AvailableAugmentsToGrant);                   // [0xb01b6f4] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityResetAugmentData
	// void AuthorityResetAugmentData();                                                                                        // [0xb01b6e0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityRequestSelectionToolItemGrant
	// void AuthorityRequestSelectionToolItemGrant(class UObject* Instigator);                                                  // [0xb01b630] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityIncrementLockedSelectionChoices
	// void AuthorityIncrementLockedSelectionChoices(int32_t NumLocksToAdd);                                                    // [0xb01b560] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityGrantNewAugment
	// void AuthorityGrantNewAugment();                                                                                         // [0xb01b54c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityGrantFreeReroll
	// void AuthorityGrantFreeReroll();                                                                                         // [0xb01b518] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/PlayerAugmentsCodeRuntime.AugmentFuctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAugmentFuctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.AugmentFuctionLibrary.GiveAugmentWithPreventDropping
	// class UFortWorldItem* GiveAugmentWithPreventDropping(class UFortPlayerAugmentItemDefinition* ChosenAugmentDef, TScriptInterface<Class> InventoryOwner); // [0xb01eda4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents
/// Size: 0x00B8 (0x0000A8 - 0x000160)
class UFortControllerComponent_AugmentUIEvents : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FMulticastInlineDelegate)                  OnAugmentSelectorHighlightedChoice                          OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAugmentStartedSelectionOfChoice                           OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAugmentSelectedByPointerEvent                             OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAugmentGrantingTimersFinishedForMatch                     OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAugmentGrantingTimersResetForMatch                        OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  AugmentHoldInputRerollChanged                               OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAugmentToolViewSwap                                       OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	DMember(int32_t)                                   NumAugmentGrantRoundsForPlaylist                            OFFSET(get<int32_t>, {0x150, 4, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.UpdatedTimerProgress
	// void UpdatedTimerProgress(float TimeRemaining, float TimePercentage);                                                    // [0xb01feec] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.SetNumGrantableAugmentsForPlaylist
	// void SetNumGrantableAugmentsForPlaylist(int32_t NewNumRounds);                                                           // [0x6a309ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnGrantTimerProgressUpdatedDelegate__DelegateSignature
	// void OnGrantTimerProgressUpdatedDelegate__DelegateSignature(float TimeRemaining, float TimePercentage);                  // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentToolViewSwapDelegate__DelegateSignature
	// void OnAugmentToolViewSwapDelegate__DelegateSignature(bool ViewingInventoryAugments);                                    // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentStartedSelectionOfChoiceDelegate__DelegateSignature
	// void OnAugmentStartedSelectionOfChoiceDelegate__DelegateSignature(int32_t ChoiceIndex);                                  // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentSelectorOpenedStatusChangedDelegate__DelegateSignature
	// void OnAugmentSelectorOpenedStatusChangedDelegate__DelegateSignature(bool bIsOpened, bool bViewingInventory);            // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentSelectorHighlightedChoiceDelegate__DelegateSignature
	// void OnAugmentSelectorHighlightedChoiceDelegate__DelegateSignature(int32_t ChoiceIndex);                                 // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentSelectedByPointerEvent__DelegateSignature
	// void OnAugmentSelectedByPointerEvent__DelegateSignature(int32_t ChoiceIndex);                                            // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentGrantingTimersResetForMatchDelegate__DelegateSignature
	// void OnAugmentGrantingTimersResetForMatchDelegate__DelegateSignature();                                                  // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentGrantingTimersFinishedForMatchDelegate__DelegateSignature
	// void OnAugmentGrantingTimersFinishedForMatchDelegate__DelegateSignature();                                               // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.NotifyGrantingTimersReset
	// void NotifyGrantingTimersReset();                                                                                        // [0xb01fb70] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.NotifyGrantingTimersFinished
	// void NotifyGrantingTimersFinished();                                                                                     // [0xb01fb4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.HandleAugmentSelectorOpenedStatusChanged
	// void HandleAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingInventory);                                   // [0xb01eef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.AugmentHoldInputRerollChangedDelegate__DelegateSignature
	// void AugmentHoldInputRerollChangedDelegate__DelegateSignature(EAugmentHoldInputRerollState HoldState, float HoldDurationSeconds); // [0x186becc] MulticastDelegate|Public|Delegate 
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence
/// Size: 0x0118 (0x0000A8 - 0x0001C0)
class UFortControllerComponent_PlayerAugmentPersistence : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FScalableFloat)                            Enabled                                                     OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            LockMissingCollectionAugmentsEnabled                        OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	CMember(class AFortPlayerControllerAthena*)        PlayerController                                            OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(class UFortCollectionDataPlayerAugment*)   CollectionData                                              OFFSET(get<T>, {0x100, 8, 0, 0})
	SMember(FPlayerAugmentsPersistenceData)            LivePlayerAugmentsPersistenceData                           OFFSET(getStruct<T>, {0x108, 24, 0, 0})
	CMember(TSet<UFortPlayerAugmentItemDefinition*>)   AugmentsCollectedThisMatch                                  OFFSET(get<T>, {0x120, 80, 0, 0})
	CMember(TArray<FReplicatedSharedPlayerAugment>)    ReplicatedSharedPlayerAugments                              OFFSET(get<T>, {0x170, 16, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.HandleMcpProfilesInitialized
	// void HandleMcpProfilesInitialized();                                                                                     // [0xb01f640] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.HandleCollectionDataTableLoaded
	// void HandleCollectionDataTableLoaded(TWeakObjectPtr<UFortCollectionsDataTable*> CollectionsDataTableSoftPtr);            // [0xb01f4f8] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.HandleCollectionDataLoaded
	// void HandleCollectionDataLoaded(TWeakObjectPtr<UFortCollectionData*> BaseCollectionDataSoftPtr);                         // [0xb01f3c4] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetRollCountSinceLastRandomUnlock
	// int32_t GetRollCountSinceLastRandomUnlock();                                                                             // [0x755d104] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetLockStatusForAll
	// void GetLockStatusForAll(TArray<FPlayerAugmentLockStatus>& OutLockStatusArray);                                          // [0xb01e030] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetLockStatus
	// FPlayerAugmentLockStatus GetLockStatus(class UFortPlayerAugmentItemDefinition* PlayerAugmentItemDefinition);             // [0xb01df38] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetLockedList
	// void GetLockedList(TArray<FPlayerAugmentLockStatus>& OutLockedList, bool bIncludeSharedAugments);                        // [0xb01e65c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetCarryOverPlayerAugments
	// void GetCarryOverPlayerAugments(TArray<FCarryOverPlayerAugment>& OutCarryOverPlayerAugments);                            // [0xb01d90c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.AuthorityUnlockPlayerAugment
	// void AuthorityUnlockPlayerAugment(class UFortPlayerAugmentItemDefinition* PlayerAugmentToUnlock);                        // [0xb01bf54] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.AuthoritySetRollCountSinceLastRandomUnlock
	// void AuthoritySetRollCountSinceLastRandomUnlock(int32_t NewRollCount);                                                   // [0xb01bdb8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.AuthoritySetCarryOverPlayerAugments
	// void AuthoritySetCarryOverPlayerAugments(TArray<FCarryOverPlayerAugment>& NewCarryOverPlayerAugments);                   // [0xb01b78c] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortGamestateComponent_AugmentTableManager
/// Size: 0x0050 (0x0002D8 - 0x000328)
class UFortGamestateComponent_AugmentTableManager : public UFortGamestateComponent_DynamicRollTableManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentDynamicRollPlayerComponent
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UFortControllerComponent_AugmentDynamicRollPlayerComponent : public UFortControllerComponent_DynamicRollPlayerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortMcpCollectionPlayerAugment
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UFortMcpCollectionPlayerAugment : public UFortMcpCollectionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.FortMcpCollectionPlayerAugment.MarkSeenForPlayer
	// void MarkSeenForPlayer(class AFortPlayerController* PlayerController, FGameplayTag VariantTag);                          // [0xb01fa00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortMcpCollectionPlayerAugment.AddToPlayerCollection
	// void AddToPlayerCollection(class AFortPlayerController* PlayerController, FGameplayTag PlayerAugmentVariantTag);         // [0xb01b3ac] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortPlayerAugmentCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.StartAugmentGrantingFlow
	// void StartAugmentGrantingFlow();                                                                                         // [0x3518b8c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.SetPlayerAugmentRollCountSinceLastUnlock
	// void SetPlayerAugmentRollCountSinceLastUnlock(int32_t RollCount);                                                        // [0x6a309ec] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.ServerLogDynamicWeightsForPlayer
	// void ServerLogDynamicWeightsForPlayer(bool bVeryDetailedReport);                                                         // [0x63958fc] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.ResetAugmentGrantingToSeed
	// void ResetAugmentGrantingToSeed(int32_t Seed);                                                                           // [0x6a309ec] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.RemoveAugmentCount
	// void RemoveAugmentCount(FString AugmentName, int32_t RemoveCount);                                                       // [0x8a2cb2c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.RemoveAugment
	// void RemoveAugment(FString AugmentName);                                                                                 // [0x91f846c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.RemoveAllAugmentsFromBots
	// void RemoveAllAugmentsFromBots();                                                                                        // [0x3518b8c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.RemoveAllAugments
	// void RemoveAllAugments();                                                                                                // [0x3518b8c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.LogPlayerAugmentsLockStatus
	// void LogPlayerAugmentsLockStatus();                                                                                      // [0x3518b8c] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.GiveAugmentToBots
	// void GiveAugmentToBots(FString AugmentName);                                                                             // [0x91f846c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.GiveAugmentCount
	// void GiveAugmentCount(FString AugmentName, int32_t AddCount);                                                            // [0x8a2cb2c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.GiveAugment
	// void GiveAugment(FString AugmentName);                                                                                   // [0x91f846c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.ForceSelectionAugments
	// void ForceSelectionAugments(FString AugmentNameFirst, FString AugmentNameSecond);                                        // [0x8a2b9f8] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.CollectPlayerAugment
	// void CollectPlayerAugment(FString TagMatch);                                                                             // [0x6c014e8] Final|BlueprintAuthorityOnly|Exec|Native|Public|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.CollectAllPlayerAugments
	// void CollectAllPlayerAugments();                                                                                         // [0x3518b8c] Final|BlueprintAuthorityOnly|Exec|Native|Public|Const 
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem
/// Size: 0x0108 (0x0000A0 - 0x0001A8)
class UFortPlayerStateComponent_PlayerAugmentSystem : public UFortPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	SMember(FMulticastInlineDelegate)                  OnAugmentListUpdated                                        OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FScalableFloat)                            EnableAugmentsFeature                                       OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	CMember(class UClass*)                             DynamicTagGEClass                                           OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(TMap<FPrimaryAssetId, FPlayerAugmentTrackedData>) AugmentToRuntimeDataMap                              OFFSET(get<T>, {0xF8, 80, 0, 0})
	CMember(TArray<class UFortPlayerAugmentItemDefinition*>) ActiveAugments                                        OFFSET(get<T>, {0x148, 16, 0, 0})
	CMember(TMap<FGameplayTag, double>)                RuntimeAugmentMatchDataCacheFloat                           OFFSET(get<T>, {0x158, 80, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.SetAugmentMatchDataCacheFloat
	// void SetAugmentMatchDataCacheFloat(FGameplayTag TargetAugmentCacheTag, double InData);                                   // [0xb01fc7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.OnRep_ActiveAugments
	// void OnRep_ActiveAugments();                                                                                             // [0xb01fb98] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.OnAugmentListUpdatedEventDispatcher__DelegateSignature
	// void OnAugmentListUpdatedEventDispatcher__DelegateSignature(class UFortPlayerStateComponent_PlayerAugmentSystem* AugmentComponent); // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.HandlePlayerPawnSpawned
	// void HandlePlayerPawnSpawned();                                                                                          // [0xb01f654] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.HandleBotPlayerPawnSpawned
	// void HandleBotPlayerPawnSpawned(class AAIController* Controller, class AFortPawn* Pawn);                                 // [0xb01f1c0] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.GetAugmentMatchDataCacheFloat
	// double GetAugmentMatchDataCacheFloat(EAugmentExecResult& OutExec, FGameplayTag TargetAugmentCacheTag);                   // [0xb01d6dc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.GetAugmentComponentValidated
	// class UFortPlayerStateComponent_PlayerAugmentSystem* GetAugmentComponentValidated(EAugmentExecResult& OutExec, class AActor* PlayerContextActor); // [0xb01d480] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.GetAugmentComponent
	// class UFortPlayerStateComponent_PlayerAugmentSystem* GetAugmentComponent(class AActor* PlayerContextActor);              // [0xb01d350] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.GetActiveAugments
	// TArray<UFortPlayerAugmentItemDefinition*> GetActiveAugments(class AActor* Actor);                                        // [0xb01d258] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.ClientClearMatchAugmentDataCache
	// void ClientClearMatchAugmentDataCache();                                                                                 // [0x186a828] Net|NetReliableNative|Event|Public|NetClient 
};

/// Struct /Script/PlayerAugmentsCodeRuntime.FortAugmentPassiveUnlockResult
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortAugmentPassiveUnlockResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UFortPlayerAugmentItemDefinition*)   UnlockedAugment                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bAlreadyInInventory                                         OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/PlayerAugmentsCodeRuntime.PlayerAugmentLockStatus
/// Size: 0x0018 (0x000000 - 0x000018)
class FPlayerAugmentLockStatus : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UFortPlayerAugmentItemDefinition*)   PlayerAugmentItemDefinition                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bIsLocked                                                   OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bWasCollectedInThisMatch                                    OFFSET(get<bool>, {0x9, 1, 0, 0})
	CMember(class AFortPlayerStateAthena*)             SharedFromPlayer                                            OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/PlayerAugmentsCodeRuntime.PlayerAugmentChoiceDatum
/// Size: 0x0028 (0x000000 - 0x000028)
class FPlayerAugmentChoiceDatum : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UFortPlayerAugmentItemDefinition*)   ItemDef                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     ChoiceMetaTags                                              OFFSET(getStruct<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/PlayerAugmentsCodeRuntime.FortAugmentRerollCost
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortAugmentRerollCost : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UFortItemDefinition*)                ResourceCurrency                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FScalableFloat)                            Amount                                                      OFFSET(getStruct<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/PlayerAugmentsCodeRuntime.PlayerAugmentTrackedData
/// Size: 0x0028 (0x000000 - 0x000028)
class FPlayerAugmentTrackedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FPlayerAugmentAbilitySetHandlesStackEntry>) AbilitySetHandlesStack                              OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FPlayerAugmentGameplayEffectHandlesStackEntry>) GEHandlesStack                                  OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/PlayerAugmentsCodeRuntime.PlayerAugmentGameplayEffectHandlesStackEntry
/// Size: 0x0010 (0x000000 - 0x000010)
class FPlayerAugmentGameplayEffectHandlesStackEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FActiveGameplayEffectHandle>)       GEHandles                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/PlayerAugmentsCodeRuntime.PlayerAugmentAbilitySetHandlesStackEntry
/// Size: 0x0010 (0x000000 - 0x000010)
class FPlayerAugmentAbilitySetHandlesStackEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FFortAbilitySetHandle>)             AbilitySetHandles                                           OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/PlayerAugmentsCodeRuntime.CarryOverPlayerAugment
/// Size: 0x000C (0x000000 - 0x00000C)
class FCarryOverPlayerAugment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FPrimaryAssetId)                           AugmentAssetId                                              OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     SourcePlaylistName                                          OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/PlayerAugmentsCodeRuntime.ReplicatedSharedPlayerAugment
/// Size: 0x000C (0x000000 - 0x00000C)
class FReplicatedSharedPlayerAugment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   PlayerAugmentIndex                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerStateAthena*>)   SharedFromPlayer                                            OFFSET(get<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/PlayerAugmentsCodeRuntime.FortAugmentBaseWeightTableRow
/// Size: 0x0000 (0x000038 - 0x000038)
class FFortAugmentBaseWeightTableRow : public FFortDynamicRollBaseWeightTableRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/PlayerAugmentsCodeRuntime.FortAugmentWeightModificationDataRow
/// Size: 0x0000 (0x000018 - 0x000018)
class FFortAugmentWeightModificationDataRow : public FFortDynamicRollWeightModifierTableRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PlayerAugmentsCodeRuntime.FortMcpCollectedPlayerAugmentProperties
/// Size: 0x0001 (0x000000 - 0x000001)
class FFortMcpCollectedPlayerAugmentProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Enum /Script/PlayerAugmentsCodeRuntime.EBattleRoyaleBPAugmentLogVerbosity
/// Size: 0x03
enum class EBattleRoyaleBPAugmentLogVerbosity : uint8_t
{
	EBattleRoyaleBPAugmentLogVerbosity__Log                                          = 0,
	EBattleRoyaleBPAugmentLogVerbosity__Verbose                                      = 1,
	EBattleRoyaleBPAugmentLogVerbosity__EBattleRoyaleBPAugmentLogVerbosity_MAX       = 2
};

/// Enum /Script/PlayerAugmentsCodeRuntime.EFortBRAugmentSystemCastResult
/// Size: 0x03
enum class EFortBRAugmentSystemCastResult : uint8_t
{
	EFortBRAugmentSystemCastResult__Valid                                            = 0,
	EFortBRAugmentSystemCastResult__Invalid                                          = 1,
	EFortBRAugmentSystemCastResult__EFortBRAugmentSystemCastResult_MAX               = 2
};

/// Enum /Script/PlayerAugmentsCodeRuntime.EAugmentHoldInputRerollState
/// Size: 0x03
enum class EAugmentHoldInputRerollState : uint8_t
{
	EAugmentHoldInputRerollState__Pressed                                            = 0,
	EAugmentHoldInputRerollState__Released                                           = 1,
	EAugmentHoldInputRerollState__EAugmentHoldInputRerollState_MAX                   = 2
};

/// Enum /Script/PlayerAugmentsCodeRuntime.EAugmentExecResult
/// Size: 0x03
enum class EAugmentExecResult : uint8_t
{
	EAugmentExecResult__Success                                                      = 0,
	EAugmentExecResult__Failure                                                      = 1,
	EAugmentExecResult__EAugmentExecResult_MAX                                       = 2
};
