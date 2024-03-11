
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: LocalizableMessage
/// dependency: ModelViewViewModel
/// dependency: UIFramework
/// dependency: UMG
/// dependency: VerseFortnite

/// Class /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseFortniteUIAllowedConversionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.MultiplyIntegers
	// int64_t MultiplyIntegers(int64_t A, int64_t B, bool bInvertB);                                                           // [0xba2e9e0] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.MultiplyIntDouble
	// double MultiplyIntDouble(int64_t A, bool bInvertA, double B, bool bInvertB);                                             // [0xba2e858] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.MultiplyDoubles
	// double MultiplyDoubles(double A, bool bInvertA, double B, bool bInvertB);                                                // [0xba2e708] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.MakeTransform
	// FWidgetTransform MakeTransform(FVector2D Translation, FVector2D Scale, FVector2D Shear, double Angle);                   // [0xba2e32c] Final|Native|Static|Private|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.MakeImageBrushFromTexture
	// FSlateBrush MakeImageBrushFromTexture(class UTexture2D* Image, FVector2D ImageSize, FLinearColor LinearColor, TEnumAsByte<ESlateBrushTileType> TileType); // [0xba2dfc0] Final|Native|Static|Private|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.MakeImageBrushFromMaterial
	// FSlateBrush MakeImageBrushFromMaterial(class UMaterialInterface* Material, FVector2D ImageSize, FLinearColor TintColor); // [0xba2dd3c] Final|Native|Static|Private|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.InvertBool
	// bool InvertBool(bool bValue);                                                                                            // [0xba2dcc0] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_SlateColorToLinearColor
	// FLinearColor Conv_SlateColorToLinearColor(FSlateColor& Value);                                                           // [0xba2d970] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_LinearColorToSlateColor
	// FSlateColor Conv_LinearColorToSlateColor(FLinearColor Value);                                                            // [0xba2d848] Final|Native|Static|Private|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_IntToText
	// FText Conv_IntToText(int64_t Value, bool bAlwaysSign, bool bUseGrouping, int64_t MinimumIntegralDigits, int64_t MaximumIntegralDigits); // [0xba2d520] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_IntegerToBoolSimple
	// bool Conv_IntegerToBoolSimple(int64_t Value);                                                                            // [0xba2d7d4] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_IntegerToBoolInterval
	// bool Conv_IntegerToBoolInterval(int64_t Value, int64_t InclusiveLowerBound, int64_t InclusiveUpperBound);                // [0xba2d6d8] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_DoubleToText
	// FText Conv_DoubleToText(double Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits); // [0xba2d298] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_DoubleToBoolSimple
	// bool Conv_DoubleToBoolSimple(double Value);                                                                              // [0xba2d204] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_DoubleToBoolInterval
	// bool Conv_DoubleToBoolInterval(double Value, double InclusiveLowerBound, double InclusiveUpperBound);                    // [0xba2d0f0] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_BoolToSlateVisibility
	// ESlateVisibility Conv_BoolToSlateVisibility(bool bIsVisible, ESlateVisibility TrueVisibility, ESlateVisibility FalseVisibility); // [0x37f79e0] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.AddIntegers
	// int64_t AddIntegers(int64_t A, bool bNegateA, int64_t B, bool bNegateB);                                                 // [0xba2cfa8] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.AddIntDouble
	// double AddIntDouble(int64_t A, bool bNegateA, double B, bool bNegateB);                                                  // [0xba2ce50] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.AddDoubles
	// double AddDoubles(double A, bool bNegateA, double B, bool bNegateB);                                                     // [0xba2cce4] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIConversionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseFortniteUIConversionLibrary : public UVerseFortniteUIAllowedConversionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortnitePlayspaceHUDController
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UVerseFortnitePlayspaceHUDController : public UVerseFortnitePlayspaceExtensionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FHUDElementVisibilityRepData)              VisibilityData                                              OFFSET(getStruct<T>, {0x38, 136, 0, 0})
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIOverlaySlot
/// Size: 0x0018 (0x000058 - 0x000070)
class UVerseFortniteUIOverlaySlot : public UOverlaySlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIOverlay
/// Size: 0x0018 (0x0001A0 - 0x0001B8)
class UVerseFortniteUIOverlay : public UOverlay
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUINamedSlot
/// Size: 0x0010 (0x0001A0 - 0x0001B0)
class UVerseFortniteUINamedSlot : public UNamedSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIActivableWidgetBase
/// Size: 0x0030 (0x000400 - 0x000430)
class UVerseFortniteUIActivableWidgetBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	CMember(class UVerseFortniteUINamedSlot*)          MainSlot                                                    OFFSET(get<T>, {0x400, 8, 0, 0})
	SMember(FDataTableRowHandle)                       MainMenuInputRowHandle                                      OFFSET(getStruct<T>, {0x410, 16, 0, 0})
	CMember(TArray<FGameplayTagContainer>)             HudToDeactivateOnInitialization                             OFFSET(get<T>, {0x420, 16, 0, 0})
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIPresenter
/// Size: 0x0088 (0x000038 - 0x0000C0)
class UVerseFortniteUIPresenter : public UUIFrameworkGameViewportPresenter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FVerseFortniteUIPresenterElement>)  Pending                                                     OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FVerseFortniteUIPresenterElement>)  Created                                                     OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(class UVerseFortniteUIOverlay*)            PlayerGameViewport                                          OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UVerseFortniteUIOverlay*)            ContentGameViewport                                         OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(class UVerseFortniteUIActivableWidgetBase*) PopupContainer                                             OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   WidgetForDynamicUI                                          OFFSET(get<T>, {0x78, 32, 0, 0})
	CMember(TWeakObjectPtr<UCommonInputActionDomain*>) ActionDomainForDynamicUI                                    OFFSET(get<T>, {0x98, 32, 0, 0})
};

/// Class /Script/VerseFortniteUI.VerseFortniteWidgetViewmodel
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseFortniteWidgetViewmodel : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Base
/// Size: 0x0060 (0x0000C8 - 0x000128)
class UVerseFortniteUIFrameworkButton_Base : public UUIFrameworkWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0xC8, 24, 0, 0})
	SMember(FLocalizableMessage)                       Message                                                     OFFSET(getStruct<T>, {0xE0, 48, 0, 0})


	/// Functions
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.ServerClick
	// void ServerClick(class APlayerController* PlayerController);                                                             // [0x66f6008] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.OnRep_Message
	// void OnRep_Message();                                                                                                    // [0xba2eb14] Final|Native|Private 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.GetText
	// FText GetText();                                                                                                         // [0x76f7878] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Loud
/// Size: 0x0000 (0x000128 - 0x000128)
class UVerseFortniteUIFrameworkButton_Loud : public UVerseFortniteUIFrameworkButton_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Regular
/// Size: 0x0000 (0x000128 - 0x000128)
class UVerseFortniteUIFrameworkButton_Regular : public UVerseFortniteUIFrameworkButton_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Quiet
/// Size: 0x0000 (0x000128 - 0x000128)
class UVerseFortniteUIFrameworkButton_Quiet : public UVerseFortniteUIFrameworkButton_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkText_Base
/// Size: 0x0018 (0x000128 - 0x000140)
class UVerseFortniteUIFrameworkText_Base : public UUIFrameworkTextBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:


	/// Functions
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkText_Base.ServerTextCommitted
	// void ServerTextCommitted(class APlayerController* PlayerController, FText NewText);                                      // [0xba2ec1c] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkText_Base.ExecuteServerTextCommitted
	// void ExecuteServerTextCommitted(FText& InText, TEnumAsByte<ETextCommit> InCommitMethod);                                 // [0xba2da1c] Final|Native|Public|HasOutParms 
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkTextBlock
/// Size: 0x0000 (0x000140 - 0x000140)
class UVerseFortniteUIFrameworkTextBlock : public UUIFrameworkTextBlock
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkEditableText
/// Size: 0x0000 (0x000140 - 0x000140)
class UVerseFortniteUIFrameworkEditableText : public UVerseFortniteUIFrameworkText_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkEditableTextBox
/// Size: 0x0000 (0x000140 - 0x000140)
class UVerseFortniteUIFrameworkEditableTextBox : public UVerseFortniteUIFrameworkText_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider
/// Size: 0x0040 (0x0000C8 - 0x000108)
class UVerseFortniteUIFrameworkSlider : public UUIFrameworkWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FVerseFortniteUIFrameworkSliderValue)      Value                                                       OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	DMember(float)                                     MinValue                                                    OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     MaxValue                                                    OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     StepSize                                                    OFFSET(get<float>, {0xDC, 4, 0, 0})


	/// Functions
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetValue
	// bool SetValue(float InValue);                                                                                            // [0xba2efbc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetStepSize
	// void SetStepSize(float InMinValue);                                                                                      // [0xba2ef34] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetMinValue
	// void SetMinValue(float InMinValue);                                                                                      // [0xba2eeb4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetMaxValue
	// void SetMaxValue(float InMaxValue);                                                                                      // [0xba2ee34] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.ServerValueChanged
	// void ServerValueChanged(class APlayerController* PlayerController, float InNewValue, int32_t InClientID, int32_t InServerID); // [0xba2ecf4] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_Value
	// void OnRep_Value();                                                                                                      // [0xba2eba0] Final|Native|Private 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_StepSize
	// void OnRep_StepSize();                                                                                                   // [0xba2eb78] Final|Native|Private 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_MinValue
	// void OnRep_MinValue();                                                                                                   // [0xba2eb50] Final|Native|Private 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_MaxValue
	// void OnRep_MaxValue();                                                                                                   // [0xba2eaec] Final|Native|Private 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.HandleValueChanged
	// void HandleValueChanged(float NewValue);                                                                                 // [0xba2dc40] Final|Native|Private 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetValue
	// float GetValue();                                                                                                        // [0x3848560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetStepSize
	// float GetStepSize();                                                                                                     // [0x983b4d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetMinValue
	// float GetMinValue();                                                                                                     // [0x960d5ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetMaxValue
	// float GetMaxValue();                                                                                                     // [0x6cb25ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.ExecuteServerValueChanged
	// void ExecuteServerValueChanged(float InNewValue, int32_t InClientID, int32_t InServerID);                                // [0xba2db48] Final|Native|Public  
};

/// Struct /Script/VerseFortniteUI.VerseFortniteUIPresenterElement
/// Size: 0x0020 (0x000000 - 0x000020)
class FVerseFortniteUIPresenterElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UVerseFortniteUINamedSlot*)          SlotWidget                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UWidget*)                            UMGWidget                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/VerseFortniteUI.VerseFortniteUIFrameworkSliderValue
/// Size: 0x000C (0x000000 - 0x00000C)
class FVerseFortniteUIFrameworkSliderValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ClientId                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ServerID                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

