// ScriptStruct AkAudio.AKWaapiJsonObject
// Size : 0x10 (Inherited : 0x0)
struct FAKWaapiJsonObject {
	unsigned char UnknownData_0[0x0010]; // 0x0(0x10)
};

// ScriptStruct AkAudio.AkWaapiSubscriptionId
// Size : 0x8 (Inherited : 0x0)
struct FAkWaapiSubscriptionId {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
};

// ScriptStruct AkAudio.AkAdvancedInitializationSettings
// Size : 0x2C (Inherited : 0x0)
struct FAkAdvancedInitializationSettings {
	uint32_t IO_MemorySize; // 0x0(0x4)
	uint32_t IO_Granularity; // 0x4(0x4)
	float TargetAutoStreamBufferLength; // 0x8(0x4)
	bool UseStreamCache; // 0xC(0x1)
	unsigned char UnknownData_D[0x0003]; // 0xD(0x3)
	uint32_t MaximumPinnedBytesInCache; // 0x10(0x4)
	bool EnableGameSyncPreparation; // 0x14(0x1)
	unsigned char UnknownData_15[0x0003]; // 0x15(0x3)
	uint32_t ContinuousPlaybackLookAhead; // 0x18(0x4)
	uint32_t MonitorQueuePoolSize; // 0x1C(0x4)
	uint32_t MaximumHardwareTimeoutMs; // 0x20(0x4)
	bool DebugOutOfRangeCheckEnabled; // 0x24(0x1)
	unsigned char UnknownData_25[0x0003]; // 0x25(0x3)
	float DebugOutOfRangeLimit; // 0x28(0x4)
};

// ScriptStruct AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
// Size : 0x30 (Inherited : 0x2C)
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : FAkAdvancedInitializationSettings {
	bool EnableMultiCoreRendering; // 0x2C(0x1)
	unsigned char UnknownData_2D[0x0003]; // 0x2D(0x3)
};

// ScriptStruct AkAudio.AkAndroidAdvancedInitializationSettings
// Size : 0x38 (Inherited : 0x30)
struct FAkAndroidAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x30(0x4)
	bool RoundFrameSizeToHardwareSize; // 0x34(0x1)
	unsigned char UnknownData_35[0x0003]; // 0x35(0x3)
};

// ScriptStruct AkAudio.AkAudioSession
// Size : 0xC (Inherited : 0x0)
struct FAkAudioSession {
	enum class EAkAudioSessionCategory AudioSessionCategory; // 0x0(0x4)
	uint32_t AudioSessionCategoryOptions; // 0x4(0x4)
	enum class EAkAudioSessionMode AudioSessionMode; // 0x8(0x4)
};

// ScriptStruct AkAudio.AkExternalSourceInfo
// Size : 0x38 (Inherited : 0x0)
struct FAkExternalSourceInfo {
	struct FString ExternalSrcName; // 0x0(0x10)
	enum class AkCodecId CodecID; // 0x10(0x1)
	unsigned char UnknownData_11[0x0007]; // 0x11(0x7)
	struct FString Filename; // 0x18(0x10)
	struct UAkExternalMediaAsset* ExternalSourceAsset; // 0x28(0x8)
	bool IsStreamed; // 0x30(0x1)
	unsigned char UnknownData_31[0x0007]; // 0x31(0x7)
};

// ScriptStruct AkAudio.AkSegmentInfo
// Size : 0x24 (Inherited : 0x0)
struct FAkSegmentInfo {
	int32_t CurrentPosition; // 0x0(0x4)
	int32_t PreEntryDuration; // 0x4(0x4)
	int32_t ActiveDuration; // 0x8(0x4)
	int32_t PostExitDuration; // 0xC(0x4)
	int32_t RemainingLookAheadTime; // 0x10(0x4)
	float BeatDuration; // 0x14(0x4)
	float BarDuration; // 0x18(0x4)
	float GridDuration; // 0x1C(0x4)
	float GridOffset; // 0x20(0x4)
};

// ScriptStruct AkAudio.AkMidiEventBase
// Size : 0x2 (Inherited : 0x0)
struct FAkMidiEventBase {
	enum class EAkMidiEventType Type; // 0x0(0x1)
	enum class None Chan; // 0x1(0x1)
};

// ScriptStruct AkAudio.AkMidiProgramChange
// Size : 0x3 (Inherited : 0x2)
struct FAkMidiProgramChange : FAkMidiEventBase {
	enum class None ProgramNum; // 0x2(0x1)
};

// ScriptStruct AkAudio.AkMidiChannelAftertouch
// Size : 0x3 (Inherited : 0x2)
struct FAkMidiChannelAftertouch : FAkMidiEventBase {
	enum class None Value; // 0x2(0x1)
};

// ScriptStruct AkAudio.AkMidiNoteAftertouch
// Size : 0x4 (Inherited : 0x2)
struct FAkMidiNoteAftertouch : FAkMidiEventBase {
	enum class None Note; // 0x2(0x1)
	enum class None Value; // 0x3(0x1)
};

// ScriptStruct AkAudio.AkMidiPitchBend
// Size : 0x8 (Inherited : 0x2)
struct FAkMidiPitchBend : FAkMidiEventBase {
	enum class None ValueLsb; // 0x2(0x1)
	enum class None ValueMsb; // 0x3(0x1)
	int32_t FullValue; // 0x4(0x4)
};

// ScriptStruct AkAudio.AkMidiCc
// Size : 0x4 (Inherited : 0x2)
struct FAkMidiCc : FAkMidiEventBase {
	enum class EAkMidiCcValues Cc; // 0x2(0x1)
	enum class None Value; // 0x3(0x1)
};

// ScriptStruct AkAudio.AkMidiNoteOnOff
// Size : 0x4 (Inherited : 0x2)
struct FAkMidiNoteOnOff : FAkMidiEventBase {
	enum class None Note; // 0x2(0x1)
	enum class None Velocity; // 0x3(0x1)
};

// ScriptStruct AkAudio.AkMidiGeneric
// Size : 0x4 (Inherited : 0x2)
struct FAkMidiGeneric : FAkMidiEventBase {
	enum class None Param1; // 0x2(0x1)
	enum class None Param2; // 0x3(0x1)
};

// ScriptStruct AkAudio.AkChannelMask
// Size : 0x4 (Inherited : 0x0)
struct FAkChannelMask {
	int32_t ChannelMask; // 0x0(0x4)
};

// ScriptStruct AkAudio.AkGeometrySurfaceOverride
// Size : 0x18 (Inherited : 0x0)
struct FAkGeometrySurfaceOverride {
	struct UAkAcousticTexture* AcousticTexture; // 0x0(0x8)
	unsigned char bEnableOcclusionOverride : 1; // 0x8(0x1)
	unsigned char UnknownData_8_1 : 7; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
	float OcclusionValue; // 0xC(0x4)
	float SurfaceArea; // 0x10(0x4)
	unsigned char UnknownData_14[0x0004]; // 0x14(0x4)
};

// ScriptStruct AkAudio.AkGeometryData
// Size : 0x50 (Inherited : 0x0)
struct FAkGeometryData {
	struct TArray<struct FVector> Vertices; // 0x0(0x10)
	struct TArray<struct FAkAcousticSurface> Surfaces; // 0x10(0x10)
	struct TArray<struct FAkTriangle> Triangles; // 0x20(0x10)
	struct TArray<struct UPhysicalMaterial*> ToOverrideAcousticTexture; // 0x30(0x10)
	struct TArray<struct UPhysicalMaterial*> ToOverrideOcclusion; // 0x40(0x10)
};

// ScriptStruct AkAudio.AkTriangle
// Size : 0x8 (Inherited : 0x0)
struct FAkTriangle {
	uint16 Point0; // 0x0(0x2)
	uint16 Point1; // 0x2(0x2)
	uint16 Point2; // 0x4(0x2)
	uint16 Surface; // 0x6(0x2)
};

// ScriptStruct AkAudio.AkAcousticSurface
// Size : 0x18 (Inherited : 0x0)
struct FAkAcousticSurface {
	uint32_t Texture; // 0x0(0x4)
	float Occlusion; // 0x4(0x4)
	struct FString Name; // 0x8(0x10)
};

// ScriptStruct AkAudio.AkHololensAdvancedInitializationSettings
// Size : 0x34 (Inherited : 0x30)
struct FAkHololensAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	bool UseHeadMountedDisplayAudioDevice; // 0x30(0x1)
	unsigned char UnknownData_31[0x0003]; // 0x31(0x3)
};

// ScriptStruct AkAudio.AkPluginInfo
// Size : 0x28 (Inherited : 0x0)
struct FAkPluginInfo {
	struct FString Name; // 0x0(0x10)
	uint32_t PluginID; // 0x10(0x4)
	unsigned char UnknownData_14[0x0004]; // 0x14(0x4)
	struct FString dll; // 0x18(0x10)
};

// ScriptStruct AkAudio.AkCommonInitializationSettings
// Size : 0x60 (Inherited : 0x0)
struct FAkCommonInitializationSettings {
	uint32_t MaximumNumberOfMemoryPools; // 0x0(0x4)
	uint32_t MaximumNumberOfPositioningPaths; // 0x4(0x4)
	uint32_t CommandQueueSize; // 0x8(0x4)
	uint32_t SamplesPerFrame; // 0xC(0x4)
	struct FAkMainOutputSettings MainOutputSettings; // 0x10(0x28)
	float StreamingLookAheadRatio; // 0x38(0x4)
	uint16 NumberOfRefillsInVoice; // 0x3C(0x2)
	unsigned char UnknownData_3E[0x0002]; // 0x3E(0x2)
	struct FAkSpatialAudioSettings SpatialAudioSettings; // 0x40(0x20)
};

// ScriptStruct AkAudio.AkSpatialAudioSettings
// Size : 0x20 (Inherited : 0x0)
struct FAkSpatialAudioSettings {
	uint32_t MaxSoundPropagationDepth; // 0x0(0x4)
	float MovementThreshold; // 0x4(0x4)
	uint32_t NumberOfPrimaryRays; // 0x8(0x4)
	uint32_t ReflectionOrder; // 0xC(0x4)
	float MaximumPathLength; // 0x10(0x4)
	float CPULimitPercentage; // 0x14(0x4)
	bool EnableDiffractionOnReflections; // 0x18(0x1)
	bool EnableGeometricDiffractionAndTransmission; // 0x19(0x1)
	bool CalcEmitterVirtualPosition; // 0x1A(0x1)
	bool UseObstruction; // 0x1B(0x1)
	bool UseOcclusion; // 0x1C(0x1)
	unsigned char UnknownData_1D[0x0003]; // 0x1D(0x3)
};

// ScriptStruct AkAudio.AkMainOutputSettings
// Size : 0x28 (Inherited : 0x0)
struct FAkMainOutputSettings {
	struct FString AudioDeviceShareset; // 0x0(0x10)
	uint32_t DeviceID; // 0x10(0x4)
	enum class EAkPanningRule PanningRule; // 0x14(0x4)
	enum class EAkChannelConfigType ChannelConfigType; // 0x18(0x4)
	uint32_t ChannelMask; // 0x1C(0x4)
	uint32_t NumberOfChannels; // 0x20(0x4)
	unsigned char UnknownData_24[0x0004]; // 0x24(0x4)
};

// ScriptStruct AkAudio.AkCommonInitializationSettingsWithSampleRate
// Size : 0x68 (Inherited : 0x60)
struct FAkCommonInitializationSettingsWithSampleRate : FAkCommonInitializationSettings {
	uint32_t SampleRate; // 0x60(0x4)
	unsigned char UnknownData_64[0x0004]; // 0x64(0x4)
};

// ScriptStruct AkAudio.AkCommunicationSettings
// Size : 0x20 (Inherited : 0x0)
struct FAkCommunicationSettings {
	uint32_t PoolSize; // 0x0(0x4)
	uint16 DiscoveryBroadcastPort; // 0x4(0x2)
	uint16 CommandPort; // 0x6(0x2)
	uint16 NotificationPort; // 0x8(0x2)
	unsigned char UnknownData_A[0x0006]; // 0xA(0x6)
	struct FString NetworkName; // 0x10(0x10)
};

// ScriptStruct AkAudio.AkCommunicationSettingsWithCommSelection
// Size : 0x28 (Inherited : 0x20)
struct FAkCommunicationSettingsWithCommSelection : FAkCommunicationSettings {
	enum class EAkCommSystem CommunicationSystem; // 0x20(0x4)
	unsigned char UnknownData_24[0x0004]; // 0x24(0x4)
};

// ScriptStruct AkAudio.AkCommunicationSettingsWithSystemInitialization
// Size : 0x28 (Inherited : 0x20)
struct FAkCommunicationSettingsWithSystemInitialization : FAkCommunicationSettings {
	bool InitializeSystemComms; // 0x20(0x1)
	unsigned char UnknownData_21[0x0007]; // 0x21(0x7)
};

// ScriptStruct AkAudio.AkBoolPropertyToControl
// Size : 0x10 (Inherited : 0x0)
struct FAkBoolPropertyToControl {
	struct FString ItemProperty; // 0x0(0x10)
};

// ScriptStruct AkAudio.AkPropertyToControl
// Size : 0x10 (Inherited : 0x0)
struct FAkPropertyToControl {
	struct FString ItemProperty; // 0x0(0x10)
};

// ScriptStruct AkAudio.AkPS4AdvancedInitializationSettings
// Size : 0x38 (Inherited : 0x30)
struct FAkPS4AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t ACPBatchBufferSize; // 0x30(0x4)
	bool UseHardwareCodecLowLatencyMode; // 0x34(0x1)
	unsigned char UnknownData_35[0x0003]; // 0x35(0x3)
};

// ScriptStruct AkAudio.AkReverbDescriptor
// Size : 0x28 (Inherited : 0x0)
struct FAkReverbDescriptor {
	unsigned char UnknownData_0[0x0028]; // 0x0(0x28)
};

// ScriptStruct AkAudio.AkAcousticTextureParams
// Size : 0x20 (Inherited : 0x0)
struct FAkAcousticTextureParams {
	struct FVector4 AbsorptionValues; // 0x0(0x10)
	unsigned char UnknownData_10[0x0010]; // 0x10(0x10)
};

// ScriptStruct AkAudio.AkGeometrySurfacePropertiesToMap
// Size : 0x30 (Inherited : 0x0)
struct FAkGeometrySurfacePropertiesToMap {
	struct TSoftObjectPtr<struct UAkAcousticTexture> AcousticTexture; // 0x0(0x28)
	float OcclusionValue; // 0x28(0x4)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
};

// ScriptStruct AkAudio.AkWwiseItemToControl
// Size : 0x40 (Inherited : 0x0)
struct FAkWwiseItemToControl {
	struct FAkWwiseObjectDetails ItemPicked; // 0x0(0x30)
	struct FString ItemPath; // 0x30(0x10)
};

// ScriptStruct AkAudio.AkWwiseObjectDetails
// Size : 0x30 (Inherited : 0x0)
struct FAkWwiseObjectDetails {
	struct FString ItemName; // 0x0(0x10)
	struct FString ItemPath; // 0x10(0x10)
	struct FString ItemId; // 0x20(0x10)
};

// ScriptStruct AkAudio.AkSurfaceProperties
// Size : 0x40 (Inherited : 0x0)
struct FAkSurfaceProperties {
	unsigned char UnknownData_0[0x0040]; // 0x0(0x40)
};

// ScriptStruct AkAudio.AkEdgeInfo
// Size : 0x28 (Inherited : 0x0)
struct FAkEdgeInfo {
	unsigned char UnknownData_0[0x0028]; // 0x0(0x28)
};

// ScriptStruct AkAudio.AkPoly
// Size : 0x18 (Inherited : 0x0)
struct FAkPoly {
	struct UAkAcousticTexture* Texture; // 0x0(0x8)
	float Occlusion; // 0x8(0x4)
	bool EnableSurface; // 0xC(0x1)
	unsigned char UnknownData_D[0x0003]; // 0xD(0x3)
	float SurfaceArea; // 0x10(0x4)
	unsigned char UnknownData_14[0x0004]; // 0x14(0x4)
};

// ScriptStruct AkAudio.AkWaapiFieldNames
// Size : 0x10 (Inherited : 0x0)
struct FAkWaapiFieldNames {
	struct FString FieldName; // 0x0(0x10)
};

// ScriptStruct AkAudio.AkWaapiUri
// Size : 0x10 (Inherited : 0x0)
struct FAkWaapiUri {
	struct FString Uri; // 0x0(0x10)
};

// ScriptStruct AkAudio.AkWindowsAdvancedInitializationSettings
// Size : 0x38 (Inherited : 0x30)
struct FAkWindowsAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	bool UseHeadMountedDisplayAudioDevice; // 0x30(0x1)
	unsigned char UnknownData_31[0x0003]; // 0x31(0x3)
	uint32_t MaxSystemAudioObjects; // 0x34(0x4)
};

// ScriptStruct AkAudio.AkXboxOneApuHeapInitializationSettings
// Size : 0x8 (Inherited : 0x0)
struct FAkXboxOneApuHeapInitializationSettings {
	uint32_t CachedSize; // 0x0(0x4)
	uint32_t NonCachedSize; // 0x4(0x4)
};

// ScriptStruct AkAudio.AkXboxOneAdvancedInitializationSettings
// Size : 0x34 (Inherited : 0x30)
struct FAkXboxOneAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint16 MaximumNumberOfXMAVoices; // 0x30(0x2)
	bool UseHardwareCodecLowLatencyMode; // 0x32(0x1)
	unsigned char UnknownData_33[0x0001]; // 0x33(0x1)
};

// ScriptStruct AkAudio.AkAudioEventTrackKey
// Size : 0x20 (Inherited : 0x0)
struct FAkAudioEventTrackKey {
	float Time; // 0x0(0x4)
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	struct UAkAudioEvent* AkAudioEvent; // 0x8(0x8)
	struct FString EventName; // 0x10(0x10)
};

// ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
// Size : 0x28 (Inherited : 0x20)
struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate {
	struct UMovieSceneAkAudioEventSection* Section; // 0x20(0x8)
};

// ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
// Size : 0x28 (Inherited : 0x20)
struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate {
	struct UMovieSceneAkAudioRTPCSection* Section; // 0x20(0x8)
};

// ScriptStruct AkAudio.MovieSceneFloatChannelSerializationHelper
// Size : 0x30 (Inherited : 0x0)
struct FMovieSceneFloatChannelSerializationHelper {
	enum class ERichCurveExtrapolation PreInfinityExtrap; // 0x0(0x1)
	enum class ERichCurveExtrapolation PostInfinityExtrap; // 0x1(0x1)
	unsigned char UnknownData_2[0x0006]; // 0x2(0x6)
	struct TArray<int32_t> Times; // 0x8(0x10)
	struct TArray<struct FMovieSceneFloatValueSerializationHelper> Values; // 0x18(0x10)
	float DefaultValue; // 0x28(0x4)
	bool bHasDefaultValue; // 0x2C(0x1)
	unsigned char UnknownData_2D[0x0003]; // 0x2D(0x3)
};

// ScriptStruct AkAudio.MovieSceneFloatValueSerializationHelper
// Size : 0x1C (Inherited : 0x0)
struct FMovieSceneFloatValueSerializationHelper {
	float Value; // 0x0(0x4)
	enum class ERichCurveInterpMode InterpMode; // 0x4(0x1)
	enum class ERichCurveTangentMode TangentMode; // 0x5(0x1)
	unsigned char UnknownData_6[0x0002]; // 0x6(0x2)
	struct FMovieSceneTangentDataSerializationHelper Tangent; // 0x8(0x14)
};

// ScriptStruct AkAudio.MovieSceneTangentDataSerializationHelper
// Size : 0x14 (Inherited : 0x0)
struct FMovieSceneTangentDataSerializationHelper {
	float ArriveTangent; // 0x0(0x4)
	float LeaveTangent; // 0x4(0x4)
	enum class ERichCurveTangentWeightMode TangentWeightMode; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
	float ArriveTangentWeight; // 0xC(0x4)
	float LeaveTangentWeight; // 0x10(0x4)
};

