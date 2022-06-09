// Class AudioCapture.AudioCapture
// Size : 0xB0 (Inherited : 0xA8)
struct UAudioCapture : UAudioGenerator {
	unsigned char UnknownData_A8[0x0008]; // 0xA8(0x8)

	void StopCapturingAudio(); // Function AudioCapture.AudioCapture.StopCapturingAudio // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF653662100
	void StartCapturingAudio(); // Function AudioCapture.AudioCapture.StartCapturingAudio // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF6536620E0
	bool IsCapturingAudio(); // Function AudioCapture.AudioCapture.IsCapturingAudio // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF6536620B0
	bool GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo OutInfo); // Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x11, 0x7FF653662010
};

// Class AudioCapture.AudioCaptureFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UAudioCaptureFunctionLibrary : UBlueprintFunctionLibrary {

	struct UAudioCapture* CreateAudioCapture(); // Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF653661FE0
};

// Class AudioCapture.AudioCaptureComponent
// Size : 0x790 (Inherited : 0x6D0)
struct UAudioCaptureComponent : USynthComponent {
	int32_t JitterLatencyFrames; // 0x6D0(0x4)
	unsigned char UnknownData_6D4[0x00BC]; // 0x6D4(0xBC)
};

