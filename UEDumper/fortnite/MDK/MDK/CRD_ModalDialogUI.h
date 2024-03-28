
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
	// ECreativeModalDialogViewmodelResponse GetResponseNone(FWidgetEventField Field);                                          // [0xac4d28c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton6
	// ECreativeModalDialogViewmodelResponse GetResponseButton6(FWidgetEventField Field);                                       // [0xac4d188] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton5
	// ECreativeModalDialogViewmodelResponse GetResponseButton5(FWidgetEventField Field);                                       // [0xac4d084] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton4
	// ECreativeModalDialogViewmodelResponse GetResponseButton4(FWidgetEventField Field);                                       // [0xac4cf80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton3
	// ECreativeModalDialogViewmodelResponse GetResponseButton3(FWidgetEventField Field);                                       // [0xac4ce7c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton2
	// ECreativeModalDialogViewmodelResponse GetResponseButton2(FWidgetEventField Field);                                       // [0xac4cd78] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton1
	// ECreativeModalDialogViewmodelResponse GetResponseButton1(FWidgetEventField Field);                                       // [0xac4cc74] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
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
	// ECreativeModalDialogViewmodelResponse TranslateResponse(FWidgetEventField Field, ECreativeModalDialogViewmodelResponse Response); // [0xac4c31c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction.GetRowIndexForButtonFromContentAlignment
	// int32_t GetRowIndexForButtonFromContentAlignment(ECreativeModalDialogAlignmentOption AlignmentOption, int32_t ButtonIndex, int32_t WideMaxColumns, int32_t TallMaxColumns, int32_t DefaultMaxColumns); // [0xac4d388] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction.GetMarginFromContentAlignment
	// FMargin GetMarginFromContentAlignment(ECreativeModalDialogAlignmentOption AlignmentOption, float TallMarginAmount, float WideMarginAmount, float CenteredFullMarginAmount, float DefaultMarginAmount); // [0xac4cae8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction.GetFloatingValueFromContentAlignment
	// float GetFloatingValueFromContentAlignment(ECreativeModalDialogAlignmentOption AlignmentOption, float TallValue, float WideValue, float CenteredFullValue, float DefaultValue); // [0xac4c8d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction.GetColumnIndexForButtonFromContentAlignment
	// int32_t GetColumnIndexForButtonFromContentAlignment(ECreativeModalDialogAlignmentOption AlignmentOption, int32_t ButtonIndex, int32_t WideMaxColumns, int32_t TallMaxColumns, int32_t DefaultMaxColumns); // [0xac4c750] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction.AssignCreativeModalDialogViewmodelResponse
	// ECreativeModalDialogViewmodelResponse AssignCreativeModalDialogViewmodelResponse(FMVVMEventField Field, ECreativeModalDialogViewmodelResponse Response); // [0xac4c31c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel
/// Size: 0x0190 (0x000068 - 0x0001F8)
class UCreativeModalDialogViewmodel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	SMember(FText)                                     Body                                                        OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	CMember(class UDataTable*)                         TextStyleSet                                                OFFSET(get<T>, {0x98, 8, 0, 0})
	SMember(FText)                                     Button01_MainText                                           OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
	SMember(FText)                                     Button02_MainText                                           OFFSET(getStruct<T>, {0xB8, 24, 0, 0})
	SMember(FText)                                     Button03_MainText                                           OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
	SMember(FText)                                     Button04_MainText                                           OFFSET(getStruct<T>, {0xE8, 24, 0, 0})
	SMember(FText)                                     Button05_MainText                                           OFFSET(getStruct<T>, {0x100, 24, 0, 0})
	SMember(FText)                                     Button06_MainText                                           OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	SMember(FText)                                     Button01_SubText                                            OFFSET(getStruct<T>, {0x130, 24, 0, 0})
	SMember(FText)                                     Button02_SubText                                            OFFSET(getStruct<T>, {0x148, 24, 0, 0})
	SMember(FText)                                     Button03_SubText                                            OFFSET(getStruct<T>, {0x160, 24, 0, 0})
	SMember(FText)                                     Button04_SubText                                            OFFSET(getStruct<T>, {0x178, 24, 0, 0})
	SMember(FText)                                     Button05_SubText                                            OFFSET(getStruct<T>, {0x190, 24, 0, 0})
	SMember(FText)                                     Button06_SubText                                            OFFSET(getStruct<T>, {0x1A8, 24, 0, 0})
	CMember(class UTexture2D*)                         Art01_Image                                                 OFFSET(get<T>, {0x1C0, 8, 0, 0})
	CMember(class UTexture2D*)                         Art02_Image                                                 OFFSET(get<T>, {0x1C8, 8, 0, 0})
	CMember(ECreativeModalDialogAlignmentOption)       ContentAlignment                                            OFFSET(get<T>, {0x1D0, 1, 0, 0})
	DMember(bool)                                      bShowBackground                                             OFFSET(get<bool>, {0x1D1, 1, 0, 0})
	DMember(float)                                     DialogBackgroundAlpha                                       OFFSET(get<float>, {0x1D4, 4, 0, 0})
	CMember(ECreativeModalDialogTimerOption)           TimerOption                                                 OFFSET(get<T>, {0x1D8, 1, 0, 0})
	DMember(float)                                     Timeout                                                     OFFSET(get<float>, {0x1DC, 4, 0, 0})
	DMember(float)                                     RemainingTimeForTimeout                                     OFFSET(get<float>, {0x1E0, 4, 0, 0})
	DMember(int64_t)                                   NumberOfButtons                                             OFFSET(get<int64_t>, {0x1E8, 8, 0, 0})
	CMember(ECreativeModalBackActionBoundButtonOption) BackActionBoundButton                                       OFFSET(get<T>, {0x1F0, 1, 0, 0})
	CMember(ECreativeModalDialogViewmodelResponse)     Response                                                    OFFSET(get<T>, {0x1F1, 1, 0, 0})


	/// Functions
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton6UseFallbackDefaultInputAction
	// bool ShouldButton6UseFallbackDefaultInputAction();                                                                       // [0xac4d790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton5UseFallbackDefaultInputAction
	// bool ShouldButton5UseFallbackDefaultInputAction();                                                                       // [0xac4d764] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton4UseFallbackDefaultInputAction
	// bool ShouldButton4UseFallbackDefaultInputAction();                                                                       // [0xac4d738] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton3UseFallbackDefaultInputAction
	// bool ShouldButton3UseFallbackDefaultInputAction();                                                                       // [0xac4d70c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton2UseFallbackDefaultInputAction
	// bool ShouldButton2UseFallbackDefaultInputAction();                                                                       // [0xac4d6e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton1UseFallbackDefaultInputAction
	// bool ShouldButton1UseFallbackDefaultInputAction();                                                                       // [0xac4d6b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsTimerVisible
	// bool IsTimerVisible();                                                                                                   // [0xac4d684] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton6Visible
	// bool IsButton6Visible();                                                                                                 // [0xac4d668] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton5Visible
	// bool IsButton5Visible();                                                                                                 // [0xac4d64c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton4Visible
	// bool IsButton4Visible();                                                                                                 // [0xac4d630] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton3Visible
	// bool IsButton3Visible();                                                                                                 // [0xac4d614] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton2Visible
	// bool IsButton2Visible();                                                                                                 // [0xac4d5f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton1Visible
	// bool IsButton1Visible();                                                                                                 // [0xac4d5dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetVerticalAlignment
	// TEnumAsByte<EVerticalAlignment> GetVerticalAlignment();                                                                  // [0xac4d564] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetTimerVisibility
	// ESlateVisibility GetTimerVisibility();                                                                                   // [0xac4d52c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetTimeoutProgress
	// float GetTimeoutProgress();                                                                                              // [0xac4d508] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetHorizontalAlignment
	// TEnumAsByte<EHorizontalAlignment> GetHorizontalAlignment();                                                              // [0xac4ca70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton6Visibility
	// ESlateVisibility GetButton6Visibility();                                                                                 // [0xac4c734] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton6TriggeringInputAction
	// FDataTableRowHandle GetButton6TriggeringInputAction();                                                                   // [0xac4c6f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton5Visibility
	// ESlateVisibility GetButton5Visibility();                                                                                 // [0xac4c6dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton5TriggeringInputAction
	// FDataTableRowHandle GetButton5TriggeringInputAction();                                                                   // [0xac4c6a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton4Visibility
	// ESlateVisibility GetButton4Visibility();                                                                                 // [0xac4c684] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton4TriggeringInputAction
	// FDataTableRowHandle GetButton4TriggeringInputAction();                                                                   // [0xac4c648] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton3Visibility
	// ESlateVisibility GetButton3Visibility();                                                                                 // [0xac4c62c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton3TriggeringInputAction
	// FDataTableRowHandle GetButton3TriggeringInputAction();                                                                   // [0xac4c5f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton2Visibility
	// ESlateVisibility GetButton2Visibility();                                                                                 // [0xac4c5d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton2TriggeringInputAction
	// FDataTableRowHandle GetButton2TriggeringInputAction();                                                                   // [0xac4c598] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton1Visibility
	// ESlateVisibility GetButton1Visibility();                                                                                 // [0xac4c57c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton1TriggeringInputAction
	// FDataTableRowHandle GetButton1TriggeringInputAction();                                                                   // [0xac4c540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetBackgroundVisibility
	// ESlateVisibility GetBackgroundVisibility();                                                                              // [0xac4c51c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CRD_ModalDialogUI.CreativeModalDialogWidget
/// Size: 0x0010 (0x000400 - 0x000410)
class UCreativeModalDialogWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	SMember(FDataTableRowHandle)                       MainMenuInputRowHandle                                      OFFSET(getStruct<T>, {0x400, 16, 0, 0})
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
