// ScriptStruct SubstanceCore.SubstanceInstanceDesc
// Size : 0x20 (Inherited : 0x0)
struct FSubstanceInstanceDesc {
	struct FString Name; // 0x0(0x10)
	struct TArray<struct FSubstanceInputDesc> Inputs; // 0x10(0x10)
};

// ScriptStruct SubstanceCore.SubstanceInputDesc
// Size : 0x18 (Inherited : 0x0)
struct FSubstanceInputDesc {
	struct FString Name; // 0x0(0x10)
	enum class ESubstanceInputType Type; // 0x10(0x1)
	unsigned char UnknownData_11[0x0007]; // 0x11(0x7)
};

// ScriptStruct SubstanceCore.SubstanceFloatInputDesc
// Size : 0x48 (Inherited : 0x18)
struct FSubstanceFloatInputDesc : FSubstanceInputDesc {
	struct TArray<float> Min; // 0x18(0x10)
	struct TArray<float> Max; // 0x28(0x10)
	struct TArray<float> Default; // 0x38(0x10)
};

// ScriptStruct SubstanceCore.SubstanceIntInputDesc
// Size : 0x48 (Inherited : 0x18)
struct FSubstanceIntInputDesc : FSubstanceInputDesc {
	struct TArray<int32_t> Min; // 0x18(0x10)
	struct TArray<int32_t> Max; // 0x28(0x10)
	struct TArray<int32_t> Default; // 0x38(0x10)
};

// ScriptStruct SubstanceCore.SubstanceConnection
// Size : 0x20 (Inherited : 0x0)
struct FSubstanceConnection {
	struct FString OutputIdentifier; // 0x0(0x10)
	struct FString InputImageIdentifier; // 0x10(0x10)
};

