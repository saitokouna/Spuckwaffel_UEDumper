
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: McpProfileSys
/// dependency: NetCore
/// dependency: ProxyTable
/// dependency: StructUtils
/// dependency: VerseGameplayTags

/// Class /Script/ItemizationCoreRuntime.InventoryCollection
/// Size: 0x05A0 (0x000290 - 0x000830)
class AInventoryCollection : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
	SMember(FMulticastInlineDelegate)                  OnInventoryCollectionLoadStateChanged                       OFFSET(getStruct<T>, {0x290, 16, 0, 0})
	CMember(TArray<class UInventory*>)                 InventoryList                                               OFFSET(get<T>, {0x2A0, 16, 0, 0})
	CMember(TMap<FGuid, UInventory*>)                  InventoryMap                                                OFFSET(get<T>, {0x2B0, 80, 0, 0})
	CMember(TMap<FGuid, FGuid>)                        ItemInventoryMap                                            OFFSET(get<T>, {0x300, 80, 0, 0})
	CMember(TMap<FGuid, UItemInstance*>)               ItemInstanceMap                                             OFFSET(get<T>, {0x350, 80, 0, 0})
	CMember(class UItemComponentStorageManager*)       ItemComponentStorageManager                                 OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(EInventoryCollectionType)                  InventoryCollectionType                                     OFFSET(get<T>, {0x810, 1, 0, 0})
	SMember(FGuid)                                     InventoryCollectionID                                       OFFSET(getStruct<T>, {0x814, 16, 0, 0})
	CMember(EInventoryCollectionLoadState)             InventoryCollectionLoadState                                OFFSET(get<T>, {0x824, 1, 0, 0})
	CMember(class UInventorySetupData*)                UsedInventorySetupData                                      OFFSET(get<T>, {0x828, 8, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.UseItem
	// void UseItem(FGuid& ItemId, FGuid AdditionalItemID);                                                                     // [0x80e6284] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.SetInventoryTotalSlotsOverride
	// int64_t SetInventoryTotalSlotsOverride(FGuid& TargetInventoryID, int64_t InInventoryTotalSlotsOverride);                 // [0x80e610c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.SetInventoryMaxStackSizeOverride
	// int64_t SetInventoryMaxStackSizeOverride(FGuid& TargetInventoryID, int64_t InInventoryMaxStackSizeOverride);             // [0x80e5f78] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.SetEquippableItemInactive
	// void SetEquippableItemInactive(FGuid& ItemEntryID);                                                                      // [0x80e5e08] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.SetEquippableItemActive
	// void SetEquippableItemActive(FGuid& ItemEntryID);                                                                        // [0x80e5d78] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.Server_UseItem
	// void Server_UseItem(FGuid ItemId, FGuid AdditionalItemID);                                                               // [0x80e5bbc] Net|NetReliableNative|Event|Public|NetServer|HasDefaults 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.Server_SwapItems
	// void Server_SwapItems(FGuid ItemEntryID, class AInventoryCollection* OtherInventoryCollection, FGuid OtherItemEntryID);  // [0x80e5aa8] Net|NetReliableNative|Event|Protected|NetServer|HasDefaults 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.Server_SetItemSlot
	// void Server_SetItemSlot(FGuid OwningInventoryID, FGuid ItemEntryID, uint16_t SlotNumber, EVkInventoryMoveBehaviour MoveBehaviour); // [0x80e5834] Net|NetReliableNative|Event|Protected|NetServer|HasDefaults 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.Server_SetEquippableItemInactive
	// void Server_SetEquippableItemInactive(FGuid ItemEntryID);                                                                // [0x80e57ac] Net|NetReliableNative|Event|Protected|NetServer|HasDefaults 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.Server_SetEquippableItemActive
	// void Server_SetEquippableItemActive(FGuid ItemEntryID);                                                                  // [0x80e5724] Net|NetReliableNative|Event|Protected|NetServer|HasDefaults 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.Server_MoveItemToInventory
	// void Server_MoveItemToInventory(FGuid ItemEntryID, class AInventoryCollection* TargetInventoryCollection, FGuid TargetInventoryID); // [0x80e5480] Net|NetReliableNative|Event|Protected|NetServer|HasDefaults 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.Server_MoveItemsWithDefinitionToInventory
	// void Server_MoveItemsWithDefinitionToInventory(FGuid OwningInventoryID, class UItemDefinitionBase* ItemDefinition, class AInventoryCollection* TargetInventoryCollection, FGuid TargetInventoryID, int64_t Amount); // [0x80e5594] Net|NetReliableNative|Event|Protected|NetServer|HasDefaults 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.Server_MoveItemListToInventory
	// void Server_MoveItemListToInventory(TArray<FGuid> ItemEntryIDList, class AInventoryCollection* TargetInventoryCollection, FGuid TargetInventoryID); // [0x80e5368] Net|NetReliableNative|Event|Protected|NetServer|HasDefaults 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.Server_DropItem
	// void Server_DropItem(FGuid ItemEntryID, int64_t AmountToDrop);                                                           // [0x80e527c] Net|NetReliableNative|Event|Public|NetServer|HasDefaults|NetValidate 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.IsEquippableItemActive
	// bool IsEquippableItemActive(FGuid& ItemEntryID);                                                                         // [0x80e51cc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemSlotNumber
	// int32_t GetItemSlotNumber(FGuid& TargetInventoryID, FGuid& ItemEntryID);                                                 // [0x80e4af4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemMaxAmountForEntry
	// int64_t GetItemMaxAmountForEntry(FGuid& TargetInventoryID, FGuid& ItemEntryID);                                          // [0x80e49a8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemEntryIDBySlot
	// FGuid GetItemEntryIDBySlot(FGuid& TargetInventoryID, int32_t SlotNumber);                                                // [0x80e4824] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemDefinition
	// class UItemDefinitionBase* GetItemDefinition(FGuid& TargetInventoryID, FGuid& ItemEntryID);                              // [0x80e4724] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemAmountFromInventory
	// int64_t GetItemAmountFromInventory(class UItemDefinitionBase* ItemDefinition, FGuid& TargetInventoryID);                 // [0x80e461c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemAmountFromEntry
	// int64_t GetItemAmountFromEntry(FGuid& TargetInventoryID, FGuid& ItemEntryID);                                            // [0x80e451c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemAmount
	// int64_t GetItemAmount(class UItemDefinitionBase* ItemDefinition);                                                        // [0x80e448c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoryTotalSlotsOverride
	// int64_t GetInventoryTotalSlotsOverride(FGuid& TargetInventoryID);                                                        // [0x80e43e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoryName
	// FText GetInventoryName(FGuid& TargetInventoryID);                                                                        // [0x80e4330] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoryMaxStackSizeOverride
	// int64_t GetInventoryMaxStackSizeOverride(FGuid& TargetInventoryID);                                                      // [0x80e4288] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoryListInPickupPriorityForItemDefinition
	// TArray<FGuid> GetInventoryListInPickupPriorityForItemDefinition(class UItemDefinitionBase* ItemDefinition);              // [0x80e41b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoryDefinition
	// class UInventoryDefinition* GetInventoryDefinition(FGuid& TargetInventoryID);                                            // [0x80e4064] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoryCreationType
	// EItemizationInventoryCreationType GetInventoryCreationType(FGuid& TargetInventoryID);                                    // [0x80e3fc0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoriesWithInventoryDefinition
	// TArray<FGuid> GetInventoriesWithInventoryDefinition(class UInventoryDefinition* InventoryDefinition);                    // [0x80e3f1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetAllItemsInInventory
	// bool GetAllItemsInInventory(FGuid& TargetInventoryID, TArray<FGuid>& OutItemEntryIDList);                                // [0x80e3ca4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetAllInventoriesInCollection
	// bool GetAllInventoriesInCollection(TArray<FGuid>& OutInventoryIDList);                                                   // [0x80e3bf8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.DropItem
	// void DropItem(FGuid& ItemEntryID, int64_t AmountToDrop);                                                                 // [0x80e3a74] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.ClientOnItemAbilityCooldownUpdated
	// void ClientOnItemAbilityCooldownUpdated(class UInventory* Inventory, FGuid ItemEntryID, FItemAbilityCooldownState CooldownState); // [0x80e3950] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
};

/// Class /Script/ItemizationCoreRuntime.Inventory
/// Size: 0x04F0 (0x0000A0 - 0x000590)
class UInventory : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1424;

public:
	CMember(class AInventoryCollection*)               OwningInventoryCollection                                   OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UInventoryDefinition*)               InventoryDefinition                                         OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FGuid)                                     InventoryID                                                 OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	CMember(EItemizationInventoryCreationType)         InventoryType                                               OFFSET(get<T>, {0xC0, 1, 0, 0})
	SMember(FItemEntryList)                            ItemEntryData                                               OFFSET(getStruct<T>, {0xC8, 776, 0, 0})
	DMember(uint16_t)                                  InventoryTotalSlotsOverride                                 OFFSET(get<uint16_t>, {0x3D0, 2, 0, 0})
	DMember(int64_t)                                   InventoryMaxStackSizeOverride                               OFFSET(get<int64_t>, {0x3D8, 8, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.Inventory.OnRep_ItemData
	// void OnRep_ItemData();                                                                                                   // [0x80f2440] Final|Native|Protected 
	// Function /Script/ItemizationCoreRuntime.Inventory.OnRep_InventoryTotalSlotsOverride
	// void OnRep_InventoryTotalSlotsOverride();                                                                                // [0x80f2410] Final|Native|Protected 
	// Function /Script/ItemizationCoreRuntime.Inventory.OnRep_InventoryMaxStackSizeOverride
	// void OnRep_InventoryMaxStackSizeOverride();                                                                              // [0x80f23e8] Final|Native|Protected 
	// Function /Script/ItemizationCoreRuntime.Inventory.OnRep_InventoryID
	// void OnRep_InventoryID();                                                                                                // [0x80f23d4] Final|Native|Protected 
	// Function /Script/ItemizationCoreRuntime.Inventory.OnRep_InventoryDefinition
	// void OnRep_InventoryDefinition();                                                                                        // [0x304b16c] Native|Protected     
};

/// Class /Script/ItemizationCoreRuntime.EquippableInventory
/// Size: 0x0078 (0x000590 - 0x000608)
class UEquippableInventory : public UInventory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1544;

public:
	CMember(TArray<FGuid>)                             ActiveItems                                                 OFFSET(get<T>, {0x590, 16, 0, 0})
	CMember(TArray<FGuid>)                             PreviouslyActiveItems                                       OFFSET(get<T>, {0x5A0, 16, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.EquippableInventory.OnRep_ActiveItems
	// void OnRep_ActiveItems();                                                                                                // [0x80e5268] Final|Native|Private 
};

/// Class /Script/ItemizationCoreRuntime.InventoryDefinition
/// Size: 0x0048 (0x000030 - 0x000078)
class UInventoryDefinition : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FText)                                     Name                                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	DMember(uint16_t)                                  Slots                                                       OFFSET(get<uint16_t>, {0x50, 2, 0, 0})
	DMember(char)                                      PickupPriority                                              OFFSET(get<char>, {0x52, 1, 0, 0})
	CMember(class UItemRequirements*)                  ItemRequirements                                            OFFSET(get<T>, {0x58, 8, 0, 0})
	DMember(bool)                                      bEnableItemStacking                                         OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(bool)                                      bRequireUniqueItemDefinitionPerStack                        OFFSET(get<bool>, {0x61, 1, 0, 0})
	SMember(FVerseGameplayTagContainer)                VerseGameplayTags                                           OFFSET(getStruct<T>, {0x68, 16, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.EquippableInventoryDefinition
/// Size: 0x0038 (0x000078 - 0x0000B0)
class UEquippableInventoryDefinition : public UInventoryDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<FEquipItemRestriction>)             EquipRestrictions                                           OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FEquipItemCondition>)               AutoEquipConditions                                         OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TArray<class UInputAction*>)               SlotBindings                                                OFFSET(get<T>, {0x98, 16, 0, 0})
	DMember(bool)                                      bShowSlotBindings                                           OFFSET(get<bool>, {0xA8, 1, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.EquipmentSlot
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UEquipmentSlot : public UEquippableInventoryDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/ItemizationCoreRuntime.EquipmentHotBar
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UEquipmentHotBar : public UEquippableInventoryDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/ItemizationCoreRuntime.InventoryCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UInventoryCheatManager : public UCheatManagerExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryUseItem
	// void InventoryUseItem(int32_t InventoryIndex, int32_t ItemIndex);                                                        // [0x68f2c34] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventorySetItemSlot
	// void InventorySetItemSlot(int32_t InventoryIndex, int32_t ItemIndex, uint16_t NewSlotIndex);                             // [0x80e5064] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventorySetEquippedItemActive
	// void InventorySetEquippedItemActive(int32_t InventoryIndex, int32_t ItemIndex, bool bActive);                            // [0x80e4f84] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryRemoveFromItem
	// void InventoryRemoveFromItem(int32_t InventoryIndex, int32_t ItemIndex, int64_t AmountToRemove);                         // [0x80e4ca0] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryMoveItem
	// void InventoryMoveItem(int32_t SourceInventoryIndex, int32_t ItemIndex, int32_t TargetInventoryIndex);                   // [0x80e4ea4] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryMoveAmountOfItem
	// void InventoryMoveAmountOfItem(int32_t SourceInventoryIndex, int32_t ItemIndex, int32_t TargetInventoryIndex, int64_t AmountToMove); // [0x80e4d84] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryDropItem
	// void InventoryDropItem(int32_t InventoryIndex, int32_t ItemIndex, int64_t AmountToDrop);                                 // [0x80e4ca0] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryAddToItem
	// void InventoryAddToItem(int32_t InventoryIndex, int32_t ItemIndex, int64_t AmountToAdd);                                 // [0x80e4ca0] Final|Exec|Native|Public 
};

/// Class /Script/ItemizationCoreRuntime.InventorySetupData
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UInventorySetupData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<TWeakObjectPtr<UEquippableInventoryDefinition*>>) EquipmentSetups                               OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<UInventoryDefinition*>>) InventoryDefinitions                                    OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FInventoryStartingItem>)            StartingItems                                               OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TWeakObjectPtr<UInputMappingContext*>)     InputMappingContext                                         OFFSET(get<T>, {0x60, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   InventoryUIWidgetClass                                      OFFSET(get<T>, {0x80, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   InventoryHUDUIWidgetClass                                   OFFSET(get<T>, {0xA0, 32, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0xC0, 16, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.InventorySetupData.SetInventoryDefinitionList
	// void SetInventoryDefinitionList(TArray<TWeakObjectPtr<UInventoryDefinition*>>& InventoryDefinitionList);                 // [0x80e5e98] Final|Native|Public|HasOutParms 
	// Function /Script/ItemizationCoreRuntime.InventorySetupData.SetEquippableInventoryDefinitionList
	// void SetEquippableInventoryDefinitionList(TArray<TWeakObjectPtr<UEquippableInventoryDefinition*>>& EquipmentInventoryDefinitionList); // [0x80e5c98] Final|Native|Public|HasOutParms 
	// Function /Script/ItemizationCoreRuntime.InventorySetupData.GetStartingItems
	// TArray<FInventoryStartingItem> GetStartingItems();                                                                       // [0x80e4bf4] Final|Native|Public|Const 
	// Function /Script/ItemizationCoreRuntime.InventorySetupData.GetInventoryDefinitionList
	// TArray<TWeakObjectPtr<UInventoryDefinition*>> GetInventoryDefinitionList();                                              // [0x80e4100] Final|Native|Public|Const 
	// Function /Script/ItemizationCoreRuntime.InventorySetupData.GetEquippableInventoryDefinitionList
	// TArray<TWeakObjectPtr<UEquippableInventoryDefinition*>> GetEquippableInventoryDefinitionList();                          // [0x80e3e6c] Final|Native|Public|Const 
	// Function /Script/ItemizationCoreRuntime.InventorySetupData.GetDisallowedInventoryDefinitionAssetClasses
	// TArray<UClass*> GetDisallowedInventoryDefinitionAssetClasses();                                                          // [0x80e3e28] Native|Protected|Const 
	// Function /Script/ItemizationCoreRuntime.InventorySetupData.GetDisallowedEquipmentInventoryDefinitionAssetClasses
	// TArray<UClass*> GetDisallowedEquipmentInventoryDefinitionAssetClasses();                                                 // [0x80e3de4] Native|Protected|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityConfigurationAsset
/// Size: 0x0028 (0x000030 - 0x000058)
class UItemAbilityConfigurationAsset : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UClass*)                             GameplayAbilityClass                                        OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                OFFSET(getStruct<T>, {0x38, 32, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemAbilityConfigurationAsset.Construct
	// void Construct(class UGameplayAbility* ability);                                                                         // [0x20c3f9c] Event|Public|BlueprintEvent|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityEffectAsset
/// Size: 0x0008 (0x000030 - 0x000038)
class UItemAbilityEffectAsset : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UClass*)                             GameplayEffectClass                                         OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityCost
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemAbilityCost : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityCostItem
/// Size: 0x0028 (0x000028 - 0x000050)
class UItemAbilityCostItem : public UItemAbilityCost
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TWeakObjectPtr<UItemDefinitionBase*>)      ItemDefinition                                              OFFSET(get<T>, {0x28, 32, 0, 0})
	DMember(int64_t)                                   NumConsumed                                                 OFFSET(get<int64_t>, {0x48, 8, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityCooldown
/// Size: 0x0008 (0x000028 - 0x000030)
class UItemAbilityCooldown : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bApplyOnStart                                               OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityCooldownTime
/// Size: 0x0008 (0x000030 - 0x000038)
class UItemAbilityCooldownTime : public UItemAbilityCooldown
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     CoolDownTime                                                OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityCooldownVelocityBased
/// Size: 0x0010 (0x000030 - 0x000040)
class UItemAbilityCooldownVelocityBased : public UItemAbilityCooldown
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     CooldownTimeIfStationary                                    OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     CooldownTimeScaleFactorIfMoving                             OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      CooldownTimeIsResetToZeroWhenMoving                         OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAttachment
/// Size: 0x0018 (0x000290 - 0x0002A8)
class AItemAttachment : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	CMember(class UMeshComponent*)                     Mesh                                                        OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UItemAttachmentDefinition*)          AttachmentData                                              OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemComponentBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorageManager
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UItemComponentStorageManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TMap<UClass*, FItemEntryStorageMap>)       ClassIndividualStorageMap                                   OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TMap<UClass*, UItemComponentSharedLocalStorage*>) ClassSharedStorageMap                                OFFSET(get<T>, {0x78, 80, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentLocalStorage
/// Size: 0x0010 (0x000028 - 0x000038)
class UItemComponentLocalStorage : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentSharedLocalStorage
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemComponentSharedLocalStorage : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Ability
/// Size: 0x0010 (0x000028 - 0x000038)
class UItemComponent_Ability : public UItemComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FItemAbilityBinding>)               AbilityList                                                 OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorage_Ability
/// Size: 0x0028 (0x000038 - 0x000060)
class UItemComponentStorage_Ability : public UItemComponentLocalStorage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<bool>)                              AbilityIsAvailableList                                      OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(class UItemComponent_Ability*)             SourceData                                                  OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UAbilitySystemComponent*)            AbilitySystemComponent                                      OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorage_AbilityShared
/// Size: 0x0050 (0x000028 - 0x000078)
class UItemComponentStorage_AbilityShared : public UItemComponentSharedLocalStorage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<uint32_t, FItemAbilityRuntimeData>)   RefCountedAbilityRuntimeData                                OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAttachmentDefinition
/// Size: 0x0008 (0x000028 - 0x000030)
class UItemAttachmentDefinition : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EItemStateFilter)                          AttachmentVisibility                                        OFFSET(get<T>, {0x28, 1, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemMeshAttachmentDefinition
/// Size: 0x0050 (0x000030 - 0x000080)
class UItemMeshAttachmentDefinition : public UItemAttachmentDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     AttachToSocketName                                          OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	SMember(FVector)                                   OffsetLocation                                              OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FRotator)                                  OffsetRotation                                              OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FVector)                                   MeshScale                                                   OFFSET(getStruct<T>, {0x68, 24, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemStaticMeshAttachmentDefinition
/// Size: 0x0020 (0x000080 - 0x0000A0)
class UItemStaticMeshAttachmentDefinition : public UItemMeshAttachmentDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TWeakObjectPtr<UStaticMesh*>)              Mesh                                                        OFFSET(get<T>, {0x80, 32, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemSkeletalMeshAttachmentDefinition
/// Size: 0x0040 (0x000080 - 0x0000C0)
class UItemSkeletalMeshAttachmentDefinition : public UItemMeshAttachmentDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TWeakObjectPtr<USkeletalMesh*>)            Mesh                                                        OFFSET(get<T>, {0x80, 32, 0, 0})
	CMember(TWeakObjectPtr<UAnimSequence*>)            Animation                                                   OFFSET(get<T>, {0xA0, 32, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Attach
/// Size: 0x0010 (0x000028 - 0x000038)
class UItemComponent_Attach : public UItemComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class UItemAttachmentDefinition*>)  Attachments                                                 OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorage_Attach
/// Size: 0x0020 (0x000038 - 0x000058)
class UItemComponentStorage_Attach : public UItemComponentLocalStorage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<TWeakObjectPtr<AItemAttachment*>>)  ActorAttachments                                            OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemComponentStorage_Attach.OnOwnerTransformUpdated
	// void OnOwnerTransformUpdated(float DeltaSeconds, FVector OldLocation, FVector OldVelocity);                              // [0x80f22a4] Final|Native|Public|HasDefaults 
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Core
/// Size: 0x0020 (0x000028 - 0x000048)
class UItemComponent_Core : public UItemComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UItemType*)                          ItemType                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UItemRarity*)                        ItemRarity                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FVerseGameplayTagContainer)                ItemTags                                                    OFFSET(getStruct<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemComponent_Core.GetItemType
	// class UItemType* GetItemType();                                                                                          // [0x80f21c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_Core.GetItemRarity
	// class UItemRarity* GetItemRarity();                                                                                      // [0x67e4568] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI
/// Size: 0x0040 (0x000028 - 0x000068)
class UItemComponent_DisplayUI : public UItemComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TWeakObjectPtr<UTexture2D*>)               ItemIcon                                                    OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               SmallItemIcon                                               OFFSET(get<T>, {0x48, 32, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI.GetSmallItemIcon
	// TWeakObjectPtr<UTexture2D*> GetSmallItemIcon();                                                                          // [0x80f21dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI.GetItemIcon
	// TWeakObjectPtr<UTexture2D*> GetItemIcon();                                                                               // [0x80f2160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemOwnerPoseAsset
/// Size: 0x0008 (0x000030 - 0x000038)
class UItemOwnerPoseAsset : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UProxyTable*)                        ProxyTable                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_OwnerPose
/// Size: 0x0018 (0x000028 - 0x000040)
class UItemComponent_OwnerPose : public UItemComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(EItemStateFilter)                          ApplyPoseState                                              OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(class UItemOwnerPoseAsset*)                PoseAsset                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(float)                                     PosePriority                                                OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorage_OwnerPose
/// Size: 0x0008 (0x000038 - 0x000040)
class UItemComponentStorage_OwnerPose : public UItemComponentLocalStorage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bHasAppliedProceduralLayer                                  OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorage_OwnerPoseShared
/// Size: 0x0010 (0x000028 - 0x000038)
class UItemComponentStorage_OwnerPoseShared : public UItemComponentSharedLocalStorage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class UItemComponent_OwnerPose*>)   ActiveProceduralLayers                                      OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Stackable
/// Size: 0x0010 (0x000028 - 0x000038)
class UItemComponent_Stackable : public UItemComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int64_t)                                   MaxStackSize                                                OFFSET(get<int64_t>, {0x28, 8, 0, 0})
	DMember(bool)                                      AllowMultipleStacks                                         OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      DestroyEmptyStacks                                          OFFSET(get<bool>, {0x31, 1, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemDefinitionBase
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UItemDefinitionBase : public UMcpItemDefinitionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FText)                                     ItemName                                                    OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FText)                                     ItemDescription                                             OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FText)                                     ItemShortDescription                                        OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FItemComponentContainer)                   ComponentContainer                                          OFFSET(getStruct<T>, {0x70, 16, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemDefinitionBase.HasItemComponentByClass
	// bool HasItemComponentByClass(class UClass* ItemComponentClass);                                                          // [0x80f2200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemDefinitionBase.GetItemShortDescription
	// FText GetItemShortDescription();                                                                                         // [0x80f2184] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemDefinitionBase.GetItemDescription
	// FText GetItemDescription();                                                                                              // [0x80f2120] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemDefinitionBase.GetItemComponentByClass
	// class UItemComponentBase* GetItemComponentByClass(class UClass* ItemComponentClass);                                     // [0x1a06b8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemDefinitionBase.GetDisplayName
	// FText GetDisplayName();                                                                                                  // [0x80f1e84] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemDefinitionBase.GetDisallowedComponents
	// TArray<UClass*> GetDisallowedComponents();                                                                               // [0x80f1e44] Final|Native|Protected|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemInputAction
/// Size: 0x0000 (0x000078 - 0x000078)
class UItemInputAction : public UInputAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemInputMappingContext
/// Size: 0x0000 (0x000050 - 0x000050)
class UItemInputMappingContext : public UInputMappingContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemInstance
/// Size: 0x0018 (0x000028 - 0x000040)
class UItemInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGuid)                                     ItemEntryID                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemizationCoreSubsystem
/// Size: 0x0018 (0x000030 - 0x000048)
class UItemizationCoreSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FItemInstanceClassOverride)                ItemInstanceClassOverride                                   OFFSET(getStruct<T>, {0x30, 24, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemizationFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataSlot
	// int32_t GetItemDataSlot(FItemAggregatedData& ItemData);                                                                  // [0x80f205c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataItemEntryID
	// FGuid GetItemDataItemEntryID(FItemAggregatedData& ItemData);                                                             // [0x80f1f98] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataDefinition
	// class UItemDefinitionBase* GetItemDataDefinition(FItemAggregatedData& ItemData);                                         // [0x80f1ec4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.DescribeItemEntryID
	// FString DescribeItemEntryID(FGuid& ItemEntryID);                                                                         // [0x80f1d98] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.DescribeInventoryID
	// FString DescribeInventoryID(FGuid& InventoryID);                                                                         // [0x80f1d98] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/ItemizationCoreRuntime.ItemizationLootCountCalculator
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemizationLootCountCalculator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemizationLootCountCalculator_Value
/// Size: 0x0028 (0x000028 - 0x000050)
class UItemizationLootCountCalculator_Value : public UItemizationLootCountCalculator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FScalableFloat)                            Value                                                       OFFSET(getStruct<T>, {0x28, 40, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemizationLootCountCalculator_Range
/// Size: 0x0050 (0x000028 - 0x000078)
class UItemizationLootCountCalculator_Range : public UItemizationLootCountCalculator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FScalableFloat)                            Min                                                         OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            Max                                                         OFFSET(getStruct<T>, {0x50, 40, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemizationLootPoolAsset
/// Size: 0x0058 (0x000030 - 0x000088)
class UItemizationLootPoolAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FText)                                     LootTableName                                               OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FText)                                     LootTableDescription                                        OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(TArray<class UItemizationLootPoolProcessor*>) LootPoolPostProcessorList                                OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FItemizationLootEntry_Guaranteed>)  GuaranteedLoot                                              OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(class UItemizationLootCountCalculator*)    SelectionCount                                              OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(TArray<FItemizationLootEntry_Chance>)      ChanceLoot                                                  OFFSET(get<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemizationLootPoolAsset.GetDisallowedLootPoolItemClasses
	// TArray<UClass*> GetDisallowedLootPoolItemClasses();                                                                      // [0x80e3e28] Native|Public|Const  
	// Function /Script/ItemizationCoreRuntime.ItemizationLootPoolAsset.GetAllowedLootPoolItemClasses
	// TArray<UClass*> GetAllowedLootPoolItemClasses();                                                                         // [0x80e3de4] Native|Public|Const  
};

/// Class /Script/ItemizationCoreRuntime.ItemizationLootPoolProcessor
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemizationLootPoolProcessor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemizationLootWeightCalculator
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemizationLootWeightCalculator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemizationLootWeightCalculator_Value
/// Size: 0x0028 (0x000028 - 0x000050)
class UItemizationLootWeightCalculator_Value : public UItemizationLootWeightCalculator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FScalableFloat)                            Value                                                       OFFSET(getStruct<T>, {0x28, 40, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemizationLootWeightCalculator_Range
/// Size: 0x0050 (0x000028 - 0x000078)
class UItemizationLootWeightCalculator_Range : public UItemizationLootWeightCalculator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FScalableFloat)                            Min                                                         OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            Max                                                         OFFSET(getStruct<T>, {0x50, 40, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemizationPersistenceManagerBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemizationPersistenceManagerBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemizationWorldSubsystem
/// Size: 0x00A8 (0x000030 - 0x0000D8)
class UItemizationWorldSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(class UItemizationPersistenceManagerBase*) ItemizationPersistenceManager                               OFFSET(get<T>, {0xD0, 8, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemizationWorldSubsystem.OnInventoryComponentDestroyed
	// void OnInventoryComponentDestroyed(class UInventoryComponent* InventoryComponent);                                       // [0x8108a64] Final|Native|Protected 
};

/// Class /Script/ItemizationCoreRuntime.ItemRarity
/// Size: 0x0048 (0x000030 - 0x000078)
class UItemRarity : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FText)                                     Name                                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	DMember(float)                                     Tier                                                        OFFSET(get<float>, {0x60, 4, 0, 0})
	SMember(FVerseGameplayTagContainer)                Tags                                                        OFFSET(getStruct<T>, {0x68, 16, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemRarity.GetTier
	// float GetTier();                                                                                                         // [0x7f01184] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemRarity.GetName
	// FText GetName();                                                                                                         // [0x7825124] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemRarity.GetDescription
	// FText GetDescription();                                                                                                  // [0x8108a20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemRarity.GetColor
	// FLinearColor GetColor();                                                                                                 // [0x8108a08] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemRarityTable
/// Size: 0x0030 (0x000030 - 0x000060)
class UItemRarityTable : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FText)                                     RarityTableName                                             OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FText)                                     RarityTableDescription                                      OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(TArray<FVkRarityEntry>)                    RarityList                                                  OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemRequirements
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UItemRequirements : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FText)                                     Name                                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(TSet<UItemType*>)                          ItemTypes                                                   OFFSET(get<T>, {0x50, 80, 0, 0})
	SMember(FItemTagContainer)                         TagContainer                                                OFFSET(getStruct<T>, {0xA0, 48, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemType
/// Size: 0x0038 (0x000030 - 0x000068)
class UItemType : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FText)                                     Name                                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(class UItemType*)                          ParentType                                                  OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FVerseGameplayTagContainer)                Tags                                                        OFFSET(getStruct<T>, {0x58, 16, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemType.GetParentType
	// class UItemType* GetParentType();                                                                                        // [0x77d1794] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemType.GetName
	// FText GetName();                                                                                                         // [0x7825124] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemType.GetDescription
	// FText GetDescription();                                                                                                  // [0x8108a20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemVariant
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
class UItemVariant : public UItemDefinitionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(class UItemDefinitionBase*)                Original                                                    OFFSET(get<T>, {0xD0, 8, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.InventoryComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UInventoryComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FMulticastInlineDelegate)                  OnInventoryComponentDestroyed                               OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	CMember(class UClass*)                             InventoryCollectionClass                                    OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TWeakObjectPtr<UInventorySetupData*>)      InventorySetupData                                          OFFSET(get<T>, {0xB8, 32, 0, 0})
	CMember(TWeakObjectPtr<AInventoryCollection*>)     InventoryCollection                                         OFFSET(get<T>, {0xD8, 8, 0, 0})
	SMember(FGuid)                                     InventoryCollectionID                                       OFFSET(getStruct<T>, {0xE0, 16, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.UseItem
	// void UseItem(FGuid& ItemId, FGuid AdditionalItemID);                                                                     // [0x8108cc4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.SetEquippableItemActive
	// void SetEquippableItemActive(FGuid& ItemEntryID, bool bActive);                                                          // [0x8108b4c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.OnRep_InventoryCollection
	// void OnRep_InventoryCollection();                                                                                        // [0x8108ae4] Final|Native|Private 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.GetInventoryCollection
	// class AInventoryCollection* GetInventoryCollection();                                                                    // [0x8108a3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.DropItem
	// void DropItem(FGuid& ItemEntryID);                                                                                       // [0x810894c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.AddOrResetInventory
	// void AddOrResetInventory(class UInventoryDefinition* NewInventoryDefinition);                                            // [0x656aec4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.AddItem
	// void AddItem(class UItemDefinitionBase* ItemDefinition, int64_t Amount);                                                 // [0x81088a8] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/ItemizationCoreRuntime.EquipItemFilter
/// Size: 0x0018 (0x000000 - 0x000018)
class FEquipItemFilter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bAppliesToAllItems                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr<UItemDefinitionBase*>>) ItemDefinitions                                          OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.EquipItemRestriction
/// Size: 0x0010 (0x000018 - 0x000028)
class FEquipItemRestriction : public FEquipItemFilter
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int64_t)                                   ActiveLimit                                                 OFFSET(get<int64_t>, {0x18, 8, 0, 0})
	CMember(EEquipItemLimitHitBehaviour)               LimitHitBehaviour                                           OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.EquipItemCondition
/// Size: 0x0000 (0x000018 - 0x000018)
class FEquipItemCondition : public FEquipItemFilter
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ItemizationCoreRuntime.ItemAggregatedData
/// Size: 0x0070 (0x000000 - 0x000070)
class FItemAggregatedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/ItemizationCoreRuntime.InventoryStartingItem
/// Size: 0x0028 (0x000000 - 0x000028)
class FInventoryStartingItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UItemDefinitionBase*>)      ItemDefinition                                              OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(int64_t)                                   Amount                                                      OFFSET(get<int64_t>, {0x20, 8, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemComponentData
/// Size: 0x0001 (0x000000 - 0x000001)
class FItemComponentData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/ItemizationCoreRuntime.ItemComponentDataList
/// Size: 0x0108 (0x000000 - 0x000108)
class FItemComponentDataList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(TArray<FInstancedStruct>)                  DataList                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemEntryStorageMap
/// Size: 0x0050 (0x000000 - 0x000050)
class FItemEntryStorageMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FGuid, UItemComponentLocalStorage*>)  ItemToStorageMap                                            OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemAbilityBinding
/// Size: 0x0050 (0x000000 - 0x000050)
class FItemAbilityBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TWeakObjectPtr<UItemInputAction*>)         InputAction                                                 OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(EItemStateFilter)                          ActiveState                                                 OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(TArray<class UItemAbilityCost*>)           Costs                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<class UItemAbilityCooldown*>)       Cooldowns                                                   OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(class UItemAbilityConfigurationAsset*)     ability                                                     OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemAbilityCooldownState
/// Size: 0x0018 (0x000000 - 0x000018)
class FItemAbilityCooldownState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bIsActive                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Progress                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     PredictedTimeLeft                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     PredictedProgressPerSecond                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(double)                                    TimeLastUpdated                                             OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemAbilityRuntimeData
/// Size: 0x0040 (0x000000 - 0x000040)
class FItemAbilityRuntimeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayAbilitySpecHandle)                AbilityHandle                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FItemAbilityCooldownState)                 CooldownState                                               OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemComponentData_WasLoadedFromSave
/// Size: 0x0001 (0x000000 - 0x000001)
class FItemComponentData_WasLoadedFromSave : public FItemComponentData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bWasLoadedFromSave                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemComponentData_StackSize
/// Size: 0x0008 (0x000000 - 0x000008)
class FItemComponentData_StackSize : public FItemComponentData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int64_t)                                   StackSize                                                   OFFSET(get<int64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemComponentData_Stackable
/// Size: 0x0010 (0x000000 - 0x000010)
class FItemComponentData_Stackable : public FItemComponentData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   MaxStackSize                                                OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(bool)                                      bAllowMultipleStacks                                        OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemComponentContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FItemComponentContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UItemComponentBase*>)         Components                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemEntry
/// Size: 0x0134 (0x00000C - 0x000140)
class FItemEntry : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(class UItemDefinitionBase*)                ItemDefinition                                              OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FGuid)                                     ItemEntryID                                                 OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(int32_t)                                   SlotNumber                                                  OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	SMember(FItemComponentDataList)                    ItemData                                                    OFFSET(getStruct<T>, {0x30, 264, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemEntryList
/// Size: 0x0200 (0x000108 - 0x000308)
class FItemEntryList : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(TArray<FItemEntry>)                        ItemList                                                    OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemInstanceClassEntry
/// Size: 0x0010 (0x000000 - 0x000010)
class FItemInstanceClassEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UClass*)                             Class                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemInstanceClassOverride
/// Size: 0x0018 (0x000000 - 0x000018)
class FItemInstanceClassOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FItemInstanceClassEntry>)           SortedOverrideList                                          OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemizationLootEntry
/// Size: 0x0008 (0x000000 - 0x000008)
class FItemizationLootEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UObject*)                            Item                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemizationLootEntry_Guaranteed
/// Size: 0x0008 (0x000008 - 0x000010)
class FItemizationLootEntry_Guaranteed : public FItemizationLootEntry
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UItemizationLootCountCalculator*)    Count                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemizationLootEntry_Chance
/// Size: 0x0038 (0x000008 - 0x000040)
class FItemizationLootEntry_Chance : public FItemizationLootEntry
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UItemizationLootCountCalculator*)    Count                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UItemizationLootWeightCalculator*)   Weight                                                      OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FScalableFloat)                            MaxSelectCount                                              OFFSET(getStruct<T>, {0x18, 40, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemComponentData_Rarity
/// Size: 0x0004 (0x000000 - 0x000004)
class FItemComponentData_Rarity : public FItemComponentData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.VkRarityEntry
/// Size: 0x0030 (0x000000 - 0x000030)
class FVkRarityEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FText)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemTagContainer
/// Size: 0x0030 (0x000000 - 0x000030)
class FItemTagContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVerseGameplayTagContainer)                RequiredTags                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVerseGameplayTagContainer)                ForbiddenTags                                               OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVerseGameplayTagContainer)                AnyTags                                                     OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Enum /Script/ItemizationCoreRuntime.EInventoryCollectionLoadState
/// Size: 0x12
enum class EInventoryCollectionLoadState : uint8_t
{
	EInventoryCollectionLoadState__Invalid                                           = 0,
	EInventoryCollectionLoadState__Initializing                                      = 1,
	EInventoryCollectionLoadState__WaitingToLoad                                     = 10,
	EInventoryCollectionLoadState__Loading                                           = 11,
	EInventoryCollectionLoadState__Loaded                                            = 12,
	EInventoryCollectionLoadState__WaitingToUnload                                   = 20,
	EInventoryCollectionLoadState__Unloading                                         = 21,
	EInventoryCollectionLoadState__Unloaded                                          = 22,
	EInventoryCollectionLoadState__WaitingToClear                                    = 30,
	EInventoryCollectionLoadState__Clearing                                          = 31,
	EInventoryCollectionLoadState__Cleared                                           = 32,
	EInventoryCollectionLoadState__Ready                                             = 255
};

/// Enum /Script/ItemizationCoreRuntime.EEquipItemLimitHitBehaviour
/// Size: 0x02
enum class EEquipItemLimitHitBehaviour : uint8_t
{
	EEquipItemLimitHitBehaviour__UnequipLeastRecentlyUsed                            = 0,
	EEquipItemLimitHitBehaviour__Block                                               = 1
};

/// Enum /Script/ItemizationCoreRuntime.EVkInventoryMoveResult
/// Size: 0x04
enum class EVkInventoryMoveResult : uint8_t
{
	EVkInventoryMoveResult__Success                                                  = 0,
	EVkInventoryMoveResult__Failed                                                   = 1,
	EVkInventoryMoveResult__InvalidRequest                                           = 2,
	EVkInventoryMoveResult__NoChange                                                 = 3
};

/// Enum /Script/ItemizationCoreRuntime.EVkInventoryMoveBehaviour
/// Size: 0x02
enum class EVkInventoryMoveBehaviour : uint8_t
{
	EVkInventoryMoveBehaviour__SwapSlotNumber                                        = 0,
	EVkInventoryMoveBehaviour__EmplaceSlotNumber                                     = 1
};

/// Enum /Script/ItemizationCoreRuntime.EInventoryCollectionType
/// Size: 0x02
enum class EInventoryCollectionType : uint8_t
{
	EInventoryCollectionType__Player                                                 = 0,
	EInventoryCollectionType__World                                                  = 1
};

/// Enum /Script/ItemizationCoreRuntime.EItemizationInventoryCreationType
/// Size: 0x03
enum class EItemizationInventoryCreationType : uint8_t
{
	EItemizationInventoryCreationType__Runtime                                       = 0,
	EItemizationInventoryCreationType__SetupData                                     = 1,
	EItemizationInventoryCreationType__Invalid                                       = 255
};

/// Enum /Script/ItemizationCoreRuntime.EInventoryCollectionAccess
/// Size: 0x04
enum class EInventoryCollectionAccess : uint8_t
{
	EInventoryCollectionAccess__None                                                 = 0,
	EInventoryCollectionAccess__Read                                                 = 1,
	EInventoryCollectionAccess__Write                                                = 2,
	EInventoryCollectionAccess__All                                                  = 3
};

/// Enum /Script/ItemizationCoreRuntime.EItemState
/// Size: 0x04
enum class EItemState : uint8_t
{
	EItemState__NotInInventory                                                       = 0,
	EItemState__InInventory                                                          = 1,
	EItemState__EquippedAndActive                                                    = 2,
	EItemState__NumStates                                                            = 3
};

/// Enum /Script/ItemizationCoreRuntime.EItemStateFilter
/// Size: 0x03
enum class EItemStateFilter : uint8_t
{
	EItemStateFilter__Owned                                                          = 0,
	EItemStateFilter__Equipped                                                       = 1,
	EItemStateFilter__EquippedAndActive                                              = 2
};

/// Enum /Script/ItemizationCoreRuntime.EItemizationPersistenceRequestType
/// Size: 0x05
enum class EItemizationPersistenceRequestType : uint8_t
{
	EItemizationPersistenceRequestType__Invalid                                      = 0,
	EItemizationPersistenceRequestType__Checkout                                     = 1,
	EItemizationPersistenceRequestType__CheckIn                                      = 2,
	EItemizationPersistenceRequestType__Clear                                        = 3,
	EItemizationPersistenceRequestType__Update                                       = 4
};

/// Enum /Script/ItemizationCoreRuntime.EItemizationPersistenceResponseType
/// Size: 0x04
enum class EItemizationPersistenceResponseType : uint8_t
{
	EItemizationPersistenceResponseType__Invalid                                     = 0,
	EItemizationPersistenceResponseType__NoPersistenceManager                        = 1,
	EItemizationPersistenceResponseType__Failed                                      = 2,
	EItemizationPersistenceResponseType__Success                                     = 255
};

