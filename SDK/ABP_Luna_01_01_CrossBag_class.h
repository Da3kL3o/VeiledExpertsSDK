// AnimBlueprintGeneratedClass ABP_Luna_01_01_CrossBag.ABP_Luna_01_01_CrossBag_C
// Size : 0x1EDD (Inherited : 0x270)
struct UABP_Luna_01_01_CrossBag_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	unsigned char UnknownData_2A8[0x0008]; // 0x2A8(0x8)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x2B0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x6F0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0xB30(0x440)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xF70(0x20)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xF90(0xA0)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x1030(0xE0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1110(0x20)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1130(0xE0)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x1210(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x1650(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x1A90(0x440)
	struct FVector WindVelocity; // 0x1ED0(0xC)
	bool UseAnimDynamics; // 0x1EDC(0x1)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Luna_01_01_CrossBag.ABP_Luna_01_01_CrossBag_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // Param Size : 0x10, 0x7FF653FAFDF0
	void ExecuteUbergraph_ABP_Luna_01_01_CrossBag(int32_t EntryPoint); // Function ABP_Luna_01_01_CrossBag.ABP_Luna_01_01_CrossBag_C.ExecuteUbergraph_ABP_Luna_01_01_CrossBag // (Final|UbergraphFunction) // Param Size : 0x4, 0x7FF653FAFDF0
};

