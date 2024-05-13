
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: GameSubCatalog
/// dependency: SocialUMG
/// dependency: UMG

/// Class /Script/GiftingUI.AthenaGiftConfirmedPanel
/// Size: 0x0030 (0x000408 - 0x000438)
class UAthenaGiftConfirmedPanel : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	CMember(class URichTextBlock*)                     Text_RecipientInfo                                          OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Back                                                 OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_CloseTouch                                           OFFSET(get<T>, {0x430, 8, 0, 0})
};

/// Class /Script/GiftingUI.AthenaGiftingConfirmationScreen
/// Size: 0x0150 (0x000408 - 0x000558)
class UAthenaGiftingConfirmationScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1368;

public:
	CMember(class UFortStoreFrontOfferInfo*)           PresentedGiftableOfferInfo                                  OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UFortStoreFrontOfferInfo*)           PresentedOptionalTokenOfferInfo                             OFFSET(get<T>, {0x440, 8, 0, 0})
	DMember(float)                                     MinGiftSubmissionDelay                                      OFFSET(get<float>, {0x4FC, 4, 0, 0})
	DMember(float)                                     MaxGiftSubmissionDelay                                      OFFSET(get<float>, {0x500, 4, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_WrapOptions                                          OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Back                                                 OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_CloseTouch                                           OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_MtxWallet                                            OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(class UAthenaGiftingPurchasePanel*)        Panel_GiftingPurchase                                       OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(class UAthenaGiftingWrapOptionsPanel*)     Panel_WrapOptions                                           OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(class UAthenaGiftConfirmedPanel*)          Panel_GiftConfirmed                                         OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(class UAthenaGiftingErrorsPanel*)          Panel_GiftingErrors                                         OFFSET(get<T>, {0x550, 8, 0, 0})


	/// Functions
	// Function /Script/GiftingUI.AthenaGiftingConfirmationScreen.OnPresentationModeChanged
	// void OnPresentationModeChanged(EGiftingPresentationMode NewMode);                                                        // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingConfirmationScreen.HandleTokenOfferPurchaseComplete
	// void HandleTokenOfferPurchaseComplete(bool bSuccess, TArray<FPurchasedItemInfo>& PurchasedItems);                        // [0xbcdb494] Final|Native|Private|HasOutParms 
	// Function /Script/GiftingUI.AthenaGiftingConfirmationScreen.HandleGiftSent
	// void HandleGiftSent(bool bSuccess, TArray<FString>& IneligibleAccounts, TArray<FString>& ErrorCodes);                    // [0xbcdb130] Final|Native|Private|HasOutParms 
	// Function /Script/GiftingUI.AthenaGiftingConfirmationScreen.Dismiss
	// void Dismiss(bool bGiftConfirmed);                                                                                       // [0xbcdb094] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/GiftingUI.AthenaGiftingErrorsPanel
/// Size: 0x0060 (0x000408 - 0x000468)
class UAthenaGiftingErrorsPanel : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:
	CMember(class URichTextBlock*)                     Text_RecipientInfo                                          OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class URichTextBlock*)                     Text_Title                                                  OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_CloseTouch                                           OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Back                                                 OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Continue                                             OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(class UTileView*)                          TileView_Items                                              OFFSET(get<T>, {0x460, 8, 0, 0})


	/// Functions
	// Function /Script/GiftingUI.AthenaGiftingErrorsPanel.UpdateGiftEligibility
	// void UpdateGiftEligibility(bool bStillGiftable);                                                                         // [0x20c3f9c] Event|Protected|BlueprintEvent 
};

/// Class /Script/GiftingUI.AthenaGiftingPriceWidget
/// Size: 0x0020 (0x0002F0 - 0x000310)
class UAthenaGiftingPriceWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(class UCommonTextBlock*)                   Text_RealMoneyPrice                                         OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_FinalPrice                                             OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_RegularPrice                                           OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UWidget*)                            Overlay_SalePrice                                           OFFSET(get<T>, {0x308, 8, 0, 0})


	/// Functions
	// Function /Script/GiftingUI.AthenaGiftingPriceWidget.SetPresentationMode
	// void SetPresentationMode(EGiftingPricePresentationMode Mode);                                                            // [0x20c3f9c] Event|Protected|BlueprintEvent 
};

/// Class /Script/GiftingUI.AthenaGiftingPurchaseButton
/// Size: 0x0018 (0x001538 - 0x001550)
class UAthenaGiftingPurchaseButton : public UFortHoldableButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5456;

public:
	CMember(class UAthenaGiftingPriceWidget*)          Widget_Price                                                OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Title                                                  OFFSET(get<T>, {0x1540, 8, 0, 0})
};

/// Class /Script/GiftingUI.AthenaGiftingPurchasePanel
/// Size: 0x0048 (0x000408 - 0x000450)
class UAthenaGiftingPurchasePanel : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	CMember(class UAthenaGiftingPurchaseButton*)       Button_PurchaseGift                                         OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UFortSocialAvatarIcon*)              Avatar_MemberIcon                                           OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_SocialNameInfo                                         OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ItemsCount                                             OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_OfferName                                              OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UTileView*)                          TileView_Items                                              OFFSET(get<T>, {0x448, 8, 0, 0})


	/// Functions
	// Function /Script/GiftingUI.AthenaGiftingPurchasePanel.PlayIntroAnimation
	// void PlayIntroAnimation();                                                                                               // [0x20c3f9c] Event|Public|BlueprintEvent 
};

/// Class /Script/GiftingUI.AthenaGiftingScreen
/// Size: 0x01D8 (0x000730 - 0x000908)
class UAthenaGiftingScreen : public UFortItemPreviewScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2312;

public:
	CMember(class UFortGiftingUserSearchWidget*)       SearchWidget_SocialSearchWidget                             OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(class UFortGiftingSocialUserListView*)     ListView_Recipients                                         OFFSET(get<T>, {0x740, 8, 0, 0})
	CMember(class UTileView*)                          TileView_Items                                              OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Back                                                 OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_CloseTouch                                           OFFSET(get<T>, {0x758, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_GiftingPolicy                                        OFFSET(get<T>, {0x760, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_CameraControl                                        OFFSET(get<T>, {0x768, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_OfferName                                              OFFSET(get<T>, {0x770, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_VBucksOffCount                                         OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ShownItemIndex                                         OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(class UCommonRichTextBlock*)               Text_NoContent                                              OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(class UCommonRichTextBlock*)               RichText_OfferItemOwnedCount                                OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(class UOverlay*)                           Container_VBucksOffViolator                                 OFFSET(get<T>, {0x798, 8, 0, 0})
	CMember(class UCommonRichTextBlock*)               RichText_GiftCount                                          OFFSET(get<T>, {0x7A0, 8, 0, 0})
	CMember(class UAthenaGiftingPriceWidget*)          Widget_Price                                                OFFSET(get<T>, {0x7A8, 8, 0, 0})
	CMember(class UAthenaLockerItemInfo*)              Widget_ItemInfo                                             OFFSET(get<T>, {0x7B0, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   EntryBox_FilterTabs                                         OFFSET(get<T>, {0x7B8, 8, 0, 0})
	CMember(class UCommonActionWidget*)                ActionWidget_FilterTabsPrevious                             OFFSET(get<T>, {0x7C0, 8, 0, 0})
	CMember(class UCommonActionWidget*)                ActionWidget_FilterTabsNext                                 OFFSET(get<T>, {0x7C8, 8, 0, 0})
	CMember(class UAthenaGiftingConfirmationScreen*)   ActivatableWidget_GiftingConfirmation                       OFFSET(get<T>, {0x7D0, 8, 0, 0})
	DMember(float)                                     ItemCyclingInterval                                         OFFSET(get<float>, {0x7D8, 4, 0, 0})
	SMember(FDataTableRowHandle)                       FilterTabsPreviousAction                                    OFFSET(getStruct<T>, {0x7E0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       FilterTabsNextAction                                        OFFSET(getStruct<T>, {0x7F0, 16, 0, 0})
	SMember(FText)                                     RegularGiftingPolicy                                        OFFSET(getStruct<T>, {0x800, 16, 0, 0})
	SMember(FText)                                     BattlePassGiftingPolicy                                     OFFSET(getStruct<T>, {0x810, 16, 0, 0})
	CMember(TMap<UCommonButtonBase*, EFilterType>)     FilterMap                                                   OFFSET(get<T>, {0x880, 80, 0, 0})
	CMember(class UCommonButtonGroupBase*)             FilterGroup                                                 OFFSET(get<T>, {0x8D0, 8, 0, 0})
	CMember(TArray<class UFortItemVM*>)                GiftableItems                                               OFFSET(get<T>, {0x8D8, 16, 0, 0})
	CMember(class UFortItemDefinition*)                PresentedItemDefinition                                     OFFSET(get<T>, {0x8E8, 8, 0, 0})
	CMember(class UFortStoreFrontOfferInfo*)           GiftableOfferInfo                                           OFFSET(get<T>, {0x8F0, 8, 0, 0})
	CMember(class UFortStoreFrontOfferInfo*)           OptionalTokenOfferInfo                                      OFFSET(get<T>, {0x8F8, 8, 0, 0})


	/// Functions
	// Function /Script/GiftingUI.AthenaGiftingScreen.OnShowSearchWarningText
	// void OnShowSearchWarningText(bool bShow);                                                                                // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingScreen.OnShownItemChanged
	// void OnShownItemChanged();                                                                                               // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingScreen.OnSetupFilterTabButton
	// void OnSetupFilterTabButton(class UCommonButtonBase* Button, EFilterType FilterType);                                    // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingScreen.OnPresentationModeChanged
	// void OnPresentationModeChanged(EGiftingScreenPresentationMode Mode);                                                     // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingScreen.OnPartyListUpdated
	// void OnPartyListUpdated(bool bEmpty);                                                                                    // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingScreen.OnHandlePreviewItem
	// void OnHandlePreviewItem(bool bUseWidePreview);                                                                          // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingScreen.OnFriendSelectionChanged
	// void OnFriendSelectionChanged();                                                                                         // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingScreen.OnFilterChanged
	// void OnFilterChanged(EFilterType FilterType);                                                                            // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingScreen.BlockScreenContent
	// void BlockScreenContent(bool bBlockScreen, FText& ContentBlockedText);                                                   // [0x20c3f9c] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/GiftingUI.AthenaGiftingWrapOptionsPanel
/// Size: 0x0068 (0x000408 - 0x000470)
class UAthenaGiftingWrapOptionsPanel : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	CMember(TArray<TWeakObjectPtr<UFortGiftBoxItemDefinition*>>) GiftBoxes                                         OFFSET(get<T>, {0x430, 16, 0, 0})
	CMember(TArray<class UFortGiftBoxItemDefinition*>) GiftBoxItemDefs                                             OFFSET(get<T>, {0x440, 16, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_ConfirmWrap                                          OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(class UTileView*)                          TileView_WrapOptions                                        OFFSET(get<T>, {0x468, 8, 0, 0})
};

/// Class /Script/GiftingUI.FortGiftingSocialUserListEntry
/// Size: 0x00E8 (0x001508 - 0x0015F0)
class UFortGiftingSocialUserListEntry : public USocialListEntryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5616;

public:
	CMember(class UFortSocialAvatarIcon*)              Avatar_MemberIcon                                           OFFSET(get<T>, {0x15C0, 8, 0, 0})
	CMember(class USocialNameTextBlock*)               Text_SocialName                                             OFFSET(get<T>, {0x15C8, 8, 0, 0})
	CMember(class UCommonRichTextBlock*)               RichText_EligibilityStatus                                  OFFSET(get<T>, {0x15D0, 8, 0, 0})
	CMember(class UCommonRichTextBlock*)               RichText_OwnedItems                                         OFFSET(get<T>, {0x15D8, 8, 0, 0})
	CMember(class UAthenaGiftingPriceWidget*)          Widget_Price                                                OFFSET(get<T>, {0x15E0, 8, 0, 0})


	/// Functions
	// Function /Script/GiftingUI.FortGiftingSocialUserListEntry.SetPresentationMode
	// void SetPresentationMode(ERecipientPresentationMode Mode);                                                               // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.FortGiftingSocialUserListEntry.OnUserItemSet
	// void OnUserItemSet();                                                                                                    // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.FortGiftingSocialUserListEntry.OnRecipientStatusUpdated
	// void OnRecipientStatusUpdated();                                                                                         // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.FortGiftingSocialUserListEntry.BP_OnTouchSelectionConfirmed
	// void BP_OnTouchSelectionConfirmed();                                                                                     // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.FortGiftingSocialUserListEntry.BP_OnHighlightedStateChanged
	// void BP_OnHighlightedStateChanged(bool bInIsHighlighted, bool bPlayAnimation);                                           // [0x20c3f9c] Event|Protected|BlueprintEvent 
};

/// Class /Script/GiftingUI.FortGiftingSocialUserListView
/// Size: 0x00F8 (0x0003A0 - 0x000498)
class UFortGiftingSocialUserListView : public USocialUserListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1176;

public:
	DMember(float)                                     RefreshRecipientStatusDelay                                 OFFSET(get<float>, {0x3A0, 4, 0, 0})
};

/// Class /Script/GiftingUI.FortGiftingUserSearchWidget
/// Size: 0x0048 (0x0002F0 - 0x000338)
class UFortGiftingUserSearchWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(class UEditableText*)                      EditableText_SearchFriends                                  OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ClearQuery                                           OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_SubmitQuery                                          OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/GiftingUI.FortGiftingUserSearchWidget.OnSearchCommit
	// void OnSearchCommit(bool bSearchStringShort);                                                                            // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.FortGiftingUserSearchWidget.HandleSearchFriendsTextEntered
	// void HandleSearchFriendsTextEntered(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);                                 // [0xbcdb308] Final|Native|Private|HasOutParms 
	// Function /Script/GiftingUI.FortGiftingUserSearchWidget.HandleSearchFriendsTextChanged
	// void HandleSearchFriendsTextChanged(FText& Text);                                                                        // [0xbcdb27c] Final|Native|Private|HasOutParms 
	// Function /Script/GiftingUI.FortGiftingUserSearchWidget.FocusEditableText
	// void FocusEditableText();                                                                                                // [0xbcdb114] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/GiftingUI.FortGiftingWrapOptionListEntry
/// Size: 0x0020 (0x0014F0 - 0x001510)
class UFortGiftingWrapOptionListEntry : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5392;

public:
	CMember(class UFortGiftBoxItemDefinition*)         GiftBoxDefinition                                           OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(class UCommonLazyImage*)                   Image_Gift                                                  OFFSET(get<T>, {0x1500, 8, 0, 0})
};

/// Class /Script/GiftingUI.FortGiftingData
/// Size: 0x0020 (0x000540 - 0x000560)
class UFortGiftingData : public UFortGameFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	CMember(TWeakObjectPtr<UClass*>)                   GiftingScreenClass                                          OFFSET(get<T>, {0x540, 32, 0, 0})
};

/// Struct /Script/GiftingUI.FortGiftingRecipientState
/// Size: 0x0080 (0x000000 - 0x000080)
class FFortGiftingRecipientState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FCatalogItemPrice)                         Price                                                       OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	CMember(TArray<FItemQuantity>)                     Items                                                       OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Enum /Script/GiftingUI.EGiftingPresentationMode
/// Size: 0x06
enum class EGiftingPresentationMode : uint8_t
{
	EGiftingPresentationMode__ConfirmPurchase                                        = 0,
	EGiftingPresentationMode__WrapOptions                                            = 1,
	EGiftingPresentationMode__GiftingProcess                                         = 2,
	EGiftingPresentationMode__GiftingError                                           = 3,
	EGiftingPresentationMode__GiftConfirmed                                          = 4,
	EGiftingPresentationMode__None                                                   = 5
};

/// Enum /Script/GiftingUI.EGiftingPricePresentationMode
/// Size: 0x03
enum class EGiftingPricePresentationMode : uint8_t
{
	EGiftingPricePresentationMode__MtxCurrency                                       = 0,
	EGiftingPricePresentationMode__RealMoney                                         = 1,
	EGiftingPricePresentationMode__Hidden                                            = 2
};

/// Enum /Script/GiftingUI.EFilterType
/// Size: 0x02
enum class EFilterType : uint8_t
{
	EFilterType__All                                                                 = 0,
	EFilterType__Party                                                               = 1
};

/// Enum /Script/GiftingUI.EGiftingScreenPresentationMode
/// Size: 0x02
enum class EGiftingScreenPresentationMode : uint8_t
{
	EGiftingScreenPresentationMode__ItemList                                         = 0,
	EGiftingScreenPresentationMode__NoContent                                        = 1
};

/// Enum /Script/GiftingUI.ERecipientPresentationMode
/// Size: 0x04
enum class ERecipientPresentationMode : uint8_t
{
	ERecipientPresentationMode__Loading                                              = 0,
	ERecipientPresentationMode__GiftPrice                                            = 1,
	ERecipientPresentationMode__AlreadyOwned                                         = 2,
	ERecipientPresentationMode__Unavailable                                          = 3
};

