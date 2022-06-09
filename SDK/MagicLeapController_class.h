// Class MagicLeapController.MagicLeapControllerFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UMagicLeapControllerFunctionLibrary : UBlueprintFunctionLibrary {

	bool SetMotionSourceForHand(enum class EControllerHand Hand, struct FName MotionSource); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0xD, 0x7FF6535DFA40
	bool SetControllerTrackingMode(enum class EMagicLeapControllerTrackingMode TrackingMode); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x2, 0x7FF6535DF150
	bool PlayLEDPattern(struct FName MotionSource, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF6535DF900
	bool PlayLEDEffect(struct FName MotionSource, enum class EMagicLeapControllerLEDEffect LEDEffect, enum class EMagicLeapControllerLEDSpeed LEDSpeed, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF6535DF750
	bool PlayHapticPattern(struct FName MotionSource, enum class EMagicLeapControllerHapticPattern HapticPattern, enum class EMagicLeapControllerHapticIntensity Intensity); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0xB, 0x7FF6535DF660
	bool PlayControllerLEDEffect(enum class EControllerHand Hand, enum class EMagicLeapControllerLEDEffect LEDEffect, enum class EMagicLeapControllerLEDSpeed LEDSpeed, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0xD, 0x7FF6535DF4B0
	bool PlayControllerLED(enum class EControllerHand Hand, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF6535DF370
	bool PlayControllerHapticFeedback(enum class EControllerHand Hand, enum class EMagicLeapControllerHapticPattern HapticPattern, enum class EMagicLeapControllerHapticIntensity Intensity); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF6535DF270
	int32_t MaxSupportedMagicLeapControllers(); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF6535D2A00
	bool IsMLControllerConnected(struct FName MotionSource); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x9, 0x7FF6535DF050
	void InvertControllerMapping(); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF6535DF250
	struct FName GetMotionSourceForHand(enum class EControllerHand Hand); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0xC, 0x7FF6535DF1D0
	enum class EMagicLeapControllerType GetMLControllerType(enum class EControllerHand Hand); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x2, 0x7FF6535DF150
	enum class EControllerHand GetHandForMotionSource(struct FName MotionSource); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF6535DF0D0
	enum class EMagicLeapControllerType GetControllerType(struct FName MotionSource); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x9, 0x7FF6535DF050
	enum class EMagicLeapControllerTrackingMode GetControllerTrackingMode(); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF6535DF020
	bool GetControllerMapping(int32_t ControllerIndex, enum class EControllerHand Hand); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x6, 0x7FF6535DEF50
};

// Class MagicLeapController.MagicLeapTouchpadGesturesComponent
// Size : 0x140 (Inherited : 0xB0)
struct UMagicLeapTouchpadGesturesComponent : UActorComponent {
	unsigned char UnknownData_B0[0x0008]; // 0xB0(0x8)
	struct FMulticastInlineDelegate OnTouchpadGestureStart; // 0xB8(0x10)
	struct FMulticastInlineDelegate OnTouchpadGestureContinue; // 0xC8(0x10)
	struct FMulticastInlineDelegate OnTouchpadGestureEnd; // 0xD8(0x10)
	unsigned char UnknownData_E8[0x0058]; // 0xE8(0x58)
};

