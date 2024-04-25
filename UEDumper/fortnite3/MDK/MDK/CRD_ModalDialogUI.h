
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: CRD_ModalDialogRuntime
/// dependency: Engine
/// dependency: ModelViewViewModel
/// dependency: UMG

/// Class /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UCreativeModalDialogAllowedConversionFunction : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseNone
	// ECreativeModalDialogViewmodelResponse GetResponseNone(FWidgetEventField Field);                                          // [0xc712240] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton6
	// ECreativeModalDialogViewmodelResponse GetResponseButton6(FWidgetEventField Field);                                       // [0xc7121d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton5
	// ECreativeModalDialogViewmodelResponse GetResponseButton5(FWidgetEventField Field);                                       // [0xc712160] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton4
	// ECreativeModalDialogViewmodelResponse GetResponseButton4(FWidgetEventField Field);                                       // [0xc7120f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton3
	// ECreativeModalDialogViewmodelResponse GetResponseButton3(FWidgetEventField Field);                                       // [0xc712080] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton2
	// ECreativeModalDialogViewmodelResponse GetResponseButton2(FWidgetEventField Field);                                       // [0xc712010] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton1
	// ECreativeModalDialogViewmodelResponse GetResponseButton1(FWidgetEventField Field);                                       // [0xc711fa0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UCreativeModalDialogConversionFunction : public UCreativeModalDialogAllowedConversionFunction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction.TranslateResponse
	// ECreativeModalDialogViewmodelResponse TranslateResponse(FWidgetEventField Field, ECreativeModalDialogViewmodelResponse Response); // [0xc711794] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction.GetRowIndexForButtonFromContentAlignment
	// int32_t GetRowIndexForButtonFromContentAlignment(ECreativeModalDialogAlignmentOption AlignmentOption, int32_t ButtonIndex, int32_t WideMaxColumns, int32_t TallMaxColumns, int32_t DefaultMaxColumns); // [0xc7122a8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction.GetMarginFromContentAlignment
	// FMargin GetMarginFromContentAlignment(ECreativeModalDialogAlignmentOption AlignmentOption, float TallMarginAmount, float WideMarginAmount, float CenteredFullMarginAmount, float DefaultMarginAmount); // [0xc711e14] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction.GetFloatingValueFromContentAlignment
	// float GetFloatingValueFromContentAlignment(ECreativeModalDialogAlignmentOption AlignmentOption, float TallValue, float WideValue, float CenteredFullValue, float DefaultValue); // [0xc711bfc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction.GetColumnIndexForButtonFromContentAlignment
	// int32_t GetColumnIndexForButtonFromContentAlignment(ECreativeModalDialogAlignmentOption AlignmentOption, int32_t ButtonIndex, int32_t WideMaxColumns, int32_t TallMaxColumns, int32_t DefaultMaxColumns); // [0xc711a7c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction.AssignCreativeModalDialogViewmodelResponse
	// ECreativeModalDialogViewmodelResponse AssignCreativeModalDialogViewmodelResponse(FMVVMEventField Field, ECreativeModalDialogViewmodelResponse Response); // [0xc711794] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel
/// Size: 0x0120 (0x000068 - 0x000188)
class UCreativeModalDialogViewmodel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FText)                                     Body                                                        OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	CMember(class UDataTable*)                         TextStyleSet                                                OFFSET(get<T>, {0x88, 8, 0, 0})
	SMember(FText)                                     Button01_MainText                                           OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FText)                                     Button02_MainText                                           OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FText)                                     Button03_MainText                                           OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FText)                                     Button04_MainText                                           OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FText)                                     Button05_MainText                                           OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FText)                                     Button06_MainText                                           OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FText)                                     Button01_SubText                                            OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FText)                                     Button02_SubText                                            OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	SMember(FText)                                     Button03_SubText                                            OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	SMember(FText)                                     Button04_SubText                                            OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	SMember(FText)                                     Button05_SubText                                            OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	SMember(FText)                                     Button06_SubText                                            OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	CMember(class UTexture2D*)                         Art01_Image                                                 OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(class UTexture2D*)                         Art02_Image                                                 OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(ECreativeModalDialogAlignmentOption)       ContentAlignment                                            OFFSET(get<T>, {0x160, 1, 0, 0})
	DMember(bool)                                      bShowBackground                                             OFFSET(get<bool>, {0x161, 1, 0, 0})
	DMember(float)                                     DialogBackgroundAlpha                                       OFFSET(get<float>, {0x164, 4, 0, 0})
	CMember(ECreativeModalDialogTimerOption)           TimerOption                                                 OFFSET(get<T>, {0x168, 1, 0, 0})
	DMember(float)                                     Timeout                                                     OFFSET(get<float>, {0x16C, 4, 0, 0})
	DMember(float)                                     RemainingTimeForTimeout                                     OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(int64_t)                                   NumberOfButtons                                             OFFSET(get<int64_t>, {0x178, 8, 0, 0})
	CMember(ECreativeModalBackActionBoundButtonOption) BackActionBoundButton                                       OFFSET(get<T>, {0x180, 1, 0, 0})
	CMember(ECreativeModalDialogViewmodelResponse)     Response                                                    OFFSET(get<T>, {0x181, 1, 0, 0})


	/// Functions
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton6UseFallbackDefaultInputAction
	// bool ShouldButton6UseFallbackDefaultInputAction();                                                                       // [0xc7126b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton5UseFallbackDefaultInputAction
	// bool ShouldButton5UseFallbackDefaultInputAction();                                                                       // [0xc712684] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton4UseFallbackDefaultInputAction
	// bool ShouldButton4UseFallbackDefaultInputAction();                                                                       // [0xc712658] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton3UseFallbackDefaultInputAction
	// bool ShouldButton3UseFallbackDefaultInputAction();                                                                       // [0xc71262c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton2UseFallbackDefaultInputAction
	// bool ShouldButton2UseFallbackDefaultInputAction();                                                                       // [0xc712600] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton1UseFallbackDefaultInputAction
	// bool ShouldButton1UseFallbackDefaultInputAction();                                                                       // [0xc7125d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsTimerVisible
	// bool IsTimerVisible();                                                                                                   // [0xc7125a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton6Visible
	// bool IsButton6Visible();                                                                                                 // [0xc712588] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton5Visible
	// bool IsButton5Visible();                                                                                                 // [0xc71256c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton4Visible
	// bool IsButton4Visible();                                                                                                 // [0xc712550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton3Visible
	// bool IsButton3Visible();                                                                                                 // [0xc712534] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton2Visible
	// bool IsButton2Visible();                                                                                                 // [0xc712518] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton1Visible
	// bool IsButton1Visible();                                                                                                 // [0xc7124fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetVerticalAlignment
	// TEnumAsByte<EVerticalAlignment> GetVerticalAlignment();                                                                  // [0xc712484] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetTimerVisibility
	// ESlateVisibility GetTimerVisibility();                                                                                   // [0xc71244c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetTimeoutProgress
	// float GetTimeoutProgress();                                                                                              // [0xc712428] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetHorizontalAlignment
	// TEnumAsByte<EHorizontalAlignment> GetHorizontalAlignment();                                                              // [0xc711d9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton6Visibility
	// ESlateVisibility GetButton6Visibility();                                                                                 // [0xc711a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton6TriggeringInputAction
	// FDataTableRowHandle GetButton6TriggeringInputAction();                                                                   // [0xc711a24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton5Visibility
	// ESlateVisibility GetButton5Visibility();                                                                                 // [0xc711a08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton5TriggeringInputAction
	// FDataTableRowHandle GetButton5TriggeringInputAction();                                                                   // [0xc7119cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton4Visibility
	// ESlateVisibility GetButton4Visibility();                                                                                 // [0xc7119b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton4TriggeringInputAction
	// FDataTableRowHandle GetButton4TriggeringInputAction();                                                                   // [0xc711974] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton3Visibility
	// ESlateVisibility GetButton3Visibility();                                                                                 // [0xc711958] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton3TriggeringInputAction
	// FDataTableRowHandle GetButton3TriggeringInputAction();                                                                   // [0xc71191c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton2Visibility
	// ESlateVisibility GetButton2Visibility();                                                                                 // [0xc711900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton2TriggeringInputAction
	// FDataTableRowHandle GetButton2TriggeringInputAction();                                                                   // [0xc7118c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton1Visibility
	// ESlateVisibility GetButton1Visibility();                                                                                 // [0xc7118a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton1TriggeringInputAction
	// FDataTableRowHandle GetButton1TriggeringInputAction();                                                                   // [0xc71186c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetBackgroundVisibility
	// ESlateVisibility GetBackgroundVisibility();                                                                              // [0xc711848] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CRD_ModalDialogUI.CreativeModalDialogWidget
/// Size: 0x0010 (0x000408 - 0x000418)
class UCreativeModalDialogWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
	SMember(FDataTableRowHandle)                       MainMenuInputRowHandle                                      OFFSET(getStruct<T>, {0x408, 16, 0, 0})
};

/// Enum /Script/CRD_ModalDialogUI.ECreativeModalDialogViewmodelResponse
/// Size: 0x08
enum class ECreativeModalDialogViewmodelResponse : uint8_t
{
	ECreativeModalDialogViewmodelResponse__None                                      = 0,
	ECreativeModalDialogViewmodelResponse__Button1                                   = 1,
	ECreativeModalDialogViewmodelResponse__Button2                                   = 2,
	ECreativeModalDialogViewmodelResponse__Button3                                   = 3,
	ECreativeModalDialogViewmodelResponse__Button4                                   = 4,
	ECreativeModalDialogViewmodelResponse__Button5                                   = 5,
	ECreativeModalDialogViewmodelResponse__Button6                                   = 6,
	ECreativeModalDialogViewmodelResponse__ECreativeModalDialogViewmodelResponse_MAX = 7
};
