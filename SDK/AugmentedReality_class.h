// Class AugmentedReality.ARSessionConfig
// Size : 0xA8 (Inherited : 0x30)
struct UARSessionConfig : UDataAsset {
	bool bGenerateMeshDataFromTrackedGeometry; // 0x30(0x1)
	bool bGenerateCollisionForMeshData; // 0x31(0x1)
	bool bGenerateNavMeshForMeshData; // 0x32(0x1)
	bool bUseMeshDataForOcclusion; // 0x33(0x1)
	bool bRenderMeshDataInWireframe; // 0x34(0x1)
	bool bTrackSceneObjects; // 0x35(0x1)
	bool bUsePersonSegmentationForOcclusion; // 0x36(0x1)
	enum class EARWorldAlignment WorldAlignment; // 0x37(0x1)
	enum class EARSessionType SessionType; // 0x38(0x1)
	enum class EARPlaneDetectionMode PlaneDetectionMode; // 0x39(0x1)
	bool bHorizontalPlaneDetection; // 0x3A(0x1)
	bool bVerticalPlaneDetection; // 0x3B(0x1)
	bool bEnableAutoFocus; // 0x3C(0x1)
	enum class EARLightEstimationMode LightEstimationMode; // 0x3D(0x1)
	enum class EARFrameSyncMode FrameSyncMode; // 0x3E(0x1)
	bool bEnableAutomaticCameraOverlay; // 0x3F(0x1)
	bool bEnableAutomaticCameraTracking; // 0x40(0x1)
	bool bResetCameraTracking; // 0x41(0x1)
	bool bResetTrackedObjects; // 0x42(0x1)
	unsigned char UnknownData_43[0x0005]; // 0x43(0x5)
	struct TArray<struct UARCandidateImage*> CandidateImages; // 0x48(0x10)
	int32_t MaxNumSimultaneousImagesTracked; // 0x58(0x4)
	enum class EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType; // 0x5C(0x1)
	unsigned char UnknownData_5D[0x0003]; // 0x5D(0x3)
	struct TArray<enum class None> WorldMapData; // 0x60(0x10)
	struct TArray<struct UARCandidateObject*> CandidateObjects; // 0x70(0x10)
	struct FARVideoFormat DesiredVideoFormat; // 0x80(0xC)
	enum class EARFaceTrackingDirection FaceTrackingDirection; // 0x8C(0x1)
	enum class EARFaceTrackingUpdate FaceTrackingUpdate; // 0x8D(0x1)
	unsigned char UnknownData_8E[0x0002]; // 0x8E(0x2)
	struct TArray<enum class None> SerializedARCandidateImageDatabase; // 0x90(0x10)
	enum class EARSessionTrackingFeature EnabledSessionTrackingFeature; // 0xA0(0x1)
	unsigned char UnknownData_A1[0x0007]; // 0xA1(0x7)

	bool ShouldResetTrackedObjects(); // Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654A235D0
	bool ShouldResetCameraTracking(); // Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654A235A0
	bool ShouldRenderCameraOverlay(); // Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654A23570
	bool ShouldEnableCameraTracking(); // Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654A23540
	bool ShouldEnableAutoFocus(); // Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654A23510
	void SetWorldMapData(struct TArray<enum class None> WorldMapData); // Function AugmentedReality.ARSessionConfig.SetWorldMapData // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF654A23430
	void SetSessionTrackingFeatureToEnable(enum class EARSessionTrackingFeature InSessionTrackingFeature); // Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF654A233B0
	void SetResetTrackedObjects(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF654A23320
	void SetResetCameraTracking(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetResetCameraTracking // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF654A23290
	void SetFaceTrackingUpdate(enum class EARFaceTrackingUpdate InUpdate); // Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF654A23210
	void SetFaceTrackingDirection(enum class EARFaceTrackingDirection InDirection); // Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF654A23190
	void SetEnableAutoFocus(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF654A23100
	void SetDesiredVideoFormat(struct FARVideoFormat NewFormat); // Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat // (Final|Native|Public|BlueprintCallable) // Param Size : 0xC, 0x7FF654A23060
	void SetCandidateObjectList(struct TArray<struct UARCandidateObject*> InCandidateObjects); // Function AugmentedReality.ARSessionConfig.SetCandidateObjectList // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF654A22FB0
	struct TArray<enum class None> GetWorldMapData(); // Function AugmentedReality.ARSessionConfig.GetWorldMapData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF654A225A0
	enum class EARWorldAlignment GetWorldAlignment(); // Function AugmentedReality.ARSessionConfig.GetWorldAlignment // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654A22570
	enum class EARSessionType GetSessionType(); // Function AugmentedReality.ARSessionConfig.GetSessionType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF6532F9250
	enum class EARPlaneDetectionMode GetPlaneDetectionMode(); // Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654A22170
	int32_t GetMaxNumSimultaneousImagesTracked(); // Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF654A220B0
	enum class EARLightEstimationMode GetLightEstimationMode(); // Function AugmentedReality.ARSessionConfig.GetLightEstimationMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654A21D80
	enum class EARFrameSyncMode GetFrameSyncMode(); // Function AugmentedReality.ARSessionConfig.GetFrameSyncMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654A21D50
	enum class EARFaceTrackingUpdate GetFaceTrackingUpdate(); // Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654A21D20
	enum class EARFaceTrackingDirection GetFaceTrackingDirection(); // Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654A21CF0
	enum class EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType(); // Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654A21CC0
	enum class EARSessionTrackingFeature GetEnabledSessionTrackingFeature(); // Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654A21C90
	struct FARVideoFormat GetDesiredVideoFormat(); // Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xC, 0x7FF654A21B50
	struct TArray<struct UARCandidateObject*> GetCandidateObjectList(); // Function AugmentedReality.ARSessionConfig.GetCandidateObjectList // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF654A21A50
	struct TArray<struct UARCandidateImage*> GetCandidateImageList(); // Function AugmentedReality.ARSessionConfig.GetCandidateImageList // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF654A219C0
	void AddCandidateObject(struct UARCandidateObject* CandidateObject); // Function AugmentedReality.ARSessionConfig.AddCandidateObject // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF654A20C20
	void AddCandidateImage(struct UARCandidateImage* NewCandidateImage); // Function AugmentedReality.ARSessionConfig.AddCandidateImage // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF654A20BA0
};

// Class AugmentedReality.ARLightEstimate
// Size : 0x28 (Inherited : 0x28)
struct UARLightEstimate : UObject {
};

// Class AugmentedReality.ARBasicLightEstimate
// Size : 0x40 (Inherited : 0x28)
struct UARBasicLightEstimate : UARLightEstimate {
	float AmbientIntensityLumens; // 0x28(0x4)
	float AmbientColorTemperatureKelvin; // 0x2C(0x4)
	struct FLinearColor AmbientColor; // 0x30(0x10)

	float GetAmbientIntensityLumens(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF654A21930
	float GetAmbientColorTemperatureKelvin(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF654A21900
	struct FLinearColor GetAmbientColor(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF654A218C0
};

// Class AugmentedReality.ARCandidateImage
// Size : 0x58 (Inherited : 0x30)
struct UARCandidateImage : UDataAsset {
	struct UTexture2D* CandidateTexture; // 0x30(0x8)
	struct FString FriendlyName; // 0x38(0x10)
	float Width; // 0x48(0x4)
	float Height; // 0x4C(0x4)
	enum class EARCandidateImageOrientation Orientation; // 0x50(0x1)
	unsigned char UnknownData_51[0x0007]; // 0x51(0x7)

	float GetPhysicalWidth(); // Function AugmentedReality.ARCandidateImage.GetPhysicalWidth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF654A28320
	float GetPhysicalHeight(); // Function AugmentedReality.ARCandidateImage.GetPhysicalHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF654A28300
	enum class EARCandidateImageOrientation GetOrientation(); // Function AugmentedReality.ARCandidateImage.GetOrientation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654A282C0
	struct FString GetFriendlyName(); // Function AugmentedReality.ARCandidateImage.GetFriendlyName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF654A280E0
	struct UTexture2D* GetCandidateTexture(); // Function AugmentedReality.ARCandidateImage.GetCandidateTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF654A27F50
};

// Class AugmentedReality.ARBlueprintLibrary
// Size : 0x28 (Inherited : 0x28)
struct UARBlueprintLibrary : UBlueprintFunctionLibrary {

	void UnpinComponent(struct USceneComponent* ComponentToUnpin); // Function AugmentedReality.ARBlueprintLibrary.UnpinComponent // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF654A23690
	void StopARSession(); // Function AugmentedReality.ARBlueprintLibrary.StopARSession // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF654A23670
	void StartARSession(struct UARSessionConfig* SessionConfig); // Function AugmentedReality.ARBlueprintLibrary.StartARSession // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF654A23600
	void SetAlignmentTransform(struct FTransform InAlignmentTransform); // Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x30, 0x7FF654A22EE0
	void RemovePin(struct UARPin* PinToRemove); // Function AugmentedReality.ARBlueprintLibrary.RemovePin // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF654A22E70
	struct UARPin* PinComponentToTraceResult(struct USceneComponent* ComponentToPin, struct FARTraceResult TraceResult, struct FName DebugName); // Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x80, 0x7FF654A22CF0
	struct UARPin* PinComponent(struct USceneComponent* ComponentToPin, struct FTransform PinToWorldTransform, struct UARTrackedGeometry* TrackedGeometry, struct FName DebugName); // Function AugmentedReality.ARBlueprintLibrary.PinComponent // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x58, 0x7FF654A22B50
	void PauseARSession(); // Function AugmentedReality.ARBlueprintLibrary.PauseARSession // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF654A22B30
	struct TArray<struct FARTraceResult> LineTraceTrackedObjects3D(struct FVector Start, struct FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x30, 0x7FF654A22750
	struct TArray<struct FARTraceResult> LineTraceTrackedObjects(struct FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x20, 0x7FF654A22960
	bool IsSessionTypeSupported(enum class EARSessionType SessionType); // Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x2, 0x7FF654A226D0
	bool IsSessionTrackingFeatureSupported(enum class EARSessionType SessionType, enum class EARSessionTrackingFeature SessionTrackingFeature); // Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x3, 0x7FF654A22610
	bool IsARSupported(); // Function AugmentedReality.ARBlueprintLibrary.IsARSupported // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF6535D30D0
	enum class EARWorldMappingState GetWorldMappingStatus(); // Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF654A225E0
	enum class EARTrackingQualityReason GetTrackingQualityReason(); // Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF6532F13B0
	enum class EARTrackingQuality GetTrackingQuality(); // Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF654A22540
	struct TArray<struct FARVideoFormat> GetSupportedVideoFormats(enum class EARSessionType SessionType); // Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF654A22250
	struct UARSessionConfig* GetSessionConfig(); // Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x8, 0x7FF654A22220
	struct TArray<struct FVector> GetPointCloud(); // Function AugmentedReality.ARBlueprintLibrary.GetPointCloud // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF654A221A0
	struct UARTextureCameraImage* GetPersonSegmentationImage(); // Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF654A22110
	struct UARTextureCameraImage* GetPersonSegmentationDepthImage(); // Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF654A220E0
	struct UARLightEstimate* GetCurrentLightEstimate(); // Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x8, 0x7FF654A21AE0
	struct UARTextureCameraImage* GetCameraImage(); // Function AugmentedReality.ARBlueprintLibrary.GetCameraImage // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF654A21990
	struct UARTextureCameraDepth* GetCameraDepth(); // Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF654A21960
	struct FARSessionStatus GetARSessionStatus(); // Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x18, 0x7FF654A21370
	struct TArray<struct UARTrackedPose*> GetAllTrackedPoses(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF654A21840
	struct TArray<struct UARTrackedPoint*> GetAllTrackedPoints(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF654A217C0
	struct TArray<struct UARPlaneGeometry*> GetAllTrackedPlanes(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF654A21740
	struct TArray<struct UARTrackedImage*> GetAllTrackedImages(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF654A216C0
	struct TArray<struct UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF654A21640
	struct TArray<struct FARPose2D> GetAllTracked2DPoses(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF654A21500
	struct TArray<struct UARPin*> GetAllPins(); // Function AugmentedReality.ARBlueprintLibrary.GetAllPins // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF654A21480
	struct TArray<struct UARTrackedGeometry*> GetAllGeometries(); // Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF654A21400
	void DebugDrawTrackedGeometry(struct UARTrackedGeometry* TrackedGeometry, struct UObject* WorldContextObject, struct FLinearColor Color, float OutlineThickness, float PersistForSeconds); // Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x28, 0x7FF654A211E0
	void DebugDrawPin(struct UARPin* ARPin, struct UObject* WorldContextObject, struct FLinearColor Color, float Scale, float PersistForSeconds); // Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x28, 0x7FF654A21050
	struct UARCandidateImage* AddRuntimeCandidateImage(struct UARSessionConfig* SessionConfig, struct UTexture2D* CandidateTexture, struct FString FriendlyName, float PhysicalWidth); // Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x30, 0x7FF654A20D80
	bool AddManualEnvironmentCaptureProbe(struct FVector Location, struct FVector Extent); // Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x19, 0x7FF654A20CA0
};

// Class AugmentedReality.ARTraceResultLibrary
// Size : 0x28 (Inherited : 0x28)
struct UARTraceResultLibrary : UBlueprintFunctionLibrary {

	struct UARTrackedGeometry* GetTrackedGeometry(struct FARTraceResult TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x68, 0x7FF654A22440
	enum class EARLineTraceChannels GetTraceChannel(struct FARTraceResult TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x61, 0x7FF654A22310
	struct FTransform GetLocalToWorldTransform(struct FARTraceResult TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x90, 0x7FF654A21F90
	struct FTransform GetLocalToTrackingTransform(struct FARTraceResult TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x90, 0x7FF654A21E10
	float GetDistanceFromCamera(struct FARTraceResult TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x64, 0x7FF654A21B90
};

// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// Size : 0x50 (Inherited : 0x30)
struct UARBaseAsyncTaskBlueprintProxy : UBlueprintAsyncActionBase {
	unsigned char UnknownData_30[0x0020]; // 0x30(0x20)
};

// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// Size : 0x80 (Inherited : 0x50)
struct UARSaveWorldAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x50(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x60(0x10)
	unsigned char UnknownData_70[0x0010]; // 0x70(0x10)

	struct UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(struct UObject* WorldContextObject); // Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF654A20B20
};

// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// Size : 0x98 (Inherited : 0x50)
struct UARGetCandidateObjectAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x50(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x60(0x10)
	unsigned char UnknownData_70[0x0028]; // 0x70(0x28)

	struct UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(struct UObject* WorldContextObject, struct FVector Location, struct FVector Extent); // Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x28, 0x7FF654A20A00
};

// Class AugmentedReality.AROriginActor
// Size : 0x220 (Inherited : 0x220)
struct AAROriginActor : AActor {
};

// Class AugmentedReality.ARPin
// Size : 0xF0 (Inherited : 0x28)
struct UARPin : UObject {
	struct UARTrackedGeometry* TrackedGeometry; // 0x28(0x8)
	struct USceneComponent* PinnedComponent; // 0x30(0x8)
	unsigned char UnknownData_38[0x0008]; // 0x38(0x8)
	struct FTransform LocalToTrackingTransform; // 0x40(0x30)
	struct FTransform LocalToAlignedTrackingTransform; // 0x70(0x30)
	enum class EARTrackingState TrackingState; // 0xA0(0x1)
	unsigned char UnknownData_A1[0x001F]; // 0xA1(0x1F)
	struct FMulticastInlineDelegate OnARTrackingStateChanged; // 0xC0(0x10)
	struct FMulticastInlineDelegate OnARTransformUpdated; // 0xD0(0x10)
	unsigned char UnknownData_E0[0x0010]; // 0xE0(0x10)

	enum class EARTrackingState GetTrackingState(); // Function AugmentedReality.ARPin.GetTrackingState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654A21C90
	struct UARTrackedGeometry* GetTrackedGeometry(); // Function AugmentedReality.ARPin.GetTrackedGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF654A22410
	struct USceneComponent* GetPinnedComponent(); // Function AugmentedReality.ARPin.GetPinnedComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF654A22140
	struct FTransform GetLocalToWorldTransform(); // Function AugmentedReality.ARPin.GetLocalToWorldTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x30, 0x7FF654A21F30
	struct FTransform GetLocalToTrackingTransform(); // Function AugmentedReality.ARPin.GetLocalToTrackingTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x30, 0x7FF654A21DB0
	struct FName GetDebugName(); // Function AugmentedReality.ARPin.GetDebugName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF654A21B10
	void DebugDraw(struct UWorld* World, struct FLinearColor Color, float Scale, float PersistForSeconds); // Function AugmentedReality.ARPin.DebugDraw // (Native|Public|HasOutParms|HasDefaults|Const) // Param Size : 0x20, 0x7FF654A20F00
};

// Class AugmentedReality.ARSharedWorldGameMode
// Size : 0x370 (Inherited : 0x308)
struct AARSharedWorldGameMode : AGameMode {
	int32_t BufferSizePerChunk; // 0x308(0x4)
	unsigned char UnknownData_30C[0x0064]; // 0x30C(0x64)

	void SetPreviewImageData(struct TArray<enum class None> ImageData); // Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF654A288A0
	void SetARWorldSharingIsReady(); // Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF654A285D0
	void SetARSharedWorldData(struct TArray<enum class None> ARWorldData); // Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF654A284F0
	struct AARSharedWorldGameState* GetARSharedWorldGameState(); // Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF654A27B60
};

// Class AugmentedReality.ARSharedWorldGameState
// Size : 0x2C8 (Inherited : 0x290)
struct AARSharedWorldGameState : AGameState {
	struct TArray<enum class None> PreviewImageData; // 0x290(0x10)
	struct TArray<enum class None> ARWorldData; // 0x2A0(0x10)
	int32_t PreviewImageBytesTotal; // 0x2B0(0x4)
	int32_t ARWorldBytesTotal; // 0x2B4(0x4)
	int32_t PreviewImageBytesDelivered; // 0x2B8(0x4)
	int32_t ARWorldBytesDelivered; // 0x2BC(0x4)
	unsigned char UnknownData_2C0[0x0008]; // 0x2C0(0x8)

	void K2_OnARWorldMapIsReady(); // Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady // (Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
};

// Class AugmentedReality.ARSharedWorldPlayerController
// Size : 0x578 (Inherited : 0x570)
struct AARSharedWorldPlayerController : APlayerController {
	unsigned char UnknownData_570[0x0008]; // 0x570(0x8)

	void ServerMarkReadyForReceiving(); // Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving // (Net|NetReliable|Native|Event|Public|NetServer|NetValidate) // Param Size : 0x0, 0x7FF654A284A0
	void ClientUpdatePreviewImageData(int32_t Offset, struct TArray<enum class None> Buffer); // Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData // (Net|NetReliable|Native|Event|Public|NetClient|NetValidate) // Param Size : 0x18, 0x7FF654A27A60
	void ClientUpdateARWorldData(int32_t Offset, struct TArray<enum class None> Buffer); // Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData // (Net|NetReliable|Native|Event|Public|NetClient|NetValidate) // Param Size : 0x18, 0x7FF654A27960
	void ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize); // Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld // (Net|NetReliable|Native|Event|Public|NetClient|NetValidate) // Param Size : 0x8, 0x7FF654A27860
};

// Class AugmentedReality.ARSkyLight
// Size : 0x240 (Inherited : 0x230)
struct AARSkyLight : ASkyLight {
	struct UAREnvironmentCaptureProbe* CaptureProbe; // 0x230(0x8)
	unsigned char UnknownData_238[0x0008]; // 0x238(0x8)

	void SetEnvironmentCaptureProbe(struct UAREnvironmentCaptureProbe* InCaptureProbe); // Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF654A28740
};

// Class AugmentedReality.ARTexture
// Size : 0xD8 (Inherited : 0xB8)
struct UARTexture : UTexture {
	enum class EARTextureType TextureType; // 0xB8(0x1)
	unsigned char UnknownData_B9[0x0003]; // 0xB9(0x3)
	float Timestamp; // 0xBC(0x4)
	struct FGuid ExternalTextureGuid; // 0xC0(0x10)
	struct FVector2D Size; // 0xD0(0x8)
};

// Class AugmentedReality.ARTextureCameraImage
// Size : 0xD8 (Inherited : 0xD8)
struct UARTextureCameraImage : UARTexture {
};

// Class AugmentedReality.ARTextureCameraDepth
// Size : 0xE0 (Inherited : 0xD8)
struct UARTextureCameraDepth : UARTexture {
	enum class EARDepthQuality DepthQuality; // 0xD8(0x1)
	enum class EARDepthAccuracy DepthAccuracy; // 0xD9(0x1)
	bool bIsTemporallySmoothed; // 0xDA(0x1)
	unsigned char UnknownData_DB[0x0005]; // 0xDB(0x5)
};

// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// Size : 0x130 (Inherited : 0x110)
struct UAREnvironmentCaptureProbeTexture : UTextureCube {
	enum class EARTextureType TextureType; // 0x110(0x1)
	unsigned char UnknownData_111[0x0003]; // 0x111(0x3)
	float Timestamp; // 0x114(0x4)
	struct FGuid ExternalTextureGuid; // 0x118(0x10)
	struct FVector2D Size; // 0x128(0x8)
};

// Class AugmentedReality.ARTraceResultDummy
// Size : 0x28 (Inherited : 0x28)
struct UARTraceResultDummy : UObject {
};

// Class AugmentedReality.ARTrackedGeometry
// Size : 0xF0 (Inherited : 0x28)
struct UARTrackedGeometry : UObject {
	struct FGuid UniqueId; // 0x28(0x10)
	unsigned char UnknownData_38[0x0008]; // 0x38(0x8)
	struct FTransform LocalToTrackingTransform; // 0x40(0x30)
	struct FTransform LocalToAlignedTrackingTransform; // 0x70(0x30)
	enum class EARTrackingState TrackingState; // 0xA0(0x1)
	unsigned char UnknownData_A1[0x000F]; // 0xA1(0xF)
	struct UMRMeshComponent* UnderlyingMesh; // 0xB0(0x8)
	enum class EARObjectClassification ObjectClassification; // 0xB8(0x1)
	unsigned char UnknownData_B9[0x0017]; // 0xB9(0x17)
	int32_t LastUpdateFrameNumber; // 0xD0(0x4)
	unsigned char UnknownData_D4[0x000C]; // 0xD4(0xC)
	struct FName DebugName; // 0xE0(0x8)
	unsigned char UnknownData_E8[0x0008]; // 0xE8(0x8)

	bool IsTracked(); // Function AugmentedReality.ARTrackedGeometry.IsTracked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654A28470
	struct UMRMeshComponent* GetUnderlyingMesh(); // Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x8, 0x7FF654A28390
	enum class EARTrackingState GetTrackingState(); // Function AugmentedReality.ARTrackedGeometry.GetTrackingState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654A21C90
	enum class EARObjectClassification GetObjectClassification(); // Function AugmentedReality.ARTrackedGeometry.GetObjectClassification // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654A282A0
	struct FTransform GetLocalToWorldTransform(); // Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x30, 0x7FF654A28240
	struct FTransform GetLocalToTrackingTransform(); // Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x30, 0x7FF654A21DB0
	float GetLastUpdateTimestamp(); // Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF654A28170
	int32_t GetLastUpdateFrameNumber(); // Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF654A28140
	struct FName GetDebugName(); // Function AugmentedReality.ARTrackedGeometry.GetDebugName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF654A27FA0
};

// Class AugmentedReality.ARPlaneGeometry
// Size : 0x120 (Inherited : 0xF0)
struct UARPlaneGeometry : UARTrackedGeometry {
	enum class EARPlaneOrientation Orientation; // 0xE8(0x1)
	struct FVector Center; // 0xEC(0xC)
	struct FVector Extent; // 0xF8(0xC)
	unsigned char UnknownData_109[0x000F]; // 0x109(0xF)
	struct UARPlaneGeometry* SubsumedBy; // 0x118(0x8)

	struct UARPlaneGeometry* GetSubsumedBy(); // Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF654A28340
	enum class EARPlaneOrientation GetOrientation(); // Function AugmentedReality.ARPlaneGeometry.GetOrientation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654A282E0
	struct FVector GetExtent(); // Function AugmentedReality.ARPlaneGeometry.GetExtent // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xC, 0x7FF654A280B0
	struct FVector GetCenter(); // Function AugmentedReality.ARPlaneGeometry.GetCenter // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xC, 0x7FF654A27F70
	struct TArray<struct FVector> GetBoundaryPolygonInLocalSpace(); // Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF654A27E30
};

// Class AugmentedReality.ARTrackedPoint
// Size : 0xF0 (Inherited : 0xF0)
struct UARTrackedPoint : UARTrackedGeometry {
};

// Class AugmentedReality.ARTrackedImage
// Size : 0x100 (Inherited : 0xF0)
struct UARTrackedImage : UARTrackedGeometry {
	struct UARCandidateImage* DetectedImage; // 0xE8(0x8)
	struct FVector2D EstimatedSize; // 0xF0(0x8)

	struct FVector2D GetEstimateSize(); // Function AugmentedReality.ARTrackedImage.GetEstimateSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x8, 0x7FF654A28030
	struct UARCandidateImage* GetDetectedImage(); // Function AugmentedReality.ARTrackedImage.GetDetectedImage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF654A27FE0
};

// Class AugmentedReality.ARTrackedQRCode
// Size : 0x110 (Inherited : 0x100)
struct UARTrackedQRCode : UARTrackedImage {
	struct FString QRCode; // 0xF8(0x10)
	int32_t Version; // 0x108(0x4)
};

// Class AugmentedReality.ARFaceGeometry
// Size : 0x1E0 (Inherited : 0xF0)
struct UARFaceGeometry : UARTrackedGeometry {
	struct FVector LookAtTarget; // 0xE8(0xC)
	bool bIsTracked; // 0xF4(0x1)
	struct TMap<enum class EARFaceBlendShape, float> BlendShapes; // 0xF8(0x50)
	unsigned char UnknownData_14D[0x0093]; // 0x14D(0x93)

	struct FTransform GetWorldSpaceEyeTransform(enum class EAREye Eye); // Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x40, 0x7FF654A283C0
	struct FTransform GetLocalSpaceEyeTransform(enum class EAREye Eye); // Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x40, 0x7FF654A281A0
	float GetBlendShapeValue(enum class EARFaceBlendShape BlendShape); // Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF654A27B90
	struct TMap<enum class EARFaceBlendShape, float> GetBlendShapes(); // Function AugmentedReality.ARFaceGeometry.GetBlendShapes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x50, 0x7FF654A27C20
};

// Class AugmentedReality.AREnvironmentCaptureProbe
// Size : 0x100 (Inherited : 0xF0)
struct UAREnvironmentCaptureProbe : UARTrackedGeometry {
	unsigned char UnknownData_F0[0x0008]; // 0xF0(0x8)
	struct UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0xF8(0x8)

	struct FVector GetExtent(); // Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xC, 0x7FF654A28070
	struct UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture(); // Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x8, 0x7FF654A28000
};

// Class AugmentedReality.ARTrackedObject
// Size : 0xF0 (Inherited : 0xF0)
struct UARTrackedObject : UARTrackedGeometry {
	struct UARCandidateObject* DetectedObject; // 0xE8(0x8)

	struct UARCandidateObject* GetDetectedObject(); // Function AugmentedReality.ARTrackedObject.GetDetectedObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF654A27FE0
};

// Class AugmentedReality.ARTrackedPose
// Size : 0x140 (Inherited : 0xF0)
struct UARTrackedPose : UARTrackedGeometry {
	unsigned char UnknownData_F0[0x0050]; // 0xF0(0x50)

	struct FARPose3D GetTrackedPoseData(); // Function AugmentedReality.ARTrackedPose.GetTrackedPoseData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x50, 0x7FF654A28360
};

// Class AugmentedReality.ARTrackableNotifyComponent
// Size : 0x200 (Inherited : 0xB0)
struct UARTrackableNotifyComponent : UActorComponent {
	struct FMulticastInlineDelegate OnAddTrackedGeometry; // 0xB0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedGeometry; // 0xC0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedGeometry; // 0xD0(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPlane; // 0xE0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPlane; // 0xF0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPlane; // 0x100(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPoint; // 0x110(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPoint; // 0x120(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPoint; // 0x130(0x10)
	struct FMulticastInlineDelegate OnAddTrackedImage; // 0x140(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedImage; // 0x150(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedImage; // 0x160(0x10)
	struct FMulticastInlineDelegate OnAddTrackedFace; // 0x170(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedFace; // 0x180(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedFace; // 0x190(0x10)
	struct FMulticastInlineDelegate OnAddTrackedEnvProbe; // 0x1A0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedEnvProbe; // 0x1B0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedEnvProbe; // 0x1C0(0x10)
	struct FMulticastInlineDelegate OnAddTrackedObject; // 0x1D0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedObject; // 0x1E0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedObject; // 0x1F0(0x10)
};

// Class AugmentedReality.ARTypesDummyClass
// Size : 0x28 (Inherited : 0x28)
struct UARTypesDummyClass : UObject {
};

// Class AugmentedReality.ARCandidateObject
// Size : 0x70 (Inherited : 0x30)
struct UARCandidateObject : UDataAsset {
	struct TArray<enum class None> CandidateObjectData; // 0x30(0x10)
	struct FString FriendlyName; // 0x40(0x10)
	struct FBox BoundingBox; // 0x50(0x1C)
	unsigned char UnknownData_6C[0x0004]; // 0x6C(0x4)

	void SetFriendlyName(struct FString NewName); // Function AugmentedReality.ARCandidateObject.SetFriendlyName // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF654A287C0
	void SetCandidateObjectData(struct TArray<enum class None> InCandidateObject); // Function AugmentedReality.ARCandidateObject.SetCandidateObjectData // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF654A28690
	void SetBoundingBox(struct FBox InBoundingBox); // Function AugmentedReality.ARCandidateObject.SetBoundingBox // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x1C, 0x7FF654A285F0
	struct FString GetFriendlyName(); // Function AugmentedReality.ARCandidateObject.GetFriendlyName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF654A28110
	struct TArray<enum class None> GetCandidateObjectData(); // Function AugmentedReality.ARCandidateObject.GetCandidateObjectData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF654A27F20
	struct FBox GetBoundingBox(); // Function AugmentedReality.ARCandidateObject.GetBoundingBox // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1C, 0x7FF654A27EF0
};

