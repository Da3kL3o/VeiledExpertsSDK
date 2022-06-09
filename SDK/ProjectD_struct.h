// ScriptStruct ProjectD.EnvSetting
// Size : 0x64 (Inherited : 0x0)
struct FEnvSetting {
	unsigned char bApplyLightIntensity : 1; // 0x0(0x1)
	unsigned char UnknownData_0_1 : 7; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float SkyLightIntensity; // 0x4(0x4)
	float DirectionalLightIntensity; // 0x8(0x4)
	struct FColor SkyLightColor; // 0xC(0x4)
	struct FColor DirectionalLightColor; // 0x10(0x4)
	unsigned char bUseFogSetting : 1; // 0x14(0x1)
	unsigned char UnknownData_14_1 : 7; // 0x14(0x1)
	unsigned char UnknownData_15[0x0003]; // 0x15(0x3)
	struct FLinearColor FogInscatteringColor; // 0x18(0x10)
	float FogMaxOpacity; // 0x28(0x4)
	float FogDensity; // 0x2C(0x4)
	float FogHeightFalloff; // 0x30(0x4)
	float FogStartDistance; // 0x34(0x4)
	float FogDensity2; // 0x38(0x4)
	float FogHeightFalloff2; // 0x3C(0x4)
	float FogHeightOffset2; // 0x40(0x4)
	unsigned char bUseVolumetricFogSetting : 1; // 0x44(0x1)
	unsigned char UnknownData_44_1 : 7; // 0x44(0x1)
	unsigned char UnknownData_45[0x0003]; // 0x45(0x3)
	struct FColor VolumetricFogAlbedo; // 0x48(0x4)
	float VolumetricFogScatteringDistribution; // 0x4C(0x4)
	float VolumetricFogExtinctionScale; // 0x50(0x4)
	float VolumetricFogDistance; // 0x54(0x4)
	struct FVector MovingObjectPosition; // 0x58(0xC)
};

// ScriptStruct ProjectD.GroupRangeInfo
// Size : 0x24 (Inherited : 0x0)
struct FGroupRangeInfo {
	int32_t DefScore; // 0x0(0x4)
	int32_t PlayerExistWeight; // 0x4(0x4)
	int32_t PlayerNoneWeight; // 0x8(0x4)
	float Height; // 0xC(0x4)
	float ARadius; // 0x10(0x4)
	float BRadius; // 0x14(0x4)
	struct FColor AColor; // 0x18(0x4)
	struct FColor BColor; // 0x1C(0x4)
	float Bold; // 0x20(0x4)
};

// ScriptStruct ProjectD.ActionNotifyData
// Size : 0x38 (Inherited : 0x0)
struct FActionNotifyData {
	struct FName EventName; // 0x0(0x8)
	struct UCurveBase* Curve; // 0x8(0x8)
	struct FVector EventVector; // 0x10(0xC)
	float TotalDuration; // 0x1C(0x4)
	float StartOffset; // 0x20(0x4)
	unsigned char UnknownData_24[0x0004]; // 0x24(0x4)
	struct UAnimSequenceBase* NotifyAnimSequence; // 0x28(0x8)
	enum class ECameraMovementType CameraMovement; // 0x30(0x1)
	unsigned char UnknownData_31[0x0007]; // 0x31(0x7)
};

// ScriptStruct ProjectD.ParkourHandOffset
// Size : 0x10 (Inherited : 0x8)
struct FParkourHandOffset : FTableRowBase {
	float LeftHandOffset; // 0x8(0x4)
	float RightHandOffset; // 0xC(0x4)
};

// ScriptStruct ProjectD.PDAudioSwitch
// Size : 0x20 (Inherited : 0x0)
struct FPDAudioSwitch {
	struct FString Group; // 0x0(0x10)
	struct FString Switch; // 0x10(0x10)
};

// ScriptStruct ProjectD.PDButtonOutLine
// Size : 0xC8 (Inherited : 0x0)
struct FPDButtonOutLine {
	struct FAnchors Anchors; // 0x0(0x10)
	struct FMargin Offsets; // 0x10(0x10)
	struct FVector2D Alignment; // 0x20(0x8)
	bool bSizeToContent; // 0x28(0x1)
	unsigned char UnknownData_29[0x0007]; // 0x29(0x7)
	struct FSlateBrush OutLineStyle; // 0x30(0x88)
	struct FLinearColor BrushColor; // 0xB8(0x10)
};

// ScriptStruct ProjectD.ActionTaskData
// Size : 0x70 (Inherited : 0x0)
struct FActionTaskData {
	bool BoolValue0; // 0x0(0x1)
	bool BoolValue1; // 0x1(0x1)
	unsigned char UnknownData_2[0x0002]; // 0x2(0x2)
	int32_t IntValue0; // 0x4(0x4)
	int32_t IntValue1; // 0x8(0x4)
	float FloatValue0; // 0xC(0x4)
	float FloatValue1; // 0x10(0x4)
	struct FVector VectorValue0; // 0x14(0xC)
	struct FVector VectorValue1; // 0x20(0xC)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
	struct FTransform TransformValue; // 0x30(0x30)
	struct UObject* ObjectValue0; // 0x60(0x8)
	struct UObject* ObjectValue1; // 0x68(0x8)
};

// ScriptStruct ProjectD.PDAnimGraphAimingValues
// Size : 0xC (Inherited : 0x0)
struct FPDAnimGraphAimingValues {
	struct FRotator SpineRotation; // 0x0(0xC)
};

// ScriptStruct ProjectD.WeaponAnimDataSet
// Size : 0x8 (Inherited : 0x0)
struct FWeaponAnimDataSet {
	struct UAnimMontage* Fire; // 0x0(0x8)
};

// ScriptStruct ProjectD.BulletWeaponAnimDataSet
// Size : 0x10 (Inherited : 0x8)
struct FBulletWeaponAnimDataSet : FWeaponAnimDataSet {
	struct UAnimMontage* Reload; // 0x8(0x8)
};

// ScriptStruct ProjectD.PDPlayerAnimDatas
// Size : 0x5018 (Inherited : 0x8)
struct FPDPlayerAnimDatas : FTableRowBase {
	struct FPDPerCharacterAnimDatas PerCharacterAnimDatas; // 0x8(0xBA0)
	struct FPDPerWeaponAnimDatas PerWeaponAnimDatas[14]; // 0xBA8(0x3020)
	struct FPDPerSpecificWeaponAnimDatas PerSpecificWeaponAnimDatas[1A]; // 0x3BC8(0x1450)
};

// ScriptStruct ProjectD.PDPerSpecificWeaponAnimDatas
// Size : 0xC8 (Inherited : 0x0)
struct FPDPerSpecificWeaponAnimDatas {
	struct UAnimSequence* Stance; // 0x0(0x8)
	struct UAnimMontage* ReloadWeapon_Stand; // 0x8(0x8)
	struct UAnimMontage* ReloadWeapon_Crouch; // 0x10(0x8)
	struct UAnimMontage* QuickReloadWeapon_Stand; // 0x18(0x8)
	struct UAnimMontage* QuickReloadWeapon_Crouch; // 0x20(0x8)
	struct UAnimMontage* SlowReloadWeapon_Stand; // 0x28(0x8)
	struct UAnimMontage* SlowReloadWeapon_Crouch; // 0x30(0x8)
	struct UAnimMontage* FireWeapon_FP; // 0x38(0x8)
	struct UAnimMontage* BoltActionFP; // 0x40(0x8)
	struct UAnimSequence* Weapon_ReloadEmpty; // 0x48(0x8)
	struct UAnimSequence* Weapon_ReloadNotEmpty; // 0x50(0x8)
	struct UAnimSequence* Weapon_FireEmpty; // 0x58(0x8)
	struct UAnimSequence* Weapon_FireNotEmpty; // 0x60(0x8)
	struct UAnimSequence* Weapon_BoltAction; // 0x68(0x8)
	struct UAnimSequence* Weapon_ReloadEmptyEnd; // 0x70(0x8)
	struct UAnimSequence* Weapon_Idle; // 0x78(0x8)
	struct UAnimSequence* Weapon_QuickReloadEmpty; // 0x80(0x8)
	struct UAnimSequence* Weapon_QuickReloadEmptyEnd; // 0x88(0x8)
	struct UAnimSequence* Weapon_Slow_Reload_Empty; // 0x90(0x8)
	struct UAnimSequence* Weapon_Slow_Reload_EmptyEnd; // 0x98(0x8)
	struct UAnimSequence* Weapon_Slow_Reload_NotEmpty; // 0xA0(0x8)
	float ADSAimYaw; // 0xA8(0x4)
	float ADSPlusAimPitch_Stn; // 0xAC(0x4)
	float ADSPlusAimPitch_Cro; // 0xB0(0x4)
	float ADSPlusAimPitch_CroWalk; // 0xB4(0x4)
	float ADSPlusAimPitch_Stn_Lean; // 0xB8(0x4)
	float ADSPlusAimPitch_Cro_Lean; // 0xBC(0x4)
	float ADSPlusAimPitch_CroWalk_Lean; // 0xC0(0x4)
	unsigned char UnknownData_C4[0x0004]; // 0xC4(0x4)
};

// ScriptStruct ProjectD.PDPerWeaponAnimDatas
// Size : 0x268 (Inherited : 0x0)
struct FPDPerWeaponAnimDatas {
	struct FPDPWUsingInABPAnimDatas UsingInABPAnimDatas; // 0x0(0x128)
	struct FPDLandActionAnimDatas LandAnimDatas; // 0x128(0x8)
	struct FPDMeleeActionAnimDatas MeleeActionAnimDatas; // 0x130(0x20)
	struct FPDWeaponHandlingAnimDatas WeaponHandlingAnimDatas; // 0x150(0xD0)
	struct FPDPWParkourAnimDatas ParkourDatas; // 0x220(0x48)
};

// ScriptStruct ProjectD.PDPWParkourAnimDatas
// Size : 0x48 (Inherited : 0x0)
struct FPDPWParkourAnimDatas {
	struct UAnimMontage* Roll_F; // 0x0(0x8)
	struct UAnimMontage* Roll_F02; // 0x8(0x8)
	struct UAnimMontage* Roll_F03; // 0x10(0x8)
	struct UAnimMontage* Roll_F04; // 0x18(0x8)
	struct UAnimMontage* Roll_B; // 0x20(0x8)
	struct UAnimMontage* Roll_L; // 0x28(0x8)
	struct UAnimMontage* Roll_R; // 0x30(0x8)
	struct UAnimMontage* Jump_FP; // 0x38(0x8)
	struct UAnimMontage* Land_FP; // 0x40(0x8)
};

// ScriptStruct ProjectD.PDWeaponHandlingAnimDatas
// Size : 0xD0 (Inherited : 0x0)
struct FPDWeaponHandlingAnimDatas {
	struct UAnimMontage* Stand_FireWeapon; // 0x0(0x8)
	struct UAnimMontage* Crouch_FireWeapon; // 0x8(0x8)
	struct UAnimMontage* Stand_Fire_HipFire; // 0x10(0x8)
	struct UAnimMontage* Crouch_Fire_HipFire; // 0x18(0x8)
	struct UAnimMontage* Stand_FireWeapon_FP; // 0x20(0x8)
	struct UAnimMontage* Crouch_FireWeapon_FP; // 0x28(0x8)
	struct UAnimMontage* Crouch_Walk_Fire_HipFire; // 0x30(0x8)
	struct UAnimMontage* Crouch_Walk_Fire_ADS; // 0x38(0x8)
	struct UBlendSpace* Stand_FireRecoil_HipFire; // 0x40(0x8)
	struct UBlendSpace* Crouch_FireRecoil_HipFire; // 0x48(0x8)
	struct UBlendSpace* Stand_FireRecoil_ADS; // 0x50(0x8)
	struct UBlendSpace* Crouch_FireRecoil_ADS; // 0x58(0x8)
	struct UBlendSpace* Stand_FireRecoil_ADS_FP; // 0x60(0x8)
	struct UBlendSpace* Crouch_FireRecoil_ADS_FP; // 0x68(0x8)
	struct UBlendSpace* Crouch_Walk_FireRecoil_HipFire; // 0x70(0x8)
	struct UPDFireRecoilLevelData* FireRecoilLeveldata; // 0x78(0x8)
	struct UPDFireRecoilLevelData* FireRecoilLeveldata_FP; // 0x80(0x8)
	struct UAnimMontage* ReloadWeapon_Stand; // 0x88(0x8)
	struct UAnimMontage* ReloadWeapon_Crouch; // 0x90(0x8)
	struct UAnimMontage* ReloadWeapon_Groggy; // 0x98(0x8)
	struct UAnimMontage* HolsterWeapon; // 0xA0(0x8)
	struct UAnimMontage* DrawWeapon; // 0xA8(0x8)
	struct UAnimMontage* DrawWeapon_FP; // 0xB0(0x8)
	struct UAnimMontage* BoltAction; // 0xB8(0x8)
	struct UAnimMontage* BoltAction_Crouch; // 0xC0(0x8)
	struct UAnimMontage* BoltAction_Groggy; // 0xC8(0x8)
};

// ScriptStruct ProjectD.PDMeleeActionAnimDatas
// Size : 0x20 (Inherited : 0x0)
struct FPDMeleeActionAnimDatas {
	struct UAnimMontage* Melee_Attack_DefAtt; // 0x0(0x8)
	struct UAnimMontage* Melee_Attack_LBTAtt; // 0x8(0x8)
	struct UAnimMontage* Melee_Attack_RBTAtt; // 0x10(0x8)
	struct UAnimMontage* Melee_Attack_FallAtt; // 0x18(0x8)
};

// ScriptStruct ProjectD.PDLandActionAnimDatas
// Size : 0x8 (Inherited : 0x0)
struct FPDLandActionAnimDatas {
	struct UAnimMontage* SoftLand; // 0x0(0x8)
};

// ScriptStruct ProjectD.PDPWUsingInABPAnimDatas
// Size : 0x128 (Inherited : 0x0)
struct FPDPWUsingInABPAnimDatas {
	struct UAnimSequence* Loco_Stand_Idle; // 0x0(0x8)
	struct UAnimSequence* Loco_Crouch_Idle; // 0x8(0x8)
	struct UAnimSequence* Loco_Stand_HipFireIdle; // 0x10(0x8)
	struct UAnimSequence* Loco_Crouch_HipFireIdle; // 0x18(0x8)
	struct UAnimSequence* Loco_Stand_ADSIdle; // 0x20(0x8)
	struct UAnimSequence* Loco_Crouch_ADSIdle; // 0x28(0x8)
	struct UAnimSequence* Loco_Stand_Fall; // 0x30(0x8)
	struct UAnimSequence* Loco_Crouch_Fall; // 0x38(0x8)
	struct UAnimSequence* StandToCrouch; // 0x40(0x8)
	struct UAnimSequence* CrouchToStand; // 0x48(0x8)
	struct UAnimSequence* StandToCrouch_ADS; // 0x50(0x8)
	struct UAnimSequence* CrouchToStand_ADS; // 0x58(0x8)
	struct UAnimSequence* Loco_Crouch_Walk_HipFireIdle; // 0x60(0x8)
	struct UBlendSpace* Loco_Stand_Run; // 0x68(0x8)
	struct UBlendSpace* Loco_Crouch_Run; // 0x70(0x8)
	struct UBlendSpace* Loco_Stand_Run_ADS; // 0x78(0x8)
	struct UBlendSpace* Loco_Crouch_Run_ADS; // 0x80(0x8)
	struct UBlendSpace* Loco_Stand_RunStart; // 0x88(0x8)
	struct UAnimSequence* Loco_Stand_RunStart_L; // 0x90(0x8)
	struct UAnimSequence* Loco_Stand_RunStart_R; // 0x98(0x8)
	struct UBlendSpace* Loco_Crouch_RunStart; // 0xA0(0x8)
	struct UAnimSequence* Loco_Stand_Fall_FP; // 0xA8(0x8)
	struct UBlendSpace* Loco_Stand_Walk_FP; // 0xB0(0x8)
	struct UAnimSequence* WaitBeforePlay_Stand_FP; // 0xB8(0x8)
	struct UAnimSequence* Stance; // 0xC0(0x8)
	struct UBlendSpaceBase* AO_Lean_Stand; // 0xC8(0x8)
	struct UBlendSpaceBase* AO_Lean_Crouch; // 0xD0(0x8)
	struct UBlendSpaceBase* AO_Stand_HipFire; // 0xD8(0x8)
	struct UBlendSpaceBase* AO_Crouch_HipFire; // 0xE0(0x8)
	struct UBlendSpaceBase* AO_Stand_ADS; // 0xE8(0x8)
	struct UBlendSpaceBase* AO_Crouch_ADS; // 0xF0(0x8)
	struct UBlendSpaceBase* AO_Crouch_Walk_HipFire; // 0xF8(0x8)
	struct UAnimSequence* Stand_LeanR_ADS; // 0x100(0x8)
	struct UAnimSequence* Crouch_LeanR_ADS; // 0x108(0x8)
	struct UAnimSequence* Stand_LeanR_HF; // 0x110(0x8)
	struct UAnimSequence* Crouch_LeanR_HF; // 0x118(0x8)
	struct UAnimSequence* Crouch_LeanR_Walk_HF; // 0x120(0x8)
};

// ScriptStruct ProjectD.PDPerCharacterAnimDatas
// Size : 0xBA0 (Inherited : 0x0)
struct FPDPerCharacterAnimDatas {
	struct FPDPCUsingInABPAnimDatas UsingInABPAnimDatas; // 0x0(0x60)
	struct FPDLeanAnimDatas LeanAnimData; // 0x60(0x8)
	struct FPDTurnAnimDatas TurnAnimDatas; // 0x68(0x70)
	struct FPDParkourActionAnimDatas ParkourAnimDatas; // 0xD8(0x1B0)
	struct FPDClimbActionAnimDatas ClimbActionAnimDatas; // 0x288(0x68)
	struct FPDGroggyActionAnimDatas GroggyActionAnimDatas; // 0x2F0(0x80)
	struct FPDInteractionActionAnimDatas InteractionActionAnimDatas; // 0x370(0x48)
	struct FPDItemUseActionAnimDatas ItemUseActionAnimDatas; // 0x3B8(0x30)
	struct FPDDeathAnimData DeathAnimData; // 0x3E8(0x40)
	struct FPDKnockbackAnimData KnockbackAnimData; // 0x428(0x50)
	struct FPDPerkAnimDatas PerkAnimData; // 0x478(0x20)
	struct FPDZiplineAnimData ZipLineAnimData; // 0x498(0x8)
	struct FPDSignatureAnimDatas SignatureAnimData; // 0x4A0(0x50)
	struct FPDSlideAnimDatas SlideAnimData; // 0x4F0(0x20)
	struct FPDHitReactionAnimData HitReactionAnimData; // 0x510(0x150)
	struct FPDWearJuggernautAnimData WearJuggernautAnimData[2]; // 0x660(0x30)
	struct FPDPerAgentAnimData PerAgentAnimData[9]; // 0x690(0x510)
};

// ScriptStruct ProjectD.PDPerAgentAnimData
// Size : 0x90 (Inherited : 0x0)
struct FPDPerAgentAnimData {
	struct FPDAFKAnimData AFKAnimData; // 0x0(0x58)
	struct FPDSceneDirectionAnimData SceneDirectionAnimData; // 0x58(0x30)
	struct FPDAttackAnimData AttackAnimData; // 0x88(0x8)
};

// ScriptStruct ProjectD.PDAttackAnimData
// Size : 0x8 (Inherited : 0x0)
struct FPDAttackAnimData {
	struct UAnimMontage* Execution; // 0x0(0x8)
};

// ScriptStruct ProjectD.PDSceneDirectionAnimData
// Size : 0x30 (Inherited : 0x0)
struct FPDSceneDirectionAnimData {
	struct UAnimMontage* RoundEnterSeriousAnim; // 0x0(0x8)
	struct TArray<int32_t> SeriousAnimLinkedKeyType; // 0x8(0x10)
	struct UAnimMontage* RoundEnterLightAnim; // 0x18(0x8)
	struct TArray<int32_t> LightAnimLinkedKeyType; // 0x20(0x10)
};

// ScriptStruct ProjectD.PDAFKAnimData
// Size : 0x58 (Inherited : 0x0)
struct FPDAFKAnimData {
	struct UAnimMontage* RifleStand; // 0x0(0x8)
	struct UAnimMontage* RifleCrouch; // 0x8(0x8)
	uint32_t RiflePercentTypeD; // 0x10(0x4)
	unsigned char UnknownData_14[0x0004]; // 0x14(0x4)
	struct UAnimMontage* HGStand; // 0x18(0x8)
	struct UAnimMontage* HGCrouch; // 0x20(0x8)
	struct UAnimMontage* ThrowStand; // 0x28(0x8)
	struct UAnimMontage* ThrowCrouch; // 0x30(0x8)
	struct UAnimMontage* MeleeStand; // 0x38(0x8)
	struct UAnimMontage* MeleeCrouch; // 0x40(0x8)
	struct UAnimMontage* BowStand; // 0x48(0x8)
	struct UAnimMontage* BowCrouch; // 0x50(0x8)
};

// ScriptStruct ProjectD.PDWearJuggernautAnimData
// Size : 0x18 (Inherited : 0x0)
struct FPDWearJuggernautAnimData {
	struct UAnimMontage* WearJuggernaut; // 0x0(0x8)
	struct UAnimMontage* JuggernautDash; // 0x8(0x8)
	struct UAnimMontage* JuggernautLauncher; // 0x10(0x8)
};

// ScriptStruct ProjectD.PDHitReactionAnimData
// Size : 0x150 (Inherited : 0x0)
struct FPDHitReactionAnimData {
	struct UAnimMontage* AM_BurnReactionAnim; // 0x0(0x8)
	struct UAnimMontage* AM_NormalHitAnimA; // 0x8(0x8)
	struct UAnimMontage* AM_NormalHitAnimB; // 0x10(0x8)
	struct UAnimMontage* AM_NormalHitAnimC; // 0x18(0x8)
	struct TArray<struct UAnimMontage*> FowardNormalHitAnims; // 0x20(0x10)
	struct TArray<struct UAnimMontage*> BackNormalHitAnims; // 0x30(0x10)
	struct TArray<struct UAnimMontage*> LeftNormalHitAnims; // 0x40(0x10)
	struct TArray<struct UAnimMontage*> RightNormalHitAnims; // 0x50(0x10)
	struct TArray<struct UAnimMontage*> HitHeadAnims; // 0x60(0x10)
	struct TArray<struct UAnimMontage*> BulletGrazeAnimsStand; // 0x70(0x10)
	struct TArray<struct UAnimMontage*> BulletGrazeAnimsCrouch; // 0x80(0x10)
	struct TArray<struct UAnimMontage*> BombGrazeAnimsStand; // 0x90(0x10)
	struct TArray<struct UAnimMontage*> BombGrazeAnimsCrouch; // 0xA0(0x10)
	struct UAnimMontage* AM_RunHitAnimA; // 0xB0(0x8)
	struct UAnimMontage* AM_RunHitAnimB; // 0xB8(0x8)
	struct UAnimMontage* AM_RunHitAnimC; // 0xC0(0x8)
	struct FRotator HitReactionRotation; // 0xC8(0xC)
	float HitReactionAngleFoward; // 0xD4(0x4)
	float HitReactionAngleLeft; // 0xD8(0x4)
	float HitReactionAngleRight; // 0xDC(0x4)
	float HitReactionAngleBack; // 0xE0(0x4)
	unsigned char UnknownData_E4[0x0004]; // 0xE4(0x4)
	struct UCurveFloat* HitReactionRotationCurve; // 0xE8(0x8)
	float NoramlHitMotionFrequency_Local; // 0xF0(0x4)
	float NoramlHitMotionFrequency_Remote; // 0xF4(0x4)
	float RunHitMotionFrequency_Local; // 0xF8(0x4)
	float RunHitMotionFrequency_Remote; // 0xFC(0x4)
	float FirstHitTime; // 0x100(0x4)
	unsigned char UnknownData_104[0x0004]; // 0x104(0x4)
	struct UAnimMontage* AM_Lower_Right_HitAnim; // 0x108(0x8)
	struct UAnimMontage* AM_Lower_Left_HitAnim; // 0x110(0x8)
	float HitDelay; // 0x118(0x4)
	unsigned char UnknownData_11C[0x0004]; // 0x11C(0x4)
	struct UAnimMontage* AM_UpperBody_WeakCenter; // 0x120(0x8)
	struct UAnimMontage* AM_UpperBody_WeakLeft; // 0x128(0x8)
	struct UAnimMontage* AM_UpperBody_WeakRight; // 0x130(0x8)
	struct UAnimMontage* AM_UpperBody_StrongCenter; // 0x138(0x8)
	struct UAnimMontage* AM_UpperBody_StrongLeft; // 0x140(0x8)
	struct UAnimMontage* AM_UpperBody_StrongRight; // 0x148(0x8)
};

// ScriptStruct ProjectD.PDSlideAnimDatas
// Size : 0x20 (Inherited : 0x0)
struct FPDSlideAnimDatas {
	struct UAnimMontage* SlideEnter; // 0x0(0x8)
	struct UAnimMontage* SlideExitDefault; // 0x8(0x8)
	struct UAnimMontage* SlideExitRoll; // 0x10(0x8)
	struct UAnimMontage* SlideExitGroggy; // 0x18(0x8)
};

// ScriptStruct ProjectD.PDSignatureAnimDatas
// Size : 0x50 (Inherited : 0x0)
struct FPDSignatureAnimDatas {
	struct UAnimMontage* RevolverSpinning; // 0x0(0x8)
	struct UAnimMontage* DrinkBottle; // 0x8(0x8)
	struct UAnimMontage* EatHotDog; // 0x10(0x8)
	struct UAnimMontage* LickKnife; // 0x18(0x8)
	struct UAnimMontage* CoinToss; // 0x20(0x8)
	struct UAnimMontage* GlassesScan; // 0x28(0x8)
	struct UAnimMontage* LookMagnifier; // 0x30(0x8)
	struct UAnimMontage* ShootFlare; // 0x38(0x8)
	struct UAnimMontage* SprayMoney; // 0x40(0x8)
	struct UAnimMontage* Warcry; // 0x48(0x8)
};

// ScriptStruct ProjectD.PDZiplineAnimData
// Size : 0x8 (Inherited : 0x0)
struct FPDZiplineAnimData {
	struct UAnimMontage* ZiplineRide; // 0x0(0x8)
};

// ScriptStruct ProjectD.PDPerkAnimDatas
// Size : 0x20 (Inherited : 0x0)
struct FPDPerkAnimDatas {
	struct UAnimMontage* RobCoin; // 0x0(0x8)
	struct UAnimMontage* ReviveInGroggy; // 0x8(0x8)
	struct UAnimMontage* Hacking; // 0x10(0x8)
	struct UAnimMontage* Maintenance; // 0x18(0x8)
};

// ScriptStruct ProjectD.PDKnockbackAnimData
// Size : 0x50 (Inherited : 0x0)
struct FPDKnockbackAnimData {
	struct UAnimMontage* Knockback_WeakCenter; // 0x0(0x8)
	struct UAnimMontage* Knockback_WeakLeft; // 0x8(0x8)
	struct UAnimMontage* Knockback_WeakRight; // 0x10(0x8)
	struct UAnimMontage* Knockback_MidCenter; // 0x18(0x8)
	struct UAnimMontage* Knockback_MidLeft; // 0x20(0x8)
	struct UAnimMontage* Knockback_MidRight; // 0x28(0x8)
	struct UAnimMontage* Knockback_StrongCenter; // 0x30(0x8)
	struct UAnimMontage* Knockback_StrongLeft; // 0x38(0x8)
	struct UAnimMontage* Knockback_StrongRight; // 0x40(0x8)
	struct UAnimMontage* Knockback_FallingObject; // 0x48(0x8)
};

// ScriptStruct ProjectD.PDDeathAnimData
// Size : 0x40 (Inherited : 0x0)
struct FPDDeathAnimData {
	struct UAnimMontage* Death_Random; // 0x0(0x8)
	struct UAnimMontage* Death_GROGGY_Random; // 0x8(0x8)
	struct UAnimMontage* Death_Groggy_By_Soccer_Kick; // 0x10(0x8)
	struct UAnimMontage* Death_GROGGY_Fall; // 0x18(0x8)
	struct UAnimMontage* Death_CLIMB_2P; // 0x20(0x8)
	struct UAnimMontage* Death_CLIMB_4P; // 0x28(0x8)
	struct UAnimMontage* Death_Front_KnockBack; // 0x30(0x8)
	struct UAnimMontage* Death_Back_KnockBack; // 0x38(0x8)
};

// ScriptStruct ProjectD.PDItemUseActionAnimDatas
// Size : 0x30 (Inherited : 0x0)
struct FPDItemUseActionAnimDatas {
	struct UAnimMontage* Bandage; // 0x0(0x8)
	struct UAnimMontage* Painkiller; // 0x8(0x8)
	struct UAnimMontage* ArmorPlateReplaceKit; // 0x10(0x8)
	struct UAnimMontage* Bandage_CLI; // 0x18(0x8)
	struct UAnimMontage* Painkiller_CLI; // 0x20(0x8)
	struct UAnimMontage* ArmorPlateReplaceKit_CLI; // 0x28(0x8)
};

// ScriptStruct ProjectD.PDInteractionActionAnimDatas
// Size : 0x48 (Inherited : 0x0)
struct FPDInteractionActionAnimDatas {
	struct UAnimMontage* PickItem_Crouch_Left; // 0x0(0x8)
	struct UAnimMontage* PickItem_Crouch_Right; // 0x8(0x8)
	struct UAnimMontage* PickItem_Stand_Left; // 0x10(0x8)
	struct UAnimMontage* PickItem_Stand_Right; // 0x18(0x8)
	struct UAnimMontage* Door_HingeOpen; // 0x20(0x8)
	struct UAnimMontage* GroggyRescue; // 0x28(0x8)
	struct UAnimMontage* Bomb; // 0x30(0x8)
	struct UAnimMontage* Bomb_Crouch; // 0x38(0x8)
	struct UAnimMontage* Bomb_Groggy; // 0x40(0x8)
};

// ScriptStruct ProjectD.PDGroggyActionAnimDatas
// Size : 0x80 (Inherited : 0x0)
struct FPDGroggyActionAnimDatas {
	struct UAnimMontage* Enter_MeleeHit; // 0x0(0x8)
	struct UAnimMontage* Enter_Random_Hit_Head; // 0x8(0x8)
	struct UAnimMontage* Enter_Random_Hit_Chest; // 0x10(0x8)
	struct UAnimMontage* Enter_Random_Hit_Abdomen; // 0x18(0x8)
	struct UAnimMontage* Enter_Random_Hit_LeftLeg; // 0x20(0x8)
	struct UAnimMontage* Enter_Random_Hit_RightLeg; // 0x28(0x8)
	struct UAnimMontage* Exit; // 0x30(0x8)
	struct UAnimMontage* FallEnter; // 0x38(0x8)
	struct UAnimMontage* FallLand; // 0x40(0x8)
	struct UAnimMontage* Climb2PEnter; // 0x48(0x8)
	struct UAnimMontage* Climb4PEnter; // 0x50(0x8)
	struct UAnimMontage* SlideEnter; // 0x58(0x8)
	struct UAnimMontage* InertiaEnter; // 0x60(0x8)
	struct UAnimMontage* FrontKnockBackEnter; // 0x68(0x8)
	struct UAnimMontage* BackKnockBackEnter; // 0x70(0x8)
	struct UAnimMontage* BurnEnter; // 0x78(0x8)
};

// ScriptStruct ProjectD.PDClimbActionAnimDatas
// Size : 0x68 (Inherited : 0x0)
struct FPDClimbActionAnimDatas {
	struct UAnimMontage* ClimbEnter; // 0x0(0x8)
	struct UAnimMontage* ClimbLedgeGrap; // 0x8(0x8)
	struct UAnimMontage* ClimbExit; // 0x10(0x8)
	struct UAnimMontage* ClimbExit_2PJump; // 0x18(0x8)
	struct UAnimMontage* ClimbExit_4PJump; // 0x20(0x8)
	struct UAnimMontage* ClimbMove_Turn; // 0x28(0x8)
	struct UAnimMontage* ClimbMove_2P; // 0x30(0x8)
	struct UAnimMontage* ClimbMove_2PWide; // 0x38(0x8)
	struct UAnimMontage* ClimbMove_4P; // 0x40(0x8)
	struct UAnimMontage* ClimbMove_4PWide; // 0x48(0x8)
	struct UAnimMontage* ClimbJump_2P; // 0x50(0x8)
	struct UAnimMontage* ClimbJump_4P; // 0x58(0x8)
	struct UAnimMontage* ClimbLongJump_4P; // 0x60(0x8)
};

// ScriptStruct ProjectD.PDParkourActionAnimDatas
// Size : 0x1B0 (Inherited : 0x0)
struct FPDParkourActionAnimDatas {
	struct UAnimMontage* Jump; // 0x0(0x8)
	struct UAnimMontage* Jump_Sprint; // 0x8(0x8)
	struct UAnimMontage* Jump_Long01; // 0x10(0x8)
	struct UAnimMontage* Jump_Long02; // 0x18(0x8)
	struct UAnimMontage* Jump_Long03; // 0x20(0x8)
	struct UAnimMontage* Jump_Long04; // 0x28(0x8)
	struct UAnimMontage* SoftLand; // 0x30(0x8)
	struct UAnimMontage* AutoRollLand; // 0x38(0x8)
	struct UAnimMontage* HardLand; // 0x40(0x8)
	struct UAnimMontage* HardLand1; // 0x48(0x8)
	struct UAnimMontage* HardLand2; // 0x50(0x8)
	struct UAnimMontage* HardLand1_Move; // 0x58(0x8)
	struct UAnimMontage* HardLand2_Move; // 0x60(0x8)
	struct UAnimMontage* groggyland; // 0x68(0x8)
	struct UAnimMontage* DamageLand; // 0x70(0x8)
	struct UAnimMontage* Roll_F01; // 0x78(0x8)
	struct UAnimMontage* Roll_F02; // 0x80(0x8)
	struct UAnimMontage* Roll_F03; // 0x88(0x8)
	struct UAnimMontage* Roll_F04; // 0x90(0x8)
	struct UAnimMontage* Roll_B; // 0x98(0x8)
	struct UAnimMontage* Roll_L; // 0xA0(0x8)
	struct UAnimMontage* Roll_R; // 0xA8(0x8)
	struct UAnimMontage* GRO_Roll_F; // 0xB0(0x8)
	struct UAnimMontage* GRO_Roll_B; // 0xB8(0x8)
	struct UAnimMontage* GRO_Roll_L; // 0xC0(0x8)
	struct UAnimMontage* GRO_Roll_R; // 0xC8(0x8)
	struct UAnimMontage* Vault_100_Walk; // 0xD0(0x8)
	struct UAnimMontage* Vault_100_Run; // 0xD8(0x8)
	struct UAnimMontage* Vault_150_Walk; // 0xE0(0x8)
	struct UAnimMontage* Vault_150_Run; // 0xE8(0x8)
	struct UAnimMontage* Vault_200_Walk; // 0xF0(0x8)
	struct UAnimMontage* Vault_200_Run; // 0xF8(0x8)
	struct UAnimMontage* Vault_250_Walk; // 0x100(0x8)
	struct UAnimMontage* Vault_250_Run; // 0x108(0x8)
	struct UAnimMontage* Vault_300_Walk; // 0x110(0x8)
	struct UAnimMontage* Vault_300_Run; // 0x118(0x8)
	struct UAnimMontage* Climbup_51; // 0x120(0x8)
	struct UAnimMontage* Climbup_100_Walk; // 0x128(0x8)
	struct UAnimMontage* Climbup_100_Run; // 0x130(0x8)
	struct UAnimMontage* Climbup_150_Walk; // 0x138(0x8)
	struct UAnimMontage* Climbup_150_Run; // 0x140(0x8)
	struct UAnimMontage* Climbup_200_Walk; // 0x148(0x8)
	struct UAnimMontage* Climbup_200_Run; // 0x150(0x8)
	struct UAnimMontage* Climbup_250_Walk; // 0x158(0x8)
	struct UAnimMontage* Climbup_250_Run; // 0x160(0x8)
	struct UAnimMontage* Climbup_300_Walk; // 0x168(0x8)
	struct UAnimMontage* Climbup_300_Run; // 0x170(0x8)
	struct UAnimMontage* Climbup_2P_Walk; // 0x178(0x8)
	struct UAnimMontage* Climbup_2P_Run; // 0x180(0x8)
	struct UAnimMontage* ClimbupMoveStart_101; // 0x188(0x8)
	struct UAnimMontage* ClimbupMoveStart_200_301; // 0x190(0x8)
	struct UAnimMontage* LedgeGrapVault; // 0x198(0x8)
	struct UAnimMontage* LedgeGrapClimbupFull; // 0x1A0(0x8)
	struct UAnimMontage* LedgeGrapClimbupHalf; // 0x1A8(0x8)
};

// ScriptStruct ProjectD.PDTurnAnimDatas
// Size : 0x70 (Inherited : 0x0)
struct FPDTurnAnimDatas {
	struct UAnimMontage* Loco_Stand_TurnInPlaceLeft; // 0x0(0x8)
	struct UAnimMontage* Loco_Stand_TurnInPlaceRight; // 0x8(0x8)
	struct UAnimMontage* Loco_Stand_TurnInPlaceLeft_GunStance; // 0x10(0x8)
	struct UAnimMontage* Loco_Stand_TurnInPlaceRight_GunStance; // 0x18(0x8)
	struct UAnimMontage* Loco_Crouch_TurnInPlaceLeft; // 0x20(0x8)
	struct UAnimMontage* Loco_Crouch_TurnInPlaceRight; // 0x28(0x8)
	struct UAnimMontage* Loco_Crouch_TurnInPlaceLeft_GunStance; // 0x30(0x8)
	struct UAnimMontage* Loco_Crouch_TurnInPlaceRight_GunStance; // 0x38(0x8)
	struct UAnimMontage* Loco_Groggy_TurnInPlaceLeft; // 0x40(0x8)
	struct UAnimMontage* Loco_Groggy_TurnInPlaceRight; // 0x48(0x8)
	struct UAnimMontage* Stand_AlignRotation_TurnLeft; // 0x50(0x8)
	struct UAnimMontage* Stand_AlignRoatation_TurnRight; // 0x58(0x8)
	struct UAnimMontage* Crouch_AlignRoatation_TurnLeft; // 0x60(0x8)
	struct UAnimMontage* Crouch_AlignRotation_TurnRight; // 0x68(0x8)
};

// ScriptStruct ProjectD.PDLeanAnimDatas
// Size : 0x8 (Inherited : 0x0)
struct FPDLeanAnimDatas {
	struct UAnimMontage* Lean_Loop; // 0x0(0x8)
};

// ScriptStruct ProjectD.PDPCUsingInABPAnimDatas
// Size : 0x60 (Inherited : 0x0)
struct FPDPCUsingInABPAnimDatas {
	struct UBlendSpace* Loco_Climb_2P; // 0x0(0x8)
	struct UBlendSpace* Loco_Climb_4P; // 0x8(0x8)
	struct UAnimSequence* Loco_Groggy_Idle_Bare; // 0x10(0x8)
	struct UAnimSequence* Loco_Groggy_Idle_HG; // 0x18(0x8)
	struct UBlendSpace* Loco_Groggy_Run_Bare; // 0x20(0x8)
	struct UBlendSpace* Loco_Groggy_Run_HG; // 0x28(0x8)
	struct UAnimSequence* Loco_Fall_Groggy_Idle_Bare; // 0x30(0x8)
	struct UAnimSequence* Loco_Climb_Groggy_Idle_Bare; // 0x38(0x8)
	struct UBlendSpaceBase* AO_Groggy_Bare; // 0x40(0x8)
	struct UBlendSpaceBase* AO_Groggy_HG; // 0x48(0x8)
	struct UBlendSpace* Loco_Slide_Default; // 0x50(0x8)
	struct UBlendSpace* Loco_Slide_Groggy; // 0x58(0x8)
};

// ScriptStruct ProjectD.PDLobbyCharacterAnimData
// Size : 0xD8 (Inherited : 0x8)
struct FPDLobbyCharacterAnimData : FTableRowBase {
	struct FPDLobbyAnimData LobbyAnimData; // 0x8(0xD0)
};

// ScriptStruct ProjectD.PDLobbyAnimData
// Size : 0xD0 (Inherited : 0x0)
struct FPDLobbyAnimData {
	struct UAnimSequence* Lobby_Scene_Select; // 0x0(0x8)
	struct UAnimSequence* Lobby_Scene_Idle_2; // 0x8(0x8)
	int32_t Lobby_Scene_Idle_1_Select_Percent; // 0x10(0x4)
	unsigned char UnknownData_14[0x0004]; // 0x14(0x4)
	struct UAnimSequence* Lobby_Scene_Idle_3; // 0x18(0x8)
	int32_t Lobby_Scene_Idle_2_Select_Percent; // 0x20(0x4)
	unsigned char UnknownData_24[0x0004]; // 0x24(0x4)
	struct UAnimSequence* Lobby_Scene_Matching_Start; // 0x28(0x8)
	struct UAnimSequence* Lobby_Scene_Matching_Idle; // 0x30(0x8)
	struct UAnimSequence* Lobby_Scene_Customizing; // 0x38(0x8)
	struct UAnimSequence* Lobby_Scene_Shop; // 0x40(0x8)
	struct UAnimSequence* Create_Scene_Select; // 0x48(0x8)
	struct TArray<struct FPDResultAnimSequence> Result_Scene_Win; // 0x50(0x10)
	struct TArray<struct FPDResultAnimSequence> Result_Scene_Lose; // 0x60(0x10)
	struct UAnimSequence* Lobby_Scene_Select_Hair; // 0x70(0x8)
	struct UAnimSequence* Lobby_Scene_Idle_Hair_2; // 0x78(0x8)
	struct UAnimSequence* Lobby_Scene_Idle_Hair_3; // 0x80(0x8)
	struct UAnimSequence* Lobby_Scene_Matching_Start_Hair; // 0x88(0x8)
	struct UAnimSequence* Lobby_Scene_Matching_Idle_Hair; // 0x90(0x8)
	struct UAnimSequence* Lobby_Scene_Customizing_Hair; // 0x98(0x8)
	struct UAnimSequence* Lobby_Scene_Shop_Hair; // 0xA0(0x8)
	struct UAnimSequence* Create_Scene_Select_Hair; // 0xA8(0x8)
	struct TArray<struct FPDResultHairAnimSequence> Result_Scene_Win_Hair; // 0xB0(0x10)
	struct TArray<struct FPDResultHairAnimSequence> Result_Scene_Lose_Hair; // 0xC0(0x10)
};

// ScriptStruct ProjectD.PDResultHairAnimSequence
// Size : 0x10 (Inherited : 0x0)
struct FPDResultHairAnimSequence {
	struct UAnimSequence* ActionAnimData; // 0x0(0x8)
	struct UAnimSequence* IdleAnimData; // 0x8(0x8)
};

// ScriptStruct ProjectD.PDResultAnimSequence
// Size : 0x18 (Inherited : 0x0)
struct FPDResultAnimSequence {
	struct UAnimSequence* ActionAnimData; // 0x0(0x8)
	struct UAnimSequence* IdleAnimData; // 0x8(0x8)
	int32_t EquipWeaponIndex; // 0x10(0x4)
	unsigned char UnknownData_14[0x0004]; // 0x14(0x4)
};

// ScriptStruct ProjectD.PDFacialAnimData
// Size : 0x3B0 (Inherited : 0x8)
struct FPDFacialAnimData : FTableRowBase {
	struct FPDIngameFacialAnimData IngameFacialAnimData[9]; // 0x8(0x3A8)
};

// ScriptStruct ProjectD.PDIngameFacialAnimData
// Size : 0x68 (Inherited : 0x0)
struct FPDIngameFacialAnimData {
	struct UAnimSequence* Idle; // 0x0(0x8)
	struct UAnimSequence* Crouch; // 0x8(0x8)
	struct UAnimSequence* Exhauted; // 0x10(0x8)
	struct UAnimSequence* ads; // 0x18(0x8)
	struct UAnimSequence* Groggy; // 0x20(0x8)
	struct UAnimSequence* Dead; // 0x28(0x8)
	struct UAnimSequence* Env1; // 0x30(0x8)
	struct UAnimMontage* Melee; // 0x38(0x8)
	struct UAnimMontage* Hipfire; // 0x40(0x8)
	struct UAnimMontage* ADSFire; // 0x48(0x8)
	struct UAnimMontage* Reload; // 0x50(0x8)
	struct UAnimMontage* Painful; // 0x58(0x8)
	struct UAnimMontage* Parkour; // 0x60(0x8)
};

// ScriptStruct ProjectD.PDHitReactionBSAnimData
// Size : 0x8 (Inherited : 0x0)
struct FPDHitReactionBSAnimData {
	struct UBlendSpaceBase* HitReaction_BS; // 0x0(0x8)
};

// ScriptStruct ProjectD.TakeHitInfo
// Size : 0x120 (Inherited : 0x0)
struct FTakeHitInfo {
	float ActualDamage; // 0x0(0x4)
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	class UObject* DamageTypeClass; // 0x8(0x8)
	struct FWeakObjectPtr<struct APawn> PawnInstigator; // 0x10(0x8)
	struct FWeakObjectPtr<struct AActor> DamageCauser; // 0x18(0x8)
	int32_t DamageEventClassID; // 0x20(0x4)
	bool bKilled; // 0x24(0x1)
	bool bBlackOut; // 0x25(0x1)
	enum class None EnsureReplicationByte; // 0x26(0x1)
	unsigned char UnknownData_27[0x0001]; // 0x27(0x1)
	struct FDamageEvent GeneralDamageEvent; // 0x28(0x10)
	struct FPointDamageEvent PointDamageEvent; // 0x38(0xA8)
	struct FRadialDamageEvent RadialDamageEvent; // 0xE0(0x40)
};

// ScriptStruct ProjectD.NeighborInfoArray
// Size : 0x48 (Inherited : 0x0)
struct FNeighborInfoArray {
	struct TArray<struct APDClimbNodeActor*> ClimbNodeActors; // 0x0(0x10)
	unsigned char UnknownData_10[0x0008]; // 0x10(0x8)
	struct APDClimbableActor* ClimbableActor; // 0x18(0x8)
	struct FVector BoxExtent; // 0x20(0xC)
	struct FVector LeftLocation; // 0x2C(0xC)
	struct FVector RightLocation; // 0x38(0xC)
	unsigned char UnknownData_44[0x0004]; // 0x44(0x4)
};

// ScriptStruct ProjectD.NeighborInfo
// Size : 0x40 (Inherited : 0x0)
struct FNeighborInfo {
	struct FClimbNodeInfo Self; // 0x0(0x20)
	struct TArray<struct FClimbNodeInfo> NeighborActors; // 0x20(0x10)
	struct TArray<struct FClimbNodeInfo> NeighborActorsToJump; // 0x30(0x10)
};

// ScriptStruct ProjectD.ClimbNodeInfo
// Size : 0x20 (Inherited : 0x0)
struct FClimbNodeInfo {
	bool bDataOverridden; // 0x0(0x1)
	unsigned char UnknownData_1[0x0007]; // 0x1(0x7)
	struct APDClimbableActor* ClimbableActor; // 0x8(0x8)
	enum class EPDClimbStanceState ClimbType; // 0x10(0x1)
	enum class EPDClimbMoveType MoveType; // 0x11(0x1)
	enum class EPDClimbPointUptype ClimbUpType; // 0x12(0x1)
	unsigned char UnknownData_13[0x000D]; // 0x13(0xD)
};

// ScriptStruct ProjectD.SafeZoneDrawing
// Size : 0x8 (Inherited : 0x0)
struct FSafeZoneDrawing {
	enum class ESafeZoneDrawStyle Style; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	struct FColor Color; // 0x4(0x4)
};

// ScriptStruct ProjectD.HitFeedbackIcon
// Size : 0x20 (Inherited : 0x0)
struct FHitFeedbackIcon {
	struct UPaperSprite* Sprite; // 0x0(0x8)
	struct FLinearColor Color; // 0x8(0x10)
	struct FVector2D Size; // 0x18(0x8)
};

// ScriptStruct ProjectD.PDIKAnimInstanceProxy
// Size : 0xBA0 (Inherited : 0xAB0)
struct FPDIKAnimInstanceProxy : FIKAnimInstanceProxy {
	struct FPDHandIKData HandIKData; // 0xAB0(0xA0)
	float StanceExplicitTime; // 0xB50(0x4)
	unsigned char UnknownData_B54[0x0004]; // 0xB54(0x4)
	struct UPDIKAnimInstance* IKAnimInstance; // 0xB58(0x8)
	struct UPDStateComponent* OwnerStateComponent; // 0xB60(0x8)
	struct APDPlayerCharacter* OwnerPlayerCharacter; // 0xB68(0x8)
	float AimClampedYaw; // 0xB70(0x4)
	unsigned char UnknownData_B74[0x002C]; // 0xB74(0x2C)
};

// ScriptStruct ProjectD.PDIngameMapPos
// Size : 0x28 (Inherited : 0x0)
struct FPDIngameMapPos {
	struct FAnchors Anchors; // 0x0(0x10)
	struct FMargin Offsets; // 0x10(0x10)
	struct FVector2D Alignment; // 0x20(0x8)
};

// ScriptStruct ProjectD.LobbySceneEventData
// Size : 0x14 (Inherited : 0x0)
struct FLobbySceneEventData {
	enum class ESceneEvent TargetSceneEvent; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float Duration; // 0x4(0x4)
	struct FVector CameraDeltaPos; // 0x8(0xC)
};

// ScriptStruct ProjectD.PDActionExecutionInfo
// Size : 0x20 (Inherited : 0x0)
struct FPDActionExecutionInfo {
	unsigned char UnknownData_0[0x0020]; // 0x0(0x20)
};

// ScriptStruct ProjectD.SmoothMoveInfo
// Size : 0x108 (Inherited : 0x0)
struct FSmoothMoveInfo {
	unsigned char UnknownData_0[0x0090]; // 0x0(0x90)
	struct UPrimitiveComponent* TargetRotationComponent; // 0x90(0x8)
	struct UPrimitiveComponent* TargetLocationComponent; // 0x98(0x8)
	struct AActor* TargetRotationActor; // 0xA0(0x8)
	struct AActor* TargetLocationActor; // 0xA8(0x8)
	unsigned char UnknownData_B0[0x0038]; // 0xB0(0x38)
	struct UCurveFloat* CurrentSmoothRotationCurve; // 0xE8(0x8)
	struct UCurveFloat* CurrentSmoothLocationCurveFloat; // 0xF0(0x8)
	struct UCurveVector* CurrentSmoothLocationCurveVector; // 0xF8(0x8)
	unsigned char UnknownData_100[0x0008]; // 0x100(0x8)
};

// ScriptStruct ProjectD.PDBirdAnimData
// Size : 0x48 (Inherited : 0x8)
struct FPDBirdAnimData : FTableRowBase {
	struct TArray<struct UAnimSequence*> Idles; // 0x8(0x10)
	struct UAnimSequence* Walk; // 0x18(0x8)
	struct UAnimSequence* FlyStart; // 0x20(0x8)
	struct UAnimSequence* Fly; // 0x28(0x8)
	struct UAnimSequence* Wing; // 0x30(0x8)
	struct UAnimSequence* Landing_Loop; // 0x38(0x8)
	struct UAnimSequence* Landing_End; // 0x40(0x8)
};

// ScriptStruct ProjectD.CameraMoveInfo
// Size : 0x54 (Inherited : 0x0)
struct FCameraMoveInfo {
	float ArmLength; // 0x0(0x4)
	struct FVector SocketOffset; // 0x4(0xC)
	struct FVector TargetOffset; // 0x10(0xC)
	struct FRotator RelativeRotation; // 0x1C(0xC)
	float FOV; // 0x28(0x4)
	float InterpTime; // 0x2C(0x4)
	float ReturnTime; // 0x30(0x4)
	float DelayTime; // 0x34(0x4)
	struct FWeakObjectPtr<struct UCurveFloat> BlendingCurve; // 0x38(0x8)
	struct FWeakObjectPtr<struct UCurveFloat> ReturnCurve; // 0x40(0x8)
	unsigned char UnknownData_48[0x000C]; // 0x48(0xC)
};

// ScriptStruct ProjectD.PDFootstepInfo
// Size : 0x50 (Inherited : 0x0)
struct FPDFootstepInfo {
	struct UDecalComponent* decal; // 0x0(0x8)
	unsigned char UnknownData_8[0x0048]; // 0x8(0x48)
};

// ScriptStruct ProjectD.SkeletalMeshMergeParams
// Size : 0x48 (Inherited : 0x0)
struct FSkeletalMeshMergeParams {
	struct TArray<struct FSkelMeshMergeSectionMapping_BP> MeshSectionMappings; // 0x0(0x10)
	struct TArray<struct FSkelMeshMergeUVTransformMapping> UVTransformsPerMesh; // 0x10(0x10)
	struct TArray<struct USkeletalMesh*> MeshesToMerge; // 0x20(0x10)
	int32_t StripTopLODS; // 0x30(0x4)
	unsigned char bNeedsCpuAccess : 1; // 0x34(0x1)
	unsigned char bSkeletonBefore : 1; // 0x34(0x1)
	unsigned char UnknownData_34_2 : 6; // 0x34(0x1)
	unsigned char UnknownData_35[0x0003]; // 0x35(0x3)
	struct USkeleton* Skeleton; // 0x38(0x8)
	struct UPhysicsAsset* PhysicsAsset; // 0x40(0x8)
};

// ScriptStruct ProjectD.SkelMeshMergeUVTransformMapping
// Size : 0x10 (Inherited : 0x0)
struct FSkelMeshMergeUVTransformMapping {
	struct TArray<struct FSkelMeshMergeUVTransform> UVTransformsPerMesh; // 0x0(0x10)
};

// ScriptStruct ProjectD.SkelMeshMergeUVTransform
// Size : 0x10 (Inherited : 0x0)
struct FSkelMeshMergeUVTransform {
	struct TArray<struct FTransform> UVTransforms; // 0x0(0x10)
};

// ScriptStruct ProjectD.SkelMeshMergeSectionMapping_BP
// Size : 0x10 (Inherited : 0x0)
struct FSkelMeshMergeSectionMapping_BP {
	struct TArray<int32_t> SectionIDs; // 0x0(0x10)
};

// ScriptStruct ProjectD.ActiveRangeInfo
// Size : 0x24 (Inherited : 0x0)
struct FActiveRangeInfo {
	int32_t DefScore; // 0x0(0x4)
	int32_t PlayerExistWeight; // 0x4(0x4)
	int32_t PlayerNoneWeight; // 0x8(0x4)
	float Height; // 0xC(0x4)
	float ARadius; // 0x10(0x4)
	float BRadius; // 0x14(0x4)
	struct FColor AColor; // 0x18(0x4)
	struct FColor BColor; // 0x1C(0x4)
	float Bold; // 0x20(0x4)
};

// ScriptStruct ProjectD.EventData
// Size : 0x2C (Inherited : 0x0)
struct FEventData {
	float ExecuteTime; // 0x0(0x4)
	float StartKey; // 0x4(0x4)
	float EndKey; // 0x8(0x4)
	float Duration; // 0xC(0x4)
	float FOV; // 0x10(0x4)
	enum class ESplineMovementType SplineMoveType; // 0x14(0x4)
	struct FRotator CustomRotation; // 0x18(0xC)
	struct FName CharacterBone; // 0x24(0x8)
};

