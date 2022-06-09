// AnimBlueprintGeneratedClass HitReaction.HitReaction_C
// Size : 0xCA0 (Inherited : 0x2D0)
struct UHitReaction_C : UPDHitReactionAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2D0(0x8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2D8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x308(0x78)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x380(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x488(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x4A8(0x20)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x4C8(0xB8)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x580(0xB8)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0x638(0xC0)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x6F8(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x740(0x48)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x788(0xC0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0x848(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x870(0x28)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x898(0xB8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x950(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x978(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x9A0(0xA0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xA40(0xC0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0xB00(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0xB28(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0xB50(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xB98(0xB8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xC50(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xC78(0x28)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink AnimGraph); // Function HitReaction.HitReaction_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // Param Size : 0x20, 0x7FF653FAFDF0
	void ExecuteUbergraph_HitReaction(int32_t EntryPoint); // Function HitReaction.HitReaction_C.ExecuteUbergraph_HitReaction // (Final|UbergraphFunction) // Param Size : 0x4, 0x7FF653FAFDF0
};

