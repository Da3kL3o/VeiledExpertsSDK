// Class SubstanceCore.SubstanceGraphInstance
// Size : 0x178 (Inherited : 0x28)
struct USubstanceGraphInstance : UObject {
	unsigned char UnknownData_28[0x0010]; // 0x28(0x10)
	struct FString PackageURL; // 0x38(0x10)
	struct USubstanceInstanceFactory* ParentFactory; // 0x48(0x8)
	struct TMap<uint32_t, struct UTexture2D*> ImageSources; // 0x50(0x50)
	struct UMaterial* CreatedMaterial; // 0xA0(0x8)
	struct UMaterialInstanceConstant* ConstantCreatedMaterial; // 0xA8(0x8)
	struct UMaterialInstanceDynamic* DynamicCreatedMaterial; // 0xB0(0x8)
	struct TMap<int32_t, struct FGuid> OutputTextureLinkData; // 0xB8(0x50)
	struct TMap<uint32_t, struct USubstanceOutputData*> OutputInstances; // 0x108(0x50)
	bool bIsFrozen; // 0x158(0x1)
	unsigned char UnknownData_159[0x001F]; // 0x159(0x1F)

	void SetInputString(struct FString Identifier, struct FString Value); // Function SubstanceCore.SubstanceGraphInstance.SetInputString // (Final|Native|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF65310E290
	void SetInputInt(struct FString Identifier, struct TArray<int32_t> InputValues); // Function SubstanceCore.SubstanceGraphInstance.SetInputInt // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x20, 0x7FF65310E140
	bool SetInputImg(struct FString InputName, struct UObject* Value); // Function SubstanceCore.SubstanceGraphInstance.SetInputImg // (Final|Native|Public|BlueprintCallable) // Param Size : 0x19, 0x7FF65310E050
	void SetInputFloat(struct FString Identifier, struct TArray<float> InputValues); // Function SubstanceCore.SubstanceGraphInstance.SetInputFloat // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x20, 0x7FF65310DF00
	void SetInputColor(struct FString Identifier, struct FLinearColor Color); // Function SubstanceCore.SubstanceGraphInstance.SetInputColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x20, 0x7FF65310DDC0
	void SetInputBool(struct FString Identifier, bool Bool); // Function SubstanceCore.SubstanceGraphInstance.SetInputBool // (Final|Native|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF65310DC90
	struct FSubstanceIntInputDesc GetIntInputDesc(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetIntInputDesc // (Final|Native|Public|BlueprintCallable) // Param Size : 0x58, 0x7FF65310D660
	struct FSubstanceInstanceDesc GetInstanceDesc(); // Function SubstanceCore.SubstanceGraphInstance.GetInstanceDesc // (Final|Native|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF65310D530
	enum class ESubstanceInputType GetInputType(struct FString InputName); // Function SubstanceCore.SubstanceGraphInstance.GetInputType // (Final|Native|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF65310D440
	struct FString GetInputString(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetInputString // (Final|Native|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF65310D310
	struct TArray<struct FString> GetInputNames(); // Function SubstanceCore.SubstanceGraphInstance.GetInputNames // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF65310D230
	struct TArray<int32_t> GetInputInt(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetInputInt // (Final|Native|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF65310D100
	struct TArray<float> GetInputFloat(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetInputFloat // (Final|Native|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF65310CFD0
	struct FLinearColor GetInputColor(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetInputColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x20, 0x7FF65310CED0
	bool GetInputBool(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetInputBool // (Final|Native|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF65310CDE0
	struct FSubstanceFloatInputDesc GetFloatInputDesc(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetFloatInputDesc // (Final|Native|Public|BlueprintCallable) // Param Size : 0x58, 0x7FF65310CB00
	struct UMaterialInstanceDynamic* GetDynamicMaterialInstance(struct FName Name, struct UMaterial* InParentMaterial); // Function SubstanceCore.SubstanceGraphInstance.GetDynamicMaterialInstance // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF65310C970
};

// Class SubstanceCore.SubstanceInstanceFactory
// Size : 0x88 (Inherited : 0x28)
struct USubstanceInstanceFactory : UObject {
	struct TArray<struct USubstanceGraphInstance*> mGraphInstances; // 0x28(0x10)
	unsigned char UnknownData_38[0x0018]; // 0x38(0x18)
	struct FString RelativeSourceFilePath; // 0x50(0x10)
	struct FString AbsoluteSourceFilePath; // 0x60(0x10)
	struct FString SourceFileTimestamp; // 0x70(0x10)
	enum class ESubstanceGenerationMode GenerationMode; // 0x80(0x1)
	unsigned char UnknownData_81[0x0007]; // 0x81(0x7)
};

// Class SubstanceCore.SubstanceOutputData
// Size : 0x58 (Inherited : 0x28)
struct USubstanceOutputData : UObject {
	struct UObject* ConnectedObject; // 0x28(0x8)
	struct FMaterialParameterInfo ParamInfo; // 0x30(0x10)
	struct USubstanceGraphInstance* ParentInstance; // 0x40(0x8)
	struct FGuid CacheGuid; // 0x48(0x10)
};

// Class SubstanceCore.SubstanceSettings
// Size : 0x68 (Inherited : 0x28)
struct USubstanceSettings : UObject {
	int32_t MemoryBudgetMb; // 0x28(0x4)
	int32_t CPUCores; // 0x2C(0x4)
	int32_t AsyncLoadMipClip; // 0x30(0x4)
	int32_t MaxAsyncSubstancesRenderedPerFrame; // 0x34(0x4)
	enum class ESubstanceEngineType SubstanceEngine; // 0x38(0x1)
	enum class EDefaultSubstanceTextureSize DefaultSubstanceOutputSizeX; // 0x39(0x1)
	enum class EDefaultSubstanceTextureSize DefaultSubstanceOutputSizeY; // 0x3A(0x1)
	unsigned char UnknownData_3B[0x0005]; // 0x3B(0x5)
	struct TSoftObjectPtr<struct UMaterialInterface> DefaultTemplateMaterial; // 0x40(0x28)
};

// Class SubstanceCore.SubstanceTexture2D
// Size : 0x128 (Inherited : 0xD0)
struct USubstanceTexture2D : UTexture2DDynamic {
	unsigned char UnknownData_D0[0x0030]; // 0xD0(0x30)
	struct USubstanceGraphInstance* ParentInstance; // 0x100(0x8)
	enum class TextureAddress AddressX; // 0x108(0x1)
	enum class TextureAddress AddressY; // 0x109(0x1)
	bool bCooked; // 0x10A(0x1)
	unsigned char UnknownData_10B[0x001D]; // 0x10B(0x1D)
};

// Class SubstanceCore.SubstanceUtility
// Size : 0x28 (Inherited : 0x28)
struct USubstanceUtility : UBlueprintFunctionLibrary {

	void SyncRendering(struct USubstanceGraphInstance* InstancesToRender); // Function SubstanceCore.SubstanceUtility.SyncRendering // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF65310E3D0
	void SetGraphInstanceOutputSizeInt(struct USubstanceGraphInstance* GraphInstance, int32_t Width, int32_t Height); // Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSizeInt // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF65310DBA0
	void SetGraphInstanceOutputSize(struct USubstanceGraphInstance* GraphInstance, enum class ESubstanceTextureSize Width, enum class ESubstanceTextureSize Height); // Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSize // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // Param Size : 0xA, 0x7FF65310DAB0
	void ResetInputParameters(struct USubstanceGraphInstance* GraphInstance); // Function SubstanceCore.SubstanceUtility.ResetInputParameters // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF65310DA40
	struct TArray<struct UTexture2D*> GetSubstanceTextures(struct USubstanceGraphInstance* GraphInstance); // Function SubstanceCore.SubstanceUtility.GetSubstanceTextures // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF65310D8A0
	struct TArray<struct USubstanceGraphInstance*> GetSubstances(struct UMaterialInterface* Material); // Function SubstanceCore.SubstanceUtility.GetSubstances // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF65310D970
	float GetSubstanceLoadingProgress(); // Function SubstanceCore.SubstanceUtility.GetSubstanceLoadingProgress // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF65310D870
	struct FString GetGraphName(struct USubstanceGraphInstance* GraphInstance); // Function SubstanceCore.SubstanceUtility.GetGraphName // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF65310CD10
	struct FString GetFactoryName(struct USubstanceGraphInstance* GraphInstance); // Function SubstanceCore.SubstanceUtility.GetFactoryName // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF65310CA30
	void EnableInstanceOutputs(struct UObject* WorldContextObject, struct USubstanceGraphInstance* GraphInstance, struct TArray<int32_t> OutputIndices); // Function SubstanceCore.SubstanceUtility.EnableInstanceOutputs // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF65310C820
	struct USubstanceGraphInstance* DuplicateGraphInstance(struct UObject* WorldContextObject, struct USubstanceGraphInstance* GraphInstance); // Function SubstanceCore.SubstanceUtility.DuplicateGraphInstance // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF65310C760
	void DisableInstanceOutputs(struct UObject* WorldContextObject, struct USubstanceGraphInstance* GraphInstance, struct TArray<int32_t> OutputIndices); // Function SubstanceCore.SubstanceUtility.DisableInstanceOutputs // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF65310C610
	struct USubstanceGraphInstance* CreateGraphInstance(struct UObject* WorldContextObject, struct USubstanceInstanceFactory* Factory, int32_t GraphDescIndex, struct UMaterial* ParentMaterial, struct FString InstanceName); // Function SubstanceCore.SubstanceUtility.CreateGraphInstance // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // Param Size : 0x38, 0x7FF65310C450
	struct USubstanceInstanceFactory* CreateAggregateSubstanceFactory(struct USubstanceInstanceFactory* OutputFactory, int32_t OutputFactoryGraphIndex, struct USubstanceInstanceFactory* InputFactory, int32_t InputFactoryGraphIndex, struct TArray<struct FSubstanceConnection> Connections); // Function SubstanceCore.SubstanceUtility.CreateAggregateSubstanceFactory // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x38, 0x7FF65310C280
	void CopyInputParameters(struct USubstanceGraphInstance* SourceGraphInstance, struct USubstanceGraphInstance* DestGraphInstance); // Function SubstanceCore.SubstanceUtility.CopyInputParameters // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF65310C1D0
	void ClearCache(); // Function SubstanceCore.SubstanceUtility.ClearCache // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF65310C1B0
	void AsyncRendering(struct USubstanceGraphInstance* InstancesToRender); // Function SubstanceCore.SubstanceUtility.AsyncRendering // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF65310C140
};

