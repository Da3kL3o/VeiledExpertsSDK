// Class AkAudio.AkPortalComponent
// Size : 0x2B0 (Inherited : 0x1F0)
struct UAkPortalComponent : USceneComponent {
	bool bDynamic; // 0x1F0(0x1)
	enum class AkAcousticPortalState InitialState; // 0x1F1(0x1)
	unsigned char UnknownData_1F2[0x0002]; // 0x1F2(0x2)
	float ObstructionRefreshInterval; // 0x1F4(0x4)
	enum class ECollisionChannel ObstructionCollisionChannel; // 0x1F8(0x1)
	unsigned char UnknownData_1F9[0x00B7]; // 0x1F9(0xB7)

	bool PortalPlacementValid(); // Function AkAudio.AkPortalComponent.PortalPlacementValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF6532EDDB0
	void OpenPortal(); // Function AkAudio.AkPortalComponent.OpenPortal // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF6532EDD90
	struct UPrimitiveComponent* GetPrimitiveParent(); // Function AkAudio.AkPortalComponent.GetPrimitiveParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF6532EDC60
	enum class AkAcousticPortalState GetCurrentState(); // Function AkAudio.AkPortalComponent.GetCurrentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF6532EDB70
	void ClosePortal(); // Function AkAudio.AkPortalComponent.ClosePortal // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF6532EDA30
};

// Class AkAudio.AkAcousticPortal
// Size : 0x268 (Inherited : 0x258)
struct AAkAcousticPortal : AVolume {
	struct UAkPortalComponent* Portal; // 0x258(0x8)
	enum class AkAcousticPortalState InitialState; // 0x260(0x1)
	bool bRequiresStateMigration; // 0x261(0x1)
	unsigned char UnknownData_262[0x0006]; // 0x262(0x6)

	void OpenPortal(); // Function AkAudio.AkAcousticPortal.OpenPortal // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF6532EDD70
	enum class AkAcousticPortalState GetCurrentState(); // Function AkAudio.AkAcousticPortal.GetCurrentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF6532EDB40
	void ClosePortal(); // Function AkAudio.AkAcousticPortal.ClosePortal // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF6532EDA10
};

// Class AkAudio.AkAudioType
// Size : 0x40 (Inherited : 0x28)
struct UAkAudioType : UObject {
	uint32_t ShortID; // 0x28(0x4)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
	struct TArray<struct UObject*> UserData; // 0x30(0x10)
};

// Class AkAudio.AkAcousticTexture
// Size : 0x40 (Inherited : 0x40)
struct UAkAcousticTexture : UAkAudioType {
};

// Class AkAudio.AkAcousticTextureSetComponent
// Size : 0x210 (Inherited : 0x1F0)
struct UAkAcousticTextureSetComponent : USceneComponent {
	unsigned char UnknownData_1F0[0x0020]; // 0x1F0(0x20)
};

// Class AkAudio.AkAmbientSound
// Size : 0x260 (Inherited : 0x220)
struct AAkAmbientSound : AActor {
	struct UAkAudioEvent* AkAudioEvent; // 0x220(0x8)
	struct UAkComponent* AkComponent; // 0x228(0x8)
	bool StopWhenOwnerIsDestroyed; // 0x230(0x1)
	bool AutoPost; // 0x231(0x1)
	unsigned char UnknownData_232[0x002E]; // 0x232(0x2E)

	void StopAmbientSound(); // Function AkAudio.AkAmbientSound.StopAmbientSound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF6532EEEE0
	void StartAmbientSound(); // Function AkAudio.AkAmbientSound.StartAmbientSound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF6532EEEC0
};

// Class AkAudio.AkAndroidInitializationSettings
// Size : 0xF0 (Inherited : 0x28)
struct UAkAndroidInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xB8(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // Param Size : 0x1, 0x7FF6532EDCF0
};

// Class AkAudio.AkPlatformInfo
// Size : 0x70 (Inherited : 0x28)
struct UAkPlatformInfo : UObject {
	unsigned char UnknownData_28[0x0048]; // 0x28(0x48)
};

// Class AkAudio.AkAndroidPlatformInfo
// Size : 0x70 (Inherited : 0x70)
struct UAkAndroidPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkAssetData
// Size : 0x60 (Inherited : 0x28)
struct UAkAssetData : UObject {
	uint32_t CachedHash; // 0x28(0x4)
	unsigned char UnknownData_2C[0x0034]; // 0x2C(0x34)
};

// Class AkAudio.AkAssetDataWithMedia
// Size : 0x70 (Inherited : 0x60)
struct UAkAssetDataWithMedia : UAkAssetData {
	struct TArray<struct UAkMediaAsset*> MediaList; // 0x60(0x10)
};

// Class AkAudio.AkAssetPlatformData
// Size : 0x30 (Inherited : 0x28)
struct UAkAssetPlatformData : UObject {
	struct UAkAssetData* CurrentAssetData; // 0x28(0x8)
};

// Class AkAudio.AkAssetBase
// Size : 0x50 (Inherited : 0x40)
struct UAkAssetBase : UAkAudioType {
	struct UAkAssetPlatformData* PlatformAssetData; // 0x40(0x8)
	unsigned char UnknownData_48[0x0008]; // 0x48(0x8)
};

// Class AkAudio.AkAudioBank
// Size : 0x128 (Inherited : 0x50)
struct UAkAudioBank : UAkAssetBase {
	bool AutoLoad; // 0x50(0x1)
	unsigned char UnknownData_51[0x0007]; // 0x51(0x7)
	struct TMap<struct FString, struct TSoftObjectPtr<struct UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x58(0x50)
	struct TSet<struct TSoftObjectPtr<struct UAkAudioEvent>> LinkedAkEvents; // 0xA8(0x50)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformAssetData; // 0xF8(0x8)
	unsigned char UnknownData_100[0x0028]; // 0x100(0x28)
};

// Class AkAudio.AkAssetDataSwitchContainerData
// Size : 0x78 (Inherited : 0x28)
struct UAkAssetDataSwitchContainerData : UObject {
	struct TSoftObjectPtr<struct UAkGroupValue> GroupValue; // 0x28(0x28)
	struct UAkGroupValue* DefaultGroupValue; // 0x50(0x8)
	struct TArray<struct UAkMediaAsset*> MediaList; // 0x58(0x10)
	struct TArray<struct UAkAssetDataSwitchContainerData*> Children; // 0x68(0x10)
};

// Class AkAudio.AkAssetDataSwitchContainer
// Size : 0x88 (Inherited : 0x70)
struct UAkAssetDataSwitchContainer : UAkAssetDataWithMedia {
	struct TArray<struct UAkAssetDataSwitchContainerData*> SwitchContainers; // 0x70(0x10)
	struct UAkGroupValue* DefaultGroupValue; // 0x80(0x8)
};

// Class AkAudio.AkAudioEventData
// Size : 0x250 (Inherited : 0x88)
struct UAkAudioEventData : UAkAssetDataSwitchContainer {
	float MaxAttenuationRadius; // 0x88(0x4)
	bool IsInfinite; // 0x8C(0x1)
	unsigned char UnknownData_8D[0x0003]; // 0x8D(0x3)
	float MinimumDuration; // 0x90(0x4)
	float MaximumDuration; // 0x94(0x4)
	struct TMap<struct FString, struct UAkAssetDataSwitchContainer*> LocalizedMedia; // 0x98(0x50)
	struct TSet<struct UAkAudioEvent*> PostedEvents; // 0xE8(0x50)
	struct TSet<struct UAkAuxBus*> UserDefinedSends; // 0x138(0x50)
	struct TSet<struct UAkTrigger*> PostedTriggers; // 0x188(0x50)
	struct TSet<struct UAkGroupValue*> GroupValues; // 0x1D8(0x50)
	unsigned char UnknownData_228[0x0028]; // 0x228(0x28)
};

// Class AkAudio.AkAudioEvent
// Size : 0xE0 (Inherited : 0x50)
struct UAkAudioEvent : UAkAssetBase {
	struct TMap<struct FString, struct TSoftObjectPtr<struct UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x50(0x50)
	struct UAkAudioBank* RequiredBank; // 0xA0(0x8)
	unsigned char UnknownData_A8[0x0008]; // 0xA8(0x8)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformData; // 0xB0(0x8)
	float MaxAttenuationRadius; // 0xB8(0x4)
	bool IsInfinite; // 0xBC(0x1)
	unsigned char UnknownData_BD[0x0003]; // 0xBD(0x3)
	float MinimumDuration; // 0xC0(0x4)
	float MaximumDuration; // 0xC4(0x4)
	unsigned char UnknownData_C8[0x0018]; // 0xC8(0x18)

	float GetMinimumDuration(); // Function AkAudio.AkAudioEvent.GetMinimumDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF6532EDC30
	float GetMaximumDuration(); // Function AkAudio.AkAudioEvent.GetMaximumDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF6532EDC00
	float GetMaxAttenuationRadius(); // Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF6532EDBD0
	bool GetIsInfinite(); // Function AkAudio.AkAudioEvent.GetIsInfinite // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF6532EDBA0
};

// Class AkAudio.AkGameObject
// Size : 0x210 (Inherited : 0x1F0)
struct UAkGameObject : USceneComponent {
	struct UAkAudioEvent* AkAudioEvent; // 0x1F0(0x8)
	struct FString EventName; // 0x1F8(0x10)
	unsigned char UnknownData_208[0x0008]; // 0x208(0x8)

	void Stop(); // Function AkAudio.AkGameObject.Stop // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF6532F4490
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct FString RTPC); // Function AkAudio.AkGameObject.SetRTPCValue // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|Const) // Param Size : 0x20, 0x7FF6532F39C0
	void PostAssociatedAkEventAsync(struct UObject* WorldContextObject, int32_t CallbackMask, struct FDelegate PostEventCallback, struct TArray<struct FAkExternalSourceInfo> ExternalSources, struct FLatentActionInfo LatentInfo, int32_t PlayingID); // Function AkAudio.AkGameObject.PostAssociatedAkEventAsync // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x4C, 0x7FF6532F2370
	int32_t PostAssociatedAkEvent(int32_t CallbackMask, struct FDelegate PostEventCallback, struct TArray<struct FAkExternalSourceInfo> ExternalSources); // Function AkAudio.AkGameObject.PostAssociatedAkEvent // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x2C, 0x7FF6532F21E0
	void PostAkEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, int32_t PlayingID, int32_t CallbackMask, struct FDelegate PostEventCallback, struct TArray<struct FAkExternalSourceInfo> ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameObject.PostAkEventAsync // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x50, 0x7FF6532F1A60
	int32_t PostAkEvent(struct UAkAudioEvent* AkEvent, int32_t CallbackMask, struct FDelegate PostEventCallback, struct TArray<struct FAkExternalSourceInfo> ExternalSources, struct FString in_EventName); // Function AkAudio.AkGameObject.PostAkEvent // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x44, 0x7FF6532F1840
	void GetRTPCValue(struct UAkRtpc* RTPCValue, enum class ERTPCValueType InputValueType, float Value, enum class ERTPCValueType OutputValueType, struct FString RTPC, int32_t PlayingID); // Function AkAudio.AkGameObject.GetRTPCValue // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x2C, 0x7FF6532F0DF0
};

// Class AkAudio.AkComponent
// Size : 0x3E0 (Inherited : 0x210)
struct UAkComponent : UAkGameObject {
	bool bUseSpatialAudio; // 0x210(0x1)
	unsigned char UnknownData_211[0x0007]; // 0x211(0x7)
	enum class ECollisionChannel OcclusionCollisionChannel; // 0x218(0x1)
	unsigned char UnknownData_219[0x0003]; // 0x219(0x3)
	unsigned char EnableSpotReflectors : 1; // 0x21C(0x1)
	unsigned char UnknownData_21C_1 : 7; // 0x21C(0x1)
	unsigned char UnknownData_21D[0x0003]; // 0x21D(0x3)
	float OuterRadius; // 0x220(0x4)
	float InnerRadius; // 0x224(0x4)
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x228(0x8)
	struct FString EarlyReflectionAuxBusName; // 0x230(0x10)
	int32_t EarlyReflectionOrder; // 0x240(0x4)
	float EarlyReflectionBusSendGain; // 0x244(0x4)
	float EarlyReflectionMaxPathLength; // 0x248(0x4)
	float roomReverbAuxBusGain; // 0x24C(0x4)
	int32_t diffractionMaxEdges; // 0x250(0x4)
	int32_t diffractionMaxPaths; // 0x254(0x4)
	float diffractionMaxPathLength; // 0x258(0x4)
	unsigned char DrawFirstOrderReflections : 1; // 0x25C(0x1)
	unsigned char DrawSecondOrderReflections : 1; // 0x25C(0x1)
	unsigned char DrawHigherOrderReflections : 1; // 0x25C(0x1)
	unsigned char DrawDiffraction : 1; // 0x25C(0x1)
	unsigned char UnknownData_25C_4 : 4; // 0x25C(0x1)
	unsigned char UnknownData_25D[0x0003]; // 0x25D(0x3)
	bool StopWhenOwnerDestroyed; // 0x260(0x1)
	unsigned char UnknownData_261[0x0003]; // 0x261(0x3)
	float AttenuationScalingFactor; // 0x264(0x4)
	float OcclusionRefreshInterval; // 0x268(0x4)
	bool bUseReverbVolumes; // 0x26C(0x1)
	unsigned char UnknownData_26D[0x0173]; // 0x26D(0x173)

	void UseReverbVolumes(bool inUseReverbVolumes); // Function AkAudio.AkComponent.UseReverbVolumes // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF6532EF0E0
	void UseEarlyReflections(struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkComponent.UseEarlyReflections // (Final|Native|Public|BlueprintCallable) // Param Size : 0x28, 0x7FF6532EEF00
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct FString SwitchGroup, struct FString SwitchState); // Function AkAudio.AkComponent.SetSwitch // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x28, 0x7FF6532EED20
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed); // Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF6532EEC90
	void SetOutputBusVolume(float BusVolume); // Function AkAudio.AkComponent.SetOutputBusVolume // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF6532EEC10
	void SetListeners(struct TArray<struct UAkComponent*> Listeners); // Function AkAudio.AkComponent.SetListeners // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF6532EEB60
	void SetGameObjectRadius(float in_outerRadius, float in_innerRadius); // Function AkAudio.AkComponent.SetGameObjectRadius // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF6532EEA10
	void SetEarlyReflectionsVolume(float SendVolume); // Function AkAudio.AkComponent.SetEarlyReflectionsVolume // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF6532EE990
	void SetEarlyReflectionsAuxBus(struct FString AuxBusName); // Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF6532EE8F0
	void SetAttenuationScalingFactor(float Value); // Function AkAudio.AkComponent.SetAttenuationScalingFactor // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF6532EE7F0
	void PostTrigger(struct UAkTrigger* TriggerValue, struct FString Trigger); // Function AkAudio.AkComponent.PostTrigger // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF6532EE590
	void PostAssociatedAkEventAndWaitForEndAsync(int32_t PlayingID, struct TArray<struct FAkExternalSourceInfo> ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x30, 0x7FF6532EE3D0
	int32_t PostAssociatedAkEventAndWaitForEnd(struct TArray<struct FAkExternalSourceInfo> ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x2C, 0x7FF6532EE270
	int32_t PostAkEventByName(struct FString in_EventName); // Function AkAudio.AkComponent.PostAkEventByName // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x14, 0x7FF6532EE1C0
	void PostAkEventAndWaitForEndAsync(struct UAkAudioEvent* AkEvent, int32_t PlayingID, struct TArray<struct FAkExternalSourceInfo> ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x38, 0x7FF6532EDFF0
	int32_t PostAkEventAndWaitForEnd(struct UAkAudioEvent* AkEvent, struct FString in_EventName, struct TArray<struct FAkExternalSourceInfo> ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEnd // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x44, 0x7FF6532EDE10
	float GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF6532EDAE0
};

// Class AkAudio.AkAudioInputComponent
// Size : 0x3F0 (Inherited : 0x3E0)
struct UAkAudioInputComponent : UAkComponent {
	unsigned char UnknownData_3E0[0x0010]; // 0x3E0(0x10)

	int32_t PostAssociatedAudioInputEvent(); // Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF6532EE560
};

// Class AkAudio.AkAuxBus
// Size : 0x58 (Inherited : 0x50)
struct UAkAuxBus : UAkAssetBase {
	struct UAkAudioBank* RequiredBank; // 0x50(0x8)
};

// Class AkAudio.AkCheckBox
// Size : 0xB20 (Inherited : 0x120)
struct UAkCheckBox : UContentWidget {
	unsigned char UnknownData_120[0x0390]; // 0x120(0x390)
	enum class ECheckBoxState CheckedState; // 0x4B0(0x1)
	unsigned char UnknownData_4B1[0x0003]; // 0x4B1(0x3)
	struct FDelegate CheckedStateDelegate; // 0x4B4(0x10)
	unsigned char UnknownData_4C4[0x0004]; // 0x4C4(0x4)
	struct FCheckBoxStyle WidgetStyle; // 0x4C8(0x580)
	enum class EHorizontalAlignment HorizontalAlignment; // 0xA48(0x1)
	bool IsFocusable; // 0xA49(0x1)
	unsigned char UnknownData_A4A[0x0006]; // 0xA4A(0x6)
	struct FAkBoolPropertyToControl ThePropertyToControl; // 0xA50(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0xA60(0x40)
	struct FMulticastInlineDelegate AkOnCheckStateChanged; // 0xAA0(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0xAB0(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0xAC0(0x10)
	unsigned char UnknownData_AD0[0x0050]; // 0xAD0(0x50)

	void SetIsChecked(bool InIsChecked); // Function AkAudio.AkCheckBox.SetIsChecked // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF6532EEAD0
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function AkAudio.AkCheckBox.SetCheckedState // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF6532EE870
	void SetAkItemId(struct FGuid ItemId); // Function AkAudio.AkCheckBox.SetAkItemId // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF6532EE750
	void SetAkBoolProperty(struct FString ItemProperty); // Function AkAudio.AkCheckBox.SetAkBoolProperty // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF6532EE6B0
	bool IsPressed(); // Function AkAudio.AkCheckBox.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF6532EDCC0
	bool IsChecked(); // Function AkAudio.AkCheckBox.IsChecked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF6532EDC90
	enum class ECheckBoxState GetCheckedState(); // Function AkAudio.AkCheckBox.GetCheckedState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF6532EDB10
	struct FString GetAkProperty(); // Function AkAudio.AkCheckBox.GetAkProperty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF6532EDA90
	struct FGuid GetAkItemId(); // Function AkAudio.AkCheckBox.GetAkItemId // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF6532EDA50
};

// Class AkAudio.DrawPortalComponent
// Size : 0x410 (Inherited : 0x410)
struct UDrawPortalComponent : UPrimitiveComponent {
};

// Class AkAudio.DrawRoomComponent
// Size : 0x410 (Inherited : 0x410)
struct UDrawRoomComponent : UPrimitiveComponent {
};

// Class AkAudio.AkFolder
// Size : 0xB8 (Inherited : 0x40)
struct UAkFolder : UAkAudioType {
	struct FString UnrealFolderPath; // 0x40(0x10)
	struct FString WwiseFolderPath; // 0x50(0x10)
	unsigned char UnknownData_60[0x0058]; // 0x60(0x58)
};

// Class AkAudio.AkGameplayStatics
// Size : 0x28 (Inherited : 0x28)
struct UAkGameplayStatics : UBlueprintFunctionLibrary {

	void UseReverbVolumes(bool inUseReverbVolumes, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.UseReverbVolumes // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF6532F4AC0
	void UseEarlyReflections(struct AActor* Actor, struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkGameplayStatics.UseEarlyReflections // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x30, 0x7FF6532F48C0
	void UnloadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.UnloadBankByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF6532F4830
	void UnloadBankAsync(struct UAkAudioBank* Bank, struct FDelegate BankUnloadedCallback); // Function AkAudio.AkGameplayStatics.UnloadBankAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x18, 0x7FF6532F4750
	void UnloadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.UnloadBank // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x38, 0x7FF6532F45F0
	void StopProfilerCapture(); // Function AkAudio.AkGameplayStatics.StopProfilerCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF6532F45D0
	void StopOutputCapture(); // Function AkAudio.AkGameplayStatics.StopOutputCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF6532F45B0
	void StopAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StopAllAmbientSounds // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF6532F4540
	void StopAll(); // Function AkAudio.AkGameplayStatics.StopAll // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF6532F4520
	void StopActor(struct AActor* Actor); // Function AkAudio.AkGameplayStatics.StopActor // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF6532F44B0
	void StartProfilerCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartProfilerCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF6532F4400
	void StartOutputCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartOutputCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF6532F4370
	void StartAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StartAllAmbientSounds // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF6532F4300
	struct UAkComponent* SpawnAkComponentAtLocation(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, bool AutoPost, struct FString EventName, bool AutoDestroy); // Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x50, 0x7FF6532F40E0
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct AActor* Actor, struct FName SwitchGroup, struct FName SwitchState); // Function AkAudio.AkGameplayStatics.SetSwitch // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF6532F3FB0
	void SetState(struct UAkStateValue* StateValue, struct FName StateGroup, struct FName State); // Function AkAudio.AkGameplayStatics.SetState // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF6532F3EC0
	void SetSpeakerAngles(struct TArray<float> SpeakerAngles, float HeightAngle, struct FString DeviceShareset); // Function AkAudio.AkGameplayStatics.SetSpeakerAngles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x28, 0x7FF6532F3D80
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.SetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF6532F3B50
	void SetReflectionsOrder(int32_t Order, bool RefreshPaths); // Function AkAudio.AkGameplayStatics.SetReflectionsOrder // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x5, 0x7FF6532F3CD0
	void SetPanningRule(enum class PanningRule PanRule); // Function AkAudio.AkGameplayStatics.SetPanningRule // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF6532F3950
	void SetOutputBusVolume(float BusVolume, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetOutputBusVolume // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF6532F3890
	void SetOcclusionScalingFactor(float ScalingFactor); // Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF6532F3820
	void SetOcclusionRefreshInterval(float RefreshInterval, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF6532F3760
	void SetMultiplePositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultiplePositions // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x19, 0x7FF6532F3610
	void SetMultipleChannelMaskEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FAkChannelMask> ChannelMasks, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x29, 0x7FF6532F3440
	void SetMultipleChannelEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<enum class AkChannelConfiguration> ChannelMasks, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x29, 0x7FF6532F3280
	void SetCurrentAudioCultureAsync(struct FString AudioCulture, struct FDelegate Completed); // Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x20, 0x7FF6532F3190
	void SetCurrentAudioCulture(struct FString AudioCulture, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x30, 0x7FF6532F3050
	void SetBusConfig(struct FString BusName, enum class AkChannelConfiguration ChannelConfiguration); // Function AkAudio.AkGameplayStatics.SetBusConfig // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF6532F2F80
	void PostTrigger(struct UAkTrigger* TriggerValue, struct AActor* Actor, struct FName Trigger); // Function AkAudio.AkGameplayStatics.PostTrigger // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF6532F2E90
	void PostEventByName(struct FString EventName, struct AActor* Actor, bool bStopWhenAttachedToDestroyed); // Function AkAudio.AkGameplayStatics.PostEventByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x19, 0x7FF6532F2D80
	int32_t PostEventAttached(struct UAkAudioEvent* AkEvent, struct AActor* Actor, struct FName AttachPointName, bool bStopWhenAttachedToDestroyed, struct FString EventName); // Function AkAudio.AkGameplayStatics.PostEventAttached // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x34, 0x7FF6532F2BB0
	void PostEventAtLocationByName(struct FString EventName, struct FVector Location, struct FRotator Orientation, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PostEventAtLocationByName // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x30, 0x7FF6532F2A50
	int32_t PostEventAtLocation(struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, struct FString EventName, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PostEventAtLocation // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x3C, 0x7FF6532F28B0
	int32_t PostEvent(struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate PostEventCallback, struct TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed, struct FString EventName); // Function AkAudio.AkGameplayStatics.PostEvent // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x54, 0x7FF6532F25E0
	void PostAndWaitForEndOfEventAsync(struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t PlayingID, bool bStopWhenAttachedToDestroyed, struct TArray<struct FAkExternalSourceInfo> ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x40, 0x7FF6532F1FA0
	int32_t PostAndWaitForEndOfEvent(struct UAkAudioEvent* AkEvent, struct AActor* Actor, bool bStopWhenAttachedToDestroyed, struct TArray<struct FAkExternalSourceInfo> ExternalSources, struct FString EventName, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x54, 0x7FF6532F1D10
	void LoadInitBank(); // Function AkAudio.AkGameplayStatics.LoadInitBank // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF6532F1820
	void LoadBanks(struct TArray<struct UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks); // Function AkAudio.AkGameplayStatics.LoadBanks // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x11, 0x7FF6532F1730
	void LoadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.LoadBankByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF6532F16A0
	void LoadBankAsync(struct UAkAudioBank* Bank, struct FDelegate BankLoadedCallback); // Function AkAudio.AkGameplayStatics.LoadBankAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x18, 0x7FF6532F15C0
	void LoadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.LoadBank // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x38, 0x7FF6532F1460
	bool IsGame(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.IsGame // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF6532F13E0
	bool IsEditor(); // Function AkAudio.AkGameplayStatics.IsEditor // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF6532F13B0
	void GetSpeakerAngles(struct TArray<float> SpeakerAngles, float HeightAngle, struct FString DeviceShareset); // Function AkAudio.AkGameplayStatics.GetSpeakerAngles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x28, 0x7FF6532F1250
	void GetRTPCValue(struct UAkRtpc* RTPCValue, int32_t PlayingID, enum class ERTPCValueType InputValueType, float Value, enum class ERTPCValueType OutputValueType, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.GetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x28, 0x7FF6532F1030
	float GetOcclusionScalingFactor(); // Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF6532F0DC0
	struct FString GetCurrentAudioCulture(); // Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF6532F0D40
	struct TArray<struct FString> GetAvailableAudioCultures(); // Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF6532F0C60
	struct UObject* GetAkMediaAssetUserData(struct UAkMediaAsset* Instance, class UObject* Type); // Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF6532F0A10
	struct UAkComponent* GetAkComponent(struct USceneComponent* AttachToComponent, bool ComponentCreated, struct FName AttachPointName, struct FVector Location, enum class EAttachLocation LocationType); // Function AkAudio.AkGameplayStatics.GetAkComponent // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x30, 0x7FF6532F0AD0
	struct UObject* GetAkAudioTypeUserData(struct UAkAudioType* Instance, class UObject* Type); // Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF6532F0A10
	void ExecuteActionOnPlayingID(enum class AkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve); // Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0xD, 0x7FF6532F08E0
	void ExecuteActionOnEvent(struct UAkAudioEvent* AkEvent, enum class AkActionOnEventType ActionType, struct AActor* Actor, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve, int32_t PlayingID); // Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x24, 0x7FF6532F0730
	void ClearBanks(); // Function AkAudio.AkGameplayStatics.ClearBanks // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF6532F0710
	void CancelEventCallback(struct FDelegate PostEventCallback); // Function AkAudio.AkGameplayStatics.CancelEventCallback // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF6532F0670
	void AddOutputCaptureMarker(struct FString MarkerText); // Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF6532F05E0
};

// Class AkAudio.AkCallbackInfo
// Size : 0x30 (Inherited : 0x28)
struct UAkCallbackInfo : UObject {
	struct UAkComponent* AkComponent; // 0x28(0x8)
};

// Class AkAudio.AkEventCallbackInfo
// Size : 0x38 (Inherited : 0x30)
struct UAkEventCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x30(0x4)
	int32_t EventID; // 0x34(0x4)
};

// Class AkAudio.AkMIDIEventCallbackInfo
// Size : 0x48 (Inherited : 0x38)
struct UAkMIDIEventCallbackInfo : UAkEventCallbackInfo {
	unsigned char UnknownData_38[0x0010]; // 0x38(0x10)

	enum class EAkMidiEventType GetType(); // Function AkAudio.AkMIDIEventCallbackInfo.GetType // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF6532F9250
	bool GetProgramChange(struct FAkMidiProgramChange AsProgramChange); // Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x4, 0x7FF6532F91A0
	bool GetPitchBend(struct FAkMidiPitchBend AsPitchBend); // Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x9, 0x7FF6532F90F0
	bool GetNoteOn(struct FAkMidiNoteOnOff AsNoteOn); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x5, 0x7FF6532F9040
	bool GetNoteOff(struct FAkMidiNoteOnOff AsNoteOff); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x5, 0x7FF6532F8F90
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch AsNoteAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x5, 0x7FF6532F8EE0
	bool GetGeneric(struct FAkMidiGeneric AsGeneric); // Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x5, 0x7FF6532F8E30
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch AsChannelAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x4, 0x7FF6532F8D80
	enum class None GetChannel(); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannel // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF6532F8D50
	bool GetCc(struct FAkMidiCc AsCc); // Function AkAudio.AkMIDIEventCallbackInfo.GetCc // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x5, 0x7FF6532F8CA0
};

// Class AkAudio.AkMarkerCallbackInfo
// Size : 0x50 (Inherited : 0x38)
struct UAkMarkerCallbackInfo : UAkEventCallbackInfo {
	int32_t Identifier; // 0x38(0x4)
	int32_t Position; // 0x3C(0x4)
	struct FString Label; // 0x40(0x10)
};

// Class AkAudio.AkDurationCallbackInfo
// Size : 0x50 (Inherited : 0x38)
struct UAkDurationCallbackInfo : UAkEventCallbackInfo {
	float Duration; // 0x38(0x4)
	float EstimatedDuration; // 0x3C(0x4)
	int32_t AudioNodeID; // 0x40(0x4)
	int32_t MediaID; // 0x44(0x4)
	bool bStreaming; // 0x48(0x1)
	unsigned char UnknownData_49[0x0007]; // 0x49(0x7)
};

// Class AkAudio.AkMusicSyncCallbackInfo
// Size : 0x70 (Inherited : 0x30)
struct UAkMusicSyncCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x30(0x4)
	struct FAkSegmentInfo SegmentInfo; // 0x34(0x24)
	enum class EAkCallbackType MusicSyncType; // 0x58(0x1)
	unsigned char UnknownData_59[0x0007]; // 0x59(0x7)
	struct FString UserCueName; // 0x60(0x10)
};

// Class AkAudio.AkGeometryComponent
// Size : 0x390 (Inherited : 0x210)
struct UAkGeometryComponent : UAkAcousticTextureSetComponent {
	enum class AkMeshType MeshType; // 0x208(0x1)
	int32_t lod; // 0x20C(0x4)
	float WeldingThreshold; // 0x210(0x4)
	struct TMap<struct UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride; // 0x218(0x50)
	struct FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride; // 0x268(0x18)
	unsigned char bEnableDiffraction : 1; // 0x280(0x1)
	unsigned char bEnableDiffractionOnBoundaryEdges : 1; // 0x280(0x1)
	unsigned char UnknownData_281_2 : 6; // 0x281(0x1)
	unsigned char UnknownData_282[0x0006]; // 0x282(0x6)
	struct AActor* AssociatedRoom; // 0x288(0x8)
	unsigned char UnknownData_290[0x0010]; // 0x290(0x10)
	struct FAkGeometryData GeometryData; // 0x2A0(0x50)
	struct TMap<int32_t, float> SurfaceAreas; // 0x2F0(0x50)
	unsigned char UnknownData_340[0x0050]; // 0x340(0x50)

	void UpdateGeometry(); // Function AkAudio.AkGeometryComponent.UpdateGeometry // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF6532F92C0
	void SendGeometry(); // Function AkAudio.AkGeometryComponent.SendGeometry // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF6532F92A0
	void RemoveGeometry(); // Function AkAudio.AkGeometryComponent.RemoveGeometry // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF6532F9280
	void ConvertMesh(); // Function AkAudio.AkGeometryComponent.ConvertMesh // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF6532F8C80
};

// Class AkAudio.AkGroupValue
// Size : 0x68 (Inherited : 0x40)
struct UAkGroupValue : UAkAudioType {
	struct TArray<struct TSoftObjectPtr<struct UAkMediaAsset>> MediaDependencies; // 0x40(0x10)
	uint32_t GroupShortID; // 0x50(0x4)
	unsigned char UnknownData_54[0x0014]; // 0x54(0x14)
};

// Class AkAudio.AkHololensInitializationSettings
// Size : 0xF0 (Inherited : 0x28)
struct UAkHololensInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkHololensAdvancedInitializationSettings AdvancedSettings; // 0xB8(0x34)
	unsigned char UnknownData_EC[0x0004]; // 0xEC(0x4)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // Param Size : 0x1, 0x7FF6532EDCF0
};

// Class AkAudio.AkHololensPlatformInfo
// Size : 0x70 (Inherited : 0x70)
struct UAkHololensPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkInitBankAssetData
// Size : 0x80 (Inherited : 0x70)
struct UAkInitBankAssetData : UAkAssetDataWithMedia {
	struct TArray<struct FAkPluginInfo> PluginInfos; // 0x70(0x10)
};

// Class AkAudio.AkInitBank
// Size : 0x70 (Inherited : 0x50)
struct UAkInitBank : UAkAssetBase {
	struct TArray<struct FString> AvailableAudioCultures; // 0x50(0x10)
	struct FString DefaultLanguage; // 0x60(0x10)
};

// Class AkAudio.AkIOSInitializationSettings
// Size : 0xF8 (Inherited : 0x28)
struct UAkIOSInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkAudioSession AudioSession; // 0x90(0xC)
	unsigned char UnknownData_9C[0x0004]; // 0x9C(0x4)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xA0(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xC8(0x2C)
	unsigned char UnknownData_F4[0x0004]; // 0xF4(0x4)
};

// Class AkAudio.AkIOSPlatformInfo
// Size : 0x70 (Inherited : 0x70)
struct UAkIOSPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkItemBoolPropertiesConv
// Size : 0x28 (Inherited : 0x28)
struct UAkItemBoolPropertiesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkBoolPropertyToControlToText(struct FAkBoolPropertyToControl INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x28, 0x7FF6532FCC60
	struct FString Conv_FAkBoolPropertyToControlToString(struct FAkBoolPropertyToControl INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x20, 0x7FF6532FCB70
};

// Class AkAudio.AkItemBoolProperties
// Size : 0x148 (Inherited : 0x108)
struct UAkItemBoolProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x118(0x10)
	unsigned char UnknownData_128[0x0020]; // 0x128(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemBoolProperties.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF6532FD2B0
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemBoolProperties.GetSelectedProperty // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF6532FCEA0
	struct FString GetSearchText(); // Function AkAudio.AkItemBoolProperties.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF6532FCE20
};

// Class AkAudio.AkItemPropertiesConv
// Size : 0x28 (Inherited : 0x28)
struct UAkItemPropertiesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkPropertyToControlToText(struct FAkPropertyToControl INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x28, 0x7FF6532FCC60
	struct FString Conv_FAkPropertyToControlToString(struct FAkPropertyToControl INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x20, 0x7FF6532FCB70
};

// Class AkAudio.AkItemProperties
// Size : 0x148 (Inherited : 0x108)
struct UAkItemProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x118(0x10)
	unsigned char UnknownData_128[0x0020]; // 0x128(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemProperties.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF6532FD2B0
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemProperties.GetSelectedProperty // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF6532FCF20
	struct FString GetSearchText(); // Function AkAudio.AkItemProperties.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF6532FCE20
};

// Class AkAudio.AkLateReverbComponent
// Size : 0x280 (Inherited : 0x1F0)
struct UAkLateReverbComponent : USceneComponent {
	unsigned char bEnable : 1; // 0x1F0(0x1)
	unsigned char UnknownData_1F0_1 : 7; // 0x1F0(0x1)
	unsigned char UnknownData_1F1[0x0003]; // 0x1F1(0x3)
	float SendLevel; // 0x1F4(0x4)
	float FadeRate; // 0x1F8(0x4)
	float Priority; // 0x1FC(0x4)
	bool AutoAssignAuxBus; // 0x200(0x1)
	unsigned char UnknownData_201[0x0007]; // 0x201(0x7)
	struct UAkAuxBus* AuxBus; // 0x208(0x8)
	struct FString AuxBusName; // 0x210(0x10)
	unsigned char UnknownData_220[0x0008]; // 0x220(0x8)
	struct UAkAuxBus* AuxBusManual; // 0x228(0x8)
	unsigned char UnknownData_230[0x0050]; // 0x230(0x50)

	void AssociateAkTextureSetComponent(struct UAkAcousticTextureSetComponent* textureSetComponent); // Function AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF6532FCAF0
};

// Class AkAudio.AkLinuxInitializationSettings
// Size : 0xE8 (Inherited : 0x28)
struct UAkLinuxInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xB8(0x30)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // Param Size : 0x1, 0x7FF6532EDCF0
};

// Class AkAudio.AkLinuxPlatformInfo
// Size : 0x70 (Inherited : 0x70)
struct UAkLinuxPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkMacInitializationSettings
// Size : 0xE8 (Inherited : 0x28)
struct UAkMacInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xB8(0x30)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // Param Size : 0x1, 0x7FF6532EDCF0
};

// Class AkAudio.AkMacPlatformInfo
// Size : 0x70 (Inherited : 0x70)
struct UAkMacPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkMediaAssetData
// Size : 0x58 (Inherited : 0x28)
struct UAkMediaAssetData : UObject {
	bool IsStreamed; // 0x28(0x1)
	bool UseDeviceMemory; // 0x29(0x1)
	unsigned char UnknownData_2A[0x002E]; // 0x2A(0x2E)
};

// Class AkAudio.AkMediaAsset
// Size : 0x50 (Inherited : 0x28)
struct UAkMediaAsset : UObject {
	uint32_t ID; // 0x28(0x4)
	bool AutoLoad; // 0x2C(0x1)
	unsigned char UnknownData_2D[0x0003]; // 0x2D(0x3)
	struct TArray<struct UObject*> UserData; // 0x30(0x10)
	struct UAkMediaAssetData* CurrentMediaAssetData; // 0x40(0x8)
	unsigned char UnknownData_48[0x0008]; // 0x48(0x8)
};

// Class AkAudio.AkLocalizedMediaAsset
// Size : 0x50 (Inherited : 0x50)
struct UAkLocalizedMediaAsset : UAkMediaAsset {
};

// Class AkAudio.AkExternalMediaAsset
// Size : 0xB0 (Inherited : 0x50)
struct UAkExternalMediaAsset : UAkMediaAsset {
	unsigned char UnknownData_50[0x0060]; // 0x50(0x60)
};

// Class AkAudio.AkPS4InitializationSettings
// Size : 0xE8 (Inherited : 0x28)
struct UAkPS4InitializationSettings : UObject {
	struct FAkCommonInitializationSettings CommonSettings; // 0x28(0x60)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x88(0x28)
	struct FAkPS4AdvancedInitializationSettings AdvancedSettings; // 0xB0(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // Param Size : 0x1, 0x7FF6532FCFD0
};

// Class AkAudio.AkPS4PlatformInfo
// Size : 0x70 (Inherited : 0x70)
struct UAkPS4PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkReverbVolume
// Size : 0x290 (Inherited : 0x258)
struct AAkReverbVolume : AVolume {
	unsigned char bEnabled : 1; // 0x258(0x1)
	unsigned char UnknownData_258_1 : 7; // 0x258(0x1)
	unsigned char UnknownData_259[0x0007]; // 0x259(0x7)
	struct UAkAuxBus* AuxBus; // 0x260(0x8)
	struct FString AuxBusName; // 0x268(0x10)
	float SendLevel; // 0x278(0x4)
	float FadeRate; // 0x27C(0x4)
	float Priority; // 0x280(0x4)
	unsigned char UnknownData_284[0x0004]; // 0x284(0x4)
	struct UAkLateReverbComponent* LateReverbComponent; // 0x288(0x8)
};

// Class AkAudio.AkRoomComponent
// Size : 0x240 (Inherited : 0x210)
struct UAkRoomComponent : UAkGameObject {
	unsigned char bEnable : 1; // 0x210(0x1)
	unsigned char UnknownData_210_1 : 7; // 0x210(0x1)
	unsigned char UnknownData_211[0x0003]; // 0x211(0x3)
	bool bDynamic; // 0x214(0x1)
	unsigned char UnknownData_215[0x0003]; // 0x215(0x3)
	float Priority; // 0x218(0x4)
	float WallOcclusion; // 0x21C(0x4)
	float AuxSendLevel; // 0x220(0x4)
	bool AutoPost; // 0x224(0x1)
	unsigned char UnknownData_225[0x001B]; // 0x225(0x1B)

	struct UPrimitiveComponent* GetPrimitiveParent(); // Function AkAudio.AkRoomComponent.GetPrimitiveParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF6532FCDF0
};

// Class AkAudio.AkRtpc
// Size : 0x40 (Inherited : 0x40)
struct UAkRtpc : UAkAudioType {
};

// Class AkAudio.AkSettings
// Size : 0x2B8 (Inherited : 0x28)
struct UAkSettings : UObject {
	enum class None MaxSimultaneousReverbVolumes; // 0x28(0x1)
	unsigned char UnknownData_29[0x0007]; // 0x29(0x7)
	struct FFilePath WwiseProjectPath; // 0x30(0x10)
	struct FDirectoryPath WwiseSoundDataFolder; // 0x40(0x10)
	bool bAutoConnectToWAAPI; // 0x50(0x1)
	enum class ECollisionChannel DefaultOcclusionCollisionChannel; // 0x51(0x1)
	enum class ECollisionChannel DefaultFitToGeometryCollisionChannel; // 0x52(0x1)
	unsigned char UnknownData_53[0x0005]; // 0x53(0x5)
	struct TMap<struct TSoftObjectPtr<struct UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap> AkGeometryMap; // 0x58(0x50)
	float GlobalDecayAbsorption; // 0xA8(0x4)
	unsigned char UnknownData_AC[0x0004]; // 0xAC(0x4)
	struct TSoftObjectPtr<struct UAkAuxBus> DefaultReverbAuxBus; // 0xB0(0x28)
	struct TMap<float, struct TSoftObjectPtr<struct UAkAuxBus>> EnvironmentDecayAuxBusMap; // 0xD8(0x50)
	struct FString HFDampingName; // 0x128(0x10)
	struct FString DecayEstimateName; // 0x138(0x10)
	struct FString TimeToFirstReflectionName; // 0x148(0x10)
	struct TSoftObjectPtr<struct UAkRtpc> HFDampingRTPC; // 0x158(0x28)
	struct TSoftObjectPtr<struct UAkRtpc> DecayEstimateRTPC; // 0x180(0x28)
	struct TSoftObjectPtr<struct UAkRtpc> TimeToFirstReflectionRTPC; // 0x1A8(0x28)
	struct TMap<struct FGuid, struct FAkAcousticTextureParams> AcousticTextureParamsMap; // 0x1D0(0x50)
	bool SplitSwitchContainerMedia; // 0x220(0x1)
	bool SplitMediaPerFolder; // 0x221(0x1)
	bool UseEventBasedPackaging; // 0x222(0x1)
	bool EnableAutomaticAssetSynchronization; // 0x223(0x1)
	unsigned char UnknownData_224[0x0004]; // 0x224(0x4)
	struct FString CommandletCommitMessage; // 0x228(0x10)
	struct TMap<struct FString, struct FString> UnrealCultureToWwiseCulture; // 0x238(0x50)
	bool AskedToUseNewAssetManagement; // 0x288(0x1)
	bool bEnableMultiCoreRendering; // 0x289(0x1)
	bool MigratedEnableMultiCoreRendering; // 0x28A(0x1)
	bool FixupRedirectorsDuringMigration; // 0x28B(0x1)
	unsigned char UnknownData_28C[0x0004]; // 0x28C(0x4)
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x290(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x2A0(0x10)
	unsigned char UnknownData_2B0[0x0008]; // 0x2B0(0x8)
};

// Class AkAudio.AkSettingsPerUser
// Size : 0x80 (Inherited : 0x28)
struct UAkSettingsPerUser : UObject {
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x28(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x38(0x10)
	bool EnableAutomaticAssetSynchronization; // 0x48(0x1)
	unsigned char UnknownData_49[0x0007]; // 0x49(0x7)
	struct FString WaapiIPAddress; // 0x50(0x10)
	uint32_t WaapiPort; // 0x60(0x4)
	bool bAutoConnectToWAAPI; // 0x64(0x1)
	bool AutoSyncSelection; // 0x65(0x1)
	bool SuppressWwiseProjectPathWarnings; // 0x66(0x1)
	bool SoundDataGenerationSkipLanguage; // 0x67(0x1)
	unsigned char UnknownData_68[0x0018]; // 0x68(0x18)
};

// Class AkAudio.AkSlider
// Size : 0x530 (Inherited : 0x108)
struct UAkSlider : UWidget {
	float Value; // 0x108(0x4)
	struct FDelegate ValueDelegate; // 0x10C(0x10)
	unsigned char UnknownData_11C[0x0004]; // 0x11C(0x4)
	struct FSliderStyle WidgetStyle; // 0x120(0x340)
	enum class EOrientation Orientation; // 0x460(0x1)
	unsigned char UnknownData_461[0x0003]; // 0x461(0x3)
	struct FLinearColor SliderBarColor; // 0x464(0x10)
	struct FLinearColor SliderHandleColor; // 0x474(0x10)
	bool IndentHandle; // 0x484(0x1)
	bool Locked; // 0x485(0x1)
	unsigned char UnknownData_486[0x0002]; // 0x486(0x2)
	float StepSize; // 0x488(0x4)
	bool IsFocusable; // 0x48C(0x1)
	unsigned char UnknownData_48D[0x0003]; // 0x48D(0x3)
	struct FAkPropertyToControl ThePropertyToControl; // 0x490(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0x4A0(0x40)
	struct FMulticastInlineDelegate OnValueChanged; // 0x4E0(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0x4F0(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0x500(0x10)
	unsigned char UnknownData_510[0x0020]; // 0x510(0x20)

	void SetValue(float InValue); // Function AkAudio.AkSlider.SetValue // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF6532FD4D0
	void SetStepSize(float InValue); // Function AkAudio.AkSlider.SetStepSize // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF6532FD450
	void SetSliderHandleColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF6532FD3D0
	void SetSliderBarColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF6532FD350
	void SetLocked(bool InValue); // Function AkAudio.AkSlider.SetLocked // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF6532FD220
	void SetIndentHandle(bool InValue); // Function AkAudio.AkSlider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF6532FD190
	void SetAkSliderItemProperty(struct FString ItemProperty); // Function AkAudio.AkSlider.SetAkSliderItemProperty // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF6532FD0F0
	void SetAkSliderItemId(struct FGuid ItemId); // Function AkAudio.AkSlider.SetAkSliderItemId // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF6532FD050
	float GetValue(); // Function AkAudio.AkSlider.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF6532FCFA0
	struct FString GetAkSliderItemProperty(); // Function AkAudio.AkSlider.GetAkSliderItemProperty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF6532FCDA0
	struct FGuid GetAkSliderItemId(); // Function AkAudio.AkSlider.GetAkSliderItemId // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF6532FCD60
};

// Class AkAudio.AkSpatialAudioVolume
// Size : 0x270 (Inherited : 0x258)
struct AAkSpatialAudioVolume : AVolume {
	struct UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // 0x258(0x8)
	struct UAkLateReverbComponent* LateReverb; // 0x260(0x8)
	struct UAkRoomComponent* Room; // 0x268(0x8)
};

// Class AkAudio.AkSpotReflector
// Size : 0x248 (Inherited : 0x220)
struct AAkSpotReflector : AActor {
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x220(0x8)
	struct FString EarlyReflectionAuxBusName; // 0x228(0x10)
	struct UAkAcousticTexture* AcousticTexture; // 0x238(0x8)
	float DistanceScalingFactor; // 0x240(0x4)
	float Level; // 0x244(0x4)
};

// Class AkAudio.AkStateValue
// Size : 0x68 (Inherited : 0x68)
struct UAkStateValue : UAkGroupValue {
};

// Class AkAudio.AkSurfaceReflectorSetComponent
// Size : 0x240 (Inherited : 0x210)
struct UAkSurfaceReflectorSetComponent : UAkAcousticTextureSetComponent {
	unsigned char bEnableSurfaceReflectors : 1; // 0x208(0x1)
	struct TArray<struct FAkPoly> AcousticPolys; // 0x210(0x10)
	unsigned char bEnableDiffraction : 1; // 0x220(0x1)
	unsigned char bEnableDiffractionOnBoundaryEdges : 1; // 0x220(0x1)
	unsigned char UnknownData_220_3 : 5; // 0x220(0x1)
	unsigned char UnknownData_221[0x0007]; // 0x221(0x7)
	struct AActor* AssociatedRoom; // 0x228(0x8)
	unsigned char UnknownData_230[0x0010]; // 0x230(0x10)

	void UpdateSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF653302D40
	void SendSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF653301D30
	void RemoveSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF6532F9280
};

// Class AkAudio.AkSwitchInitializationSettings
// Size : 0xE8 (Inherited : 0x28)
struct UAkSwitchInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithCommSelection CommunicationSettings; // 0x90(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xB8(0x30)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // Param Size : 0x1, 0x7FF6532EDCF0
};

// Class AkAudio.AkSwitchPlatformInfo
// Size : 0x70 (Inherited : 0x70)
struct UAkSwitchPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkSwitchValue
// Size : 0x68 (Inherited : 0x68)
struct UAkSwitchValue : UAkGroupValue {
};

// Class AkAudio.AkTrigger
// Size : 0x40 (Inherited : 0x40)
struct UAkTrigger : UAkAudioType {
};

// Class AkAudio.AkTVOSInitializationSettings
// Size : 0xF8 (Inherited : 0x28)
struct UAkTVOSInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkAudioSession AudioSession; // 0x90(0xC)
	unsigned char UnknownData_9C[0x0004]; // 0x9C(0x4)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xA0(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xC8(0x2C)
	unsigned char UnknownData_F4[0x0004]; // 0xF4(0x4)
};

// Class AkAudio.AkTVOSPlatformInfo
// Size : 0x70 (Inherited : 0x70)
struct UAkTVOSPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWaapiCalls
// Size : 0x28 (Inherited : 0x28)
struct UAkWaapiCalls : UBlueprintFunctionLibrary {

	struct FAKWaapiJsonObject Unsubscribe(struct FAkWaapiSubscriptionId SubscriptionId, bool UnsubscriptionDone); // Function AkAudio.AkWaapiCalls.Unsubscribe // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x20, 0x7FF653302C20
	struct FAKWaapiJsonObject SubscribeToWaapi(struct FAkWaapiUri WaapiUri, struct FAKWaapiJsonObject WaapiOptions, struct FDelegate Callback, struct FAkWaapiSubscriptionId SubscriptionId, bool SubscriptionDone); // Function AkAudio.AkWaapiCalls.SubscribeToWaapi // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x50, 0x7FF6533029B0
	void SetSubscriptionID(struct FAkWaapiSubscriptionId Subscription, int32_t ID); // Function AkAudio.AkWaapiCalls.SetSubscriptionID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0xC, 0x7FF6533028E0
	bool RegisterWaapiProjectLoadedCallback(struct FDelegate Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x11, 0x7FF653301C80
	bool RegisterWaapiConnectionLostCallback(struct FDelegate Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x11, 0x7FF653301BD0
	int32_t GetSubscriptionID(struct FAkWaapiSubscriptionId Subscription); // Function AkAudio.AkWaapiCalls.GetSubscriptionID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0xC, 0x7FF653301B40
	struct FText Conv_FAkWaapiSubscriptionIdToText(struct FAkWaapiSubscriptionId INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x20, 0x7FF653301020
	struct FString Conv_FAkWaapiSubscriptionIdToString(struct FAkWaapiSubscriptionId INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x18, 0x7FF653300F50
	struct FAKWaapiJsonObject CallWaapi(struct FAkWaapiUri WaapiUri, struct FAKWaapiJsonObject WaapiArgs, struct FAKWaapiJsonObject WaapiOptions); // Function AkAudio.AkWaapiCalls.CallWaapi // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x40, 0x7FF653300B20
};

// Class AkAudio.SAkWaapiFieldNamesConv
// Size : 0x28 (Inherited : 0x28)
struct USAkWaapiFieldNamesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkWaapiFieldNamesToText(struct FAkWaapiFieldNames INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x28, 0x7FF6532FCC60
	struct FString Conv_FAkWaapiFieldNamesToString(struct FAkWaapiFieldNames INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x20, 0x7FF6532FCB70
};

// Class AkAudio.AkWaapiJsonManager
// Size : 0x28 (Inherited : 0x28)
struct UAkWaapiJsonManager : UBlueprintFunctionLibrary {

	struct FAKWaapiJsonObject SetStringField(struct FAkWaapiFieldNames FieldName, struct FString FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetStringField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x40, 0x7FF653302710
	struct FAKWaapiJsonObject SetObjectField(struct FAkWaapiFieldNames FieldName, struct FAKWaapiJsonObject FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetObjectField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x40, 0x7FF653302500
	struct FAKWaapiJsonObject SetNumberField(struct FAkWaapiFieldNames FieldName, float FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetNumberField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x38, 0x7FF653302340
	struct FAKWaapiJsonObject SetBoolField(struct FAkWaapiFieldNames FieldName, bool FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetBoolField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x38, 0x7FF653302170
	struct FAKWaapiJsonObject SetArrayStringFields(struct FAkWaapiFieldNames FieldName, struct TArray<struct FString> FieldStringValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayStringFields // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x40, 0x7FF653301F70
	struct FAKWaapiJsonObject SetArrayObjectFields(struct FAkWaapiFieldNames FieldName, struct TArray<struct FAKWaapiJsonObject> FieldObjectValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x40, 0x7FF653301D50
	struct FString GetStringField(struct FAkWaapiFieldNames FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetStringField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x30, 0x7FF6533019B0
	struct FAKWaapiJsonObject GetObjectField(struct FAkWaapiFieldNames FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetObjectField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x30, 0x7FF653301710
	float GetNumberField(struct FAkWaapiFieldNames FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetNumberField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x24, 0x7FF6533015D0
	int32_t GetIntegerField(struct FAkWaapiFieldNames FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetIntegerField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x24, 0x7FF653301490
	bool GetBoolField(struct FAkWaapiFieldNames FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetBoolField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x21, 0x7FF653301350
	struct TArray<struct FAKWaapiJsonObject> GetArrayField(struct FAkWaapiFieldNames FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetArrayField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x30, 0x7FF653301110
	struct FText Conv_FAKWaapiJsonObjectToText(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x28, 0x7FF653300E30
	struct FString Conv_FAKWaapiJsonObjectToString(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x20, 0x7FF653300D20
};

// Class AkAudio.AkWaapiUriConv
// Size : 0x28 (Inherited : 0x28)
struct UAkWaapiUriConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkWaapiUriToText(struct FAkWaapiUri INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x28, 0x7FF6532FCC60
	struct FString Conv_FAkWaapiUriToString(struct FAkWaapiUri INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x20, 0x7FF6532FCB70
};

// Class AkAudio.AkWindowsInitializationSettings
// Size : 0xF0 (Inherited : 0x28)
struct UAkWindowsInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xB8(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // Param Size : 0x1, 0x7FF6532EDCF0
};

// Class AkAudio.AkWin32PlatformInfo
// Size : 0x70 (Inherited : 0x70)
struct UAkWin32PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWin64PlatformInfo
// Size : 0x70 (Inherited : 0x70)
struct UAkWin64PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWindowsPlatformInfo
// Size : 0x70 (Inherited : 0x70)
struct UAkWindowsPlatformInfo : UAkWin64PlatformInfo {
};

// Class AkAudio.AkWwiseTree
// Size : 0x148 (Inherited : 0x108)
struct UAkWwiseTree : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x118(0x10)
	unsigned char UnknownData_128[0x0020]; // 0x128(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkWwiseTree.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF6532FD2B0
	struct FAkWwiseObjectDetails GetSelectedItem(); // Function AkAudio.AkWwiseTree.GetSelectedItem // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x30, 0x7FF653301890
	struct FString GetSearchText(); // Function AkAudio.AkWwiseTree.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF6532FCE20
};

// Class AkAudio.AkWwiseTreeSelector
// Size : 0x168 (Inherited : 0x108)
struct UAkWwiseTreeSelector : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x118(0x10)
	unsigned char UnknownData_128[0x0040]; // 0x128(0x40)
};

// Class AkAudio.AkXboxOneInitializationSettings
// Size : 0xF0 (Inherited : 0x28)
struct UAkXboxOneInitializationSettings : UObject {
	struct FAkCommonInitializationSettings CommonSettings; // 0x28(0x60)
	struct FAkXboxOneApuHeapInitializationSettings ApuHeapSettings; // 0x88(0x8)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkXboxOneAdvancedInitializationSettings AdvancedSettings; // 0xB8(0x34)
	unsigned char UnknownData_EC[0x0004]; // 0xEC(0x4)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // Param Size : 0x1, 0x7FF6532EDCF0
};

// Class AkAudio.AkXboxOnePlatformInfo
// Size : 0x70 (Inherited : 0x70)
struct UAkXboxOnePlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.InterpTrackAkAudioEvent
// Size : 0xA8 (Inherited : 0x90)
struct UInterpTrackAkAudioEvent : UInterpTrackVectorBase {
	struct TArray<struct FAkAudioEventTrackKey> Events; // 0x90(0x10)
	unsigned char bContinueEventOnMatineeEnd : 1; // 0xA0(0x1)
	unsigned char UnknownData_A0_1 : 7; // 0xA0(0x1)
	unsigned char UnknownData_A1[0x0007]; // 0xA1(0x7)
};

// Class AkAudio.InterpTrackAkAudioRTPC
// Size : 0xA8 (Inherited : 0x90)
struct UInterpTrackAkAudioRTPC : UInterpTrackFloatBase {
	struct FString Param; // 0x90(0x10)
	unsigned char bPlayOnReverse : 1; // 0xA0(0x1)
	unsigned char bContinueRTPCOnMatineeEnd : 1; // 0xA0(0x1)
	unsigned char UnknownData_A0_2 : 6; // 0xA0(0x1)
	unsigned char UnknownData_A1[0x0007]; // 0xA1(0x7)
};

// Class AkAudio.InterpTrackInstAkAudioEvent
// Size : 0x30 (Inherited : 0x28)
struct UInterpTrackInstAkAudioEvent : UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x4)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
};

// Class AkAudio.InterpTrackInstAkAudioRTPC
// Size : 0x30 (Inherited : 0x28)
struct UInterpTrackInstAkAudioRTPC : UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x4)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
};

// Class AkAudio.MovieSceneAkAudioEventSection
// Size : 0x1C8 (Inherited : 0xE0)
struct UMovieSceneAkAudioEventSection : UMovieSceneSection {
	unsigned char UnknownData_E0[0x0040]; // 0xE0(0x40)
	struct UAkAudioEvent* Event; // 0x120(0x8)
	bool RetriggerEvent; // 0x128(0x1)
	unsigned char UnknownData_129[0x0003]; // 0x129(0x3)
	int32_t ScrubTailLengthMs; // 0x12C(0x4)
	bool StopAtSectionEnd; // 0x130(0x1)
	unsigned char UnknownData_131[0x0007]; // 0x131(0x7)
	struct FString EventName; // 0x138(0x10)
	unsigned char UnknownData_148[0x0020]; // 0x148(0x20)
	float MaxSourceDuration; // 0x168(0x4)
	unsigned char UnknownData_16C[0x0004]; // 0x16C(0x4)
	struct FString MaxDurationSourceID; // 0x170(0x10)
	unsigned char UnknownData_180[0x0048]; // 0x180(0x48)
};

// Class AkAudio.MovieSceneAkTrack
// Size : 0x70 (Inherited : 0x58)
struct UMovieSceneAkTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
	unsigned char bIsAMasterTrack : 1; // 0x68(0x1)
	unsigned char UnknownData_68_1 : 7; // 0x68(0x1)
	unsigned char UnknownData_69[0x0007]; // 0x69(0x7)
};

// Class AkAudio.MovieSceneAkAudioEventTrack
// Size : 0x70 (Inherited : 0x70)
struct UMovieSceneAkAudioEventTrack : UMovieSceneAkTrack {
};

// Class AkAudio.MovieSceneAkAudioRTPCSection
// Size : 0x248 (Inherited : 0xE0)
struct UMovieSceneAkAudioRTPCSection : UMovieSceneSection {
	struct UAkRtpc* RTPC; // 0xE0(0x8)
	struct FString Name; // 0xE8(0x10)
	struct FRichCurve FloatCurve; // 0xF8(0x80)
	struct FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x178(0x30)
	struct FMovieSceneFloatChannel RTPCChannel; // 0x1A8(0xA0)
};

// Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size : 0x70 (Inherited : 0x70)
struct UMovieSceneAkAudioRTPCTrack : UMovieSceneAkTrack {
};

// Class AkAudio.PDAkAcousticTextureSetComponent
// Size : 0x240 (Inherited : 0x210)
struct UPDAkAcousticTextureSetComponent : UAkAcousticTextureSetComponent {
	unsigned char bEnableSurfaceReflectors : 1; // 0x208(0x1)
	struct TArray<struct FAkPoly> AcousticPolys; // 0x210(0x10)
	unsigned char bEnableDiffraction : 1; // 0x220(0x1)
	unsigned char bEnableDiffractionOnBoundaryEdges : 1; // 0x220(0x1)
	unsigned char UnknownData_220_3 : 5; // 0x220(0x1)
	unsigned char UnknownData_221[0x0007]; // 0x221(0x7)
	struct AActor* AssociatedRoom; // 0x228(0x8)
	struct TArray<struct FVector> VertPoints; // 0x230(0x10)
};

// Class AkAudio.PDAkComponent
// Size : 0x3E0 (Inherited : 0x3E0)
struct UPDAkComponent : UAkComponent {
	bool bOccludeAsync; // 0x3D8(0x1)
};

// Class AkAudio.PDAkGameplayStatics
// Size : 0x28 (Inherited : 0x28)
struct UPDAkGameplayStatics : UAkGameplayStatics {

	struct UPDAkComponent* SpawnPDAkComponentAtLocation(struct UObject* WorldContextObject, struct FString EventName, struct FVector Location, struct FRotator Rotation, bool StopWhenOwnerDestroyed); // Function AkAudio.PDAkGameplayStatics.SpawnPDAkComponentAtLocation // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x40, 0x7FF653305C50
	struct UPDAkComponent* GetPDAkComponent(struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, enum class EAttachLocation LocationType); // Function AkAudio.PDAkGameplayStatics.GetPDAkComponent // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x28, 0x7FF6533056E0
};

// Class AkAudio.PDAKSpatialAudioBoxComponent
// Size : 0x450 (Inherited : 0x430)
struct UPDAKSpatialAudioBoxComponent : UBoxComponent {
	struct UAkLateReverbComponent* LateReverb; // 0x430(0x8)
	struct UAkRoomComponent* Room; // 0x438(0x8)
	struct UPDAkAcousticTextureSetComponent* AcousticTextureSet; // 0x440(0x8)
	unsigned char UnknownData_448[0x0008]; // 0x448(0x8)
};

// Class AkAudio.PDAkSpatialAudioVolume
// Size : 0x2A0 (Inherited : 0x270)
struct APDAkSpatialAudioVolume : AAkSpatialAudioVolume {
	int32_t Priority; // 0x270(0x4)
	float UpperLoss; // 0x274(0x4)
	float LowerLoss; // 0x278(0x4)
	float OccDegree; // 0x27C(0x4)
	unsigned char UnknownData_280[0x0020]; // 0x280(0x20)
};

// Class AkAudio.PostEventAsync
// Size : 0xA0 (Inherited : 0x30)
struct UPostEventAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x30(0x10)
	unsigned char UnknownData_40[0x0060]; // 0x40(0x60)

	struct UPostEventAsync* PostEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate PostEventCallback, struct TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed); // Function AkAudio.PostEventAsync.PostEventAsync // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x50, 0x7FF653305860
	void PollPostEventFuture(); // Function AkAudio.PostEventAsync.PollPostEventFuture // (Final|Native|Private) // Param Size : 0x0, 0x7FF653305820
};

// Class AkAudio.PostEventAtLocationAsync
// Size : 0x80 (Inherited : 0x30)
struct UPostEventAtLocationAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x30(0x10)
	unsigned char UnknownData_40[0x0040]; // 0x40(0x40)

	struct UPostEventAtLocationAsync* PostEventAtLocationAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation); // Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x30, 0x7FF653305AE0
	void PollPostEventFuture(); // Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture // (Final|Native|Private) // Param Size : 0x0, 0x7FF653305840
};

