// AnimBlueprintGeneratedClass ABP_Luna_Hair.ABP_Luna_Hair_C
// Size : 0x3890 (Inherited : 0x2B0)
struct UABP_Luna_Hair_C : UPDAnimDynamicsInstBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2B8(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x2E8(0xE0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x3C8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x3E8(0x20)
	unsigned char UnknownData_408[0x0008]; // 0x408(0x8)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x410(0x440)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x850(0xA0)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x8F0(0xE0)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0x9D0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0xE10(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x1250(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x1690(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x1AD0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x1F10(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x2350(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x2790(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x2BD0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x3010(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x3450(0x440)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Luna_Hair.ABP_Luna_Hair_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // Param Size : 0x10, 0x7FF653FAFDF0
	void ExecuteUbergraph_ABP_Luna_Hair(int32_t EntryPoint); // Function ABP_Luna_Hair.ABP_Luna_Hair_C.ExecuteUbergraph_ABP_Luna_Hair // (Final|UbergraphFunction) // Param Size : 0x4, 0x7FF653FAFDF0
};

