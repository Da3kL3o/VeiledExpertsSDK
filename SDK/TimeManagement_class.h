// Class TimeManagement.FixedFrameRateCustomTimeStep
// Size : 0x30 (Inherited : 0x28)
struct UFixedFrameRateCustomTimeStep : UEngineCustomTimeStep {
	struct FFrameRate FixedFrameRate; // 0x28(0x8)
};

// Class TimeManagement.TimeManagementBlueprintLibrary
// Size : 0x28 (Inherited : 0x28)
struct UTimeManagementBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FFrameTime TransformTime(struct FFrameTime SourceTime, struct FFrameRate SourceRate, struct FFrameRate DestinationRate); // Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x20, 0x7FF654C61910
	struct FFrameNumber Subtract_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0xC, 0x7FF654C61850
	struct FFrameNumber Subtract_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B); // Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0xC, 0x7FF654C61850
	struct FFrameTime SnapFrameTimeToRate(struct FFrameTime SourceTime, struct FFrameRate SourceRate, struct FFrameRate SnapToRate); // Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x20, 0x7FF654C61700
	struct FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, struct FFrameRate FrameRate); // Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x14, 0x7FF654C61620
	struct FFrameNumber Multiply_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0xC, 0x7FF654C61560
	bool IsValid_MultipleOf(struct FFrameRate InFrameRate, struct FFrameRate OtherFramerate); // Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x11, 0x7FF654C61460
	bool IsValid_Framerate(struct FFrameRate InFrameRate); // Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x9, 0x7FF654C613C0
	struct FFrameRate GetTimecodeFrameRate(); // Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x8, 0x7FF654C61380
	struct FTimecode GetTimecode(); // Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x14, 0x7FF654C61340
	struct FFrameNumber Divide_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0xC, 0x7FF654C61280
	struct FString Conv_TimecodeToString(struct FTimecode InTimecode, bool bForceSignDisplay); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x28, 0x7FF654C61150
	float Conv_QualifiedFrameTimeToSeconds(struct FQualifiedFrameTime InFrameTime); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x14, 0x7FF654C610A0
	float Conv_FrameRateToSeconds(struct FFrameRate InFrameRate); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0xC, 0x7FF654C61000
	int32_t Conv_FrameNumberToInteger(struct FFrameNumber InFrameNumber); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x8, 0x7FF654C60F70
	struct FFrameNumber Add_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0xC, 0x7FF654C60EB0
	struct FFrameNumber Add_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B); // Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0xC, 0x7FF654C60EB0
};

// Class TimeManagement.TimeSynchronizationSource
// Size : 0x30 (Inherited : 0x28)
struct UTimeSynchronizationSource : UObject {
	bool bUseForSynchronization; // 0x28(0x1)
	unsigned char UnknownData_29[0x0003]; // 0x29(0x3)
	int32_t FrameOffset; // 0x2C(0x4)
};

