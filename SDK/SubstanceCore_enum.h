// Enum SubstanceCore.ESubstanceInputType
enum class FESubstanceInputType : uint8 {
	SIT_Float
	SIT_Float2
	SIT_Float3
	SIT_Float4
	SIT_Integer
	SIT_Image
	SIT_Unused_7
	SIT_Unused_8
	SIT_Integer2
	SIT_Integer3
	SIT_Integer4
	SIT_MAX
};

// Enum SubstanceCore.ESubstanceGenerationMode
enum class FESubstanceGenerationMode : uint8 {
	SGM_PlatformDefault
	SGM_Baked
	SGM_OnLoadSync
	SGM_OnLoadSyncAndCache
	SGM_OnLoadAsync
	SGM_OnLoadAsyncAndCache
	SGM_MAX
};

// Enum SubstanceCore.EDefaultSubstanceTextureSize
enum class FEDefaultSubstanceTextureSize : uint8 {
	Size_1
	Size_17
	Size_33
	Size_65
	Size_129
	Size_257
	Size_513
	Size_1025
	Size_2049
	Size_4097
	Size_MAX
};

// Enum SubstanceCore.ESubstanceEngineType
enum class FESubstanceEngineType : uint8 {
	SET_CPU
	SET_GPU
	SET_MAX
};

// Enum SubstanceCore.ESubstanceTextureSize
enum class FESubstanceTextureSize : uint8 {
	ERL_17
	ERL_33
	ERL_65
	ERL_129
	ERL_257
	ERL_513
	ERL_1025
	ERL_2049
	ERL_4097
	ERL_8193
	ERL_MAX
};

