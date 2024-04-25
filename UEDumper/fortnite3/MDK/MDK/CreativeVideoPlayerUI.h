
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

/// Class /Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget
/// Size: 0x0078 (0x000408 - 0x000480)
class UCreativeVideoPlayerFullScreenWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	CMember(class USoundSourceBus*)                    SourceBus                                                   OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class USoundClass*)                        SoundClass                                                  OFFSET(get<T>, {0x428, 8, 0, 0})
	SMember(FDataTableRowHandle)                       HoldToSkipAction                                            OFFSET(getStruct<T>, {0x430, 16, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_Skip                                                 OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UImage*)                             Image_VideoTexture                                          OFFSET(get<T>, {0x448, 8, 0, 0})
	DMember(float)                                     SkipButtonTimeout                                           OFFSET(get<float>, {0x450, 4, 0, 0})
	CMember(class UAudioComponent*)                    SoundComponent                                              OFFSET(get<T>, {0x468, 8, 0, 0})


	/// Functions
	// Function /Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.SetExternalComponents
	// void SetExternalComponents(class UMediaTexture* VideoTextureExt, class USoundSourceBus* ExtSourceBus);                   // [0xc610a0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.OnSkipButtonActionProgress
	// void OnSkipButtonActionProgress(float HeldPercent);                                                                      // [0xc610990] Final|Native|Private 
	// Function /Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.OnSkipButtonActionComplete
	// void OnSkipButtonActionComplete();                                                                                       // [0xc61097c] Final|Native|Private 
};
