// Class ProjectD.AnimNotify_PlayFacialMontage
// Size : 0x40 (Inherited : 0x38)
struct UAnimNotify_PlayFacialMontage : UAnimNotify {
	struct FName Name; // 0x38(0x8)
};

// Class ProjectD.ExportCharacterSpawn
// Size : 0x230 (Inherited : 0x220)
struct AExportCharacterSpawn : AActor {
	struct UStaticMeshComponent* StaticMeshComp; // 0x220(0x8)
	enum class ECharacterSpawnGroup Grouptype; // 0x228(0x1)
	unsigned char UnknownData_229[0x0003]; // 0x229(0x3)
	int32_t Index; // 0x22C(0x4)
};

// Class ProjectD.ExportMissionScoreModeSpawnSystem
// Size : 0x268 (Inherited : 0x220)
struct AExportMissionScoreModeSpawnSystem : AActor {
	int32_t PcID; // 0x220(0x4)
	unsigned char UnknownData_224[0x0004]; // 0x224(0x4)
	struct UStaticMeshComponent* GroupComp; // 0x228(0x8)
	struct FGroupRangeInfo GroupRangeInfo; // 0x230(0x24)
	unsigned char UnknownData_254[0x0004]; // 0x254(0x4)
	struct UChildActorComponent* CCTV_ActorComp; // 0x258(0x8)
	bool bInGameDebugDraw; // 0x260(0x1)
	unsigned char UnknownData_261[0x0007]; // 0x261(0x7)
};

// Class ProjectD.ExportModeSpawnSystem
// Size : 0x280 (Inherited : 0x220)
struct AExportModeSpawnSystem : AActor {
	int32_t PcID; // 0x220(0x4)
	bool bInGameLineVisible; // 0x224(0x1)
	unsigned char UnknownData_225[0x0003]; // 0x225(0x3)
	struct UStaticMeshComponent* DefuseBombComp; // 0x228(0x8)
	struct UStaticMeshComponent* TeamAComp; // 0x230(0x8)
	struct UStaticMeshComponent* TeamBComp; // 0x238(0x8)
	struct UStaticMeshComponent* TeamAShopTrigger; // 0x240(0x8)
	struct UBoxComponent* TeamAShopBoxComp; // 0x248(0x8)
	struct UStaticMeshComponent* TeamBShopTrigger; // 0x250(0x8)
	struct UBoxComponent* TeamBShopBoxComp; // 0x258(0x8)
	struct UChildActorComponent* TeamA_CCTV_ActorComp; // 0x260(0x8)
	struct UChildActorComponent* TeamB_CCTV_ActorComp; // 0x268(0x8)
	struct UChildActorComponent* TeamA_IntroCam_ActorComp; // 0x270(0x8)
	struct UChildActorComponent* TeamB_IntroCam_ActorComp; // 0x278(0x8)
};

// Class ProjectD.ExportTeamModeSpawnSystem
// Size : 0x280 (Inherited : 0x220)
struct AExportTeamModeSpawnSystem : AActor {
	int32_t PcID; // 0x220(0x4)
	bool bInGameLineVisible; // 0x224(0x1)
	unsigned char UnknownData_225[0x0003]; // 0x225(0x3)
	struct UStaticMeshComponent* DefuseBombComp; // 0x228(0x8)
	struct UStaticMeshComponent* TeamAComp; // 0x230(0x8)
	struct UStaticMeshComponent* TeamBComp; // 0x238(0x8)
	struct UStaticMeshComponent* TeamAShopTrigger; // 0x240(0x8)
	struct UBoxComponent* TeamAShopBoxComp; // 0x248(0x8)
	struct UStaticMeshComponent* TeamBShopTrigger; // 0x250(0x8)
	struct UBoxComponent* TeamBShopBoxComp; // 0x258(0x8)
	struct UChildActorComponent* TeamA_CCTV_ActorComp; // 0x260(0x8)
	struct UChildActorComponent* TeamB_CCTV_ActorComp; // 0x268(0x8)
	struct UChildActorComponent* TeamA_IntroCam_ActorComp; // 0x270(0x8)
	struct UChildActorComponent* TeamB_IntroCam_ActorComp; // 0x278(0x8)
};

// Class ProjectD.ExportTriggerBox
// Size : 0x230 (Inherited : 0x228)
struct AExportTriggerBox : ATriggerBox {
	int32_t TargetType; // 0x228(0x4)
	bool EnableExport; // 0x22C(0x1)
	unsigned char UnknownData_22D[0x0003]; // 0x22D(0x3)
};

// Class ProjectD.ExportWorldItem
// Size : 0x240 (Inherited : 0x220)
struct AExportWorldItem : AActor {
	struct UStaticMeshComponent* StaticMeshComp; // 0x220(0x8)
	bool bUseItemSpawn; // 0x228(0x1)
	bool bRandomZRotation; // 0x229(0x1)
	unsigned char UnknownData_22A[0x0002]; // 0x22A(0x2)
	int32_t ModeItemIndex; // 0x22C(0x4)
	struct TArray<int32_t> ItemsGroupIndexList; // 0x230(0x10)
};

// Class ProjectD.IKTargetGetter_Climbing
// Size : 0x30 (Inherited : 0x30)
struct UIKTargetGetter_Climbing : UIKTargetGetter {
};

// Class ProjectD.IKTargetGetter_Parkour
// Size : 0x40 (Inherited : 0x30)
struct UIKTargetGetter_Parkour : UIKTargetGetter {
	struct UAnimNotify_SetIKTarget* IKTargetNotify; // 0x30(0x8)
	struct UAnimationAsset* Animation; // 0x38(0x8)
};

// Class ProjectD.IKTargetGetter_Weapon
// Size : 0x38 (Inherited : 0x30)
struct UIKTargetGetter_Weapon : UIKTargetGetter {
	struct FName SocketName; // 0x30(0x8)
};

// Class ProjectD.PDCharacterOptimizer
// Size : 0x28 (Inherited : 0x28)
struct UPDCharacterOptimizer : UInterface {
};

// Class ProjectD.LiveDataTable
// Size : 0xC8 (Inherited : 0xC8)
struct ULiveDataTable : UDataTable {
};

// Class ProjectD.LiveDataTableAsset
// Size : 0xD8 (Inherited : 0x30)
struct ULiveDataTableAsset : UDataAsset {
	struct FName Name; // 0x30(0x8)
	struct FFilePath SourcePath; // 0x38(0x10)
	struct UScriptStruct* DataClass; // 0x48(0x8)
	struct ULiveDataTable* Table; // 0x50(0x8)
	unsigned char UnknownData_58[0x0080]; // 0x58(0x80)
};

// Class ProjectD.PDUserWidget
// Size : 0x288 (Inherited : 0x230)
struct UPDUserWidget : UUserWidget {
	unsigned char UnknownData_230[0x0008]; // 0x230(0x8)
	struct TMap<struct FName, struct UWidgetAnimation*> AnimMap; // 0x238(0x50)
};

// Class ProjectD.PDIngameModeWidget
// Size : 0x290 (Inherited : 0x288)
struct UPDIngameModeWidget : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
};

// Class ProjectD.PD3DIndicatorUI
// Size : 0x2E8 (Inherited : 0x290)
struct UPD3DIndicatorUI : UPDIngameModeWidget {
	struct UCanvasPanel* CP_3DIndicator; // 0x290(0x8)
	struct UPDImage* IMG_Arrow; // 0x298(0x8)
	struct UWidgetSwitcher* WS_IndicatorType; // 0x2A0(0x8)
	float SphereRadius; // 0x2A8(0x4)
	struct FVector2D MinScale; // 0x2AC(0x8)
	float RadiusX; // 0x2B4(0x4)
	float MinRadiusY; // 0x2B8(0x4)
	float MaxPingDistance; // 0x2BC(0x4)
	float CreateTime; // 0x2C0(0x4)
	float CreateTranslationRate; // 0x2C4(0x4)
	float CreateScaleRate; // 0x2C8(0x4)
	float HoldTime; // 0x2CC(0x4)
	float RemoveTime; // 0x2D0(0x4)
	float RemoveScaleRate; // 0x2D4(0x4)
	unsigned char UnknownData_2D8[0x0010]; // 0x2D8(0x10)
};

// Class ProjectD.PDAccountGameMode
// Size : 0x2C0 (Inherited : 0x2C0)
struct APDAccountGameMode : AGameModeBase {
};

// Class ProjectD.PDActionBase
// Size : 0x168 (Inherited : 0x28)
struct UPDActionBase : UObject {
	unsigned char UnknownData_28[0x0020]; // 0x28(0x20)
	struct UPDActionComponent* OwnerActionComponent; // 0x48(0x8)
	struct UPDMainPlayerActionComponent* OwnerMainPlayerActionComponent; // 0x50(0x8)
	struct UPDStateComponent* OwnerStateComponent; // 0x58(0x8)
	struct UPDMainPlayerStateComponent* OwnerMainPlayerStateComponent; // 0x60(0x8)
	struct APDPlayerCharacter* OwnerPlayerCharacter; // 0x68(0x8)
	struct APDMainPlayerCharacter* OwnerMainPlayerCharacter; // 0x70(0x8)
	struct UAnimMontage* CurrentPlayingMontage; // 0x78(0x8)
	unsigned char UnknownData_80[0x00E8]; // 0x80(0xE8)
};

// Class ProjectD.PDActionAFK
// Size : 0x168 (Inherited : 0x168)
struct UPDActionAFK : UPDActionBase {
};

// Class ProjectD.PDActionWeaponBase
// Size : 0x168 (Inherited : 0x168)
struct UPDActionWeaponBase : UPDActionBase {
};

// Class ProjectD.PDActionAimWeapon
// Size : 0x178 (Inherited : 0x168)
struct UPDActionAimWeapon : UPDActionWeaponBase {
	unsigned char UnknownData_168[0x0010]; // 0x168(0x10)
};

// Class ProjectD.PDAnimInstance
// Size : 0x280 (Inherited : 0x270)
struct UPDAnimInstance : UAnimInstance {
	enum class EPDAnimset AnimSet; // 0x268(0x1)
	struct APDPlayerCharacter* OwnerPlayerCharacter; // 0x270(0x8)
	struct UPDStateComponent* OwnerStateComponent; // 0x278(0x8)
};

// Class ProjectD.PDPlayerAnimInstance
// Size : 0x5F0 (Inherited : 0x280)
struct UPDPlayerAnimInstance : UPDAnimInstance {
	enum class EPDLocoType PrevLocoType; // 0x280(0x1)
	enum class EPDLocoType LocoType; // 0x281(0x1)
	enum class EPDLocoState LocoState; // 0x282(0x1)
	enum class EPDMovementState MovementState; // 0x283(0x1)
	enum class EPDLeanState LeanState; // 0x284(0x1)
	enum class EPDStanceState StanceState; // 0x285(0x1)
	enum class EPDClimbStanceState ClimbStanceState; // 0x286(0x1)
	enum class EPDThrowStanceState ThrowStanceState; // 0x287(0x1)
	enum class EPDSlideStanceState SlideStanceState; // 0x288(0x1)
	enum class EPDAimingState AimingState; // 0x289(0x1)
	enum class EPDAimingState PrevAimingState; // 0x28A(0x1)
	enum class EPDGaitsState GaitState; // 0x28B(0x1)
	float GaitStateValue; // 0x28C(0x4)
	float GaitValue; // 0x290(0x4)
	float Direction; // 0x294(0x4)
	float AimPitch; // 0x298(0x4)
	float AimYaw; // 0x29C(0x4)
	float FreeLookYaw; // 0x2A0(0x4)
	float AimInterpTime; // 0x2A4(0x4)
	float LeanFB; // 0x2A8(0x4)
	float LeanLR; // 0x2AC(0x4)
	unsigned char UnknownData_2B0[0x0020]; // 0x2B0(0x20)
	float AbsLeanFactor; // 0x2D0(0x4)
	float StartPosition; // 0x2D4(0x4)
	float PlayRate; // 0x2D8(0x4)
	bool WStanceIsValid; // 0x2DC(0x1)
	bool SWStanceIsValid; // 0x2DD(0x1)
	unsigned char UnknownData_2DE[0x0002]; // 0x2DE(0x2)
	struct FPDPerSpecificWeaponAnimDatas PSpecificWeaponAnimDatas; // 0x2E0(0xC8)
	struct FPDPWUsingInABPAnimDatas PWAnimDatas; // 0x3A8(0x128)
	struct FPDPCUsingInABPAnimDatas PCAnimDatas; // 0x4D0(0x60)
	struct FPDIngameFacialAnimData IngameFacialAnimData; // 0x530(0x68)
	bool IsCharacterDead; // 0x598(0x1)
	bool bIsExhausted; // 0x599(0x1)
	bool bIsStealth; // 0x59A(0x1)
	bool MirrorFinalPose; // 0x59B(0x1)
	bool bWeaponN_To_WeaponL; // 0x59C(0x1)
	bool bOverrideUpper; // 0x59D(0x1)
	bool bOverrideLower; // 0x59E(0x1)
	bool bIsRagdoll; // 0x59F(0x1)
	bool bInSnapshot; // 0x5A0(0x1)
	unsigned char UnknownData_5A1[0x0007]; // 0x5A1(0x7)
	struct UCurveVector* YawOffset_FB; // 0x5A8(0x8)
	struct UCurveFloat* LeanCurve; // 0x5B0(0x8)
	struct FPDAnimGraphAimingValues AimingValues; // 0x5B8(0xC)
	unsigned char UnknownData_5C4[0x0004]; // 0x5C4(0x4)
	struct UBlendSpace* CurFRAnim; // 0x5C8(0x8)
	struct UPDFireRecoilLevel* FRLevel; // 0x5D0(0x8)
	enum class EPD4DirType StartingDir; // 0x5D8(0x1)
	enum class EPD4DirType StoppingDir; // 0x5D9(0x1)
	unsigned char UnknownData_5DA[0x0002]; // 0x5DA(0x2)
	float CrouchPoseStartRatio; // 0x5DC(0x4)
	float StandPoseStartRatio; // 0x5E0(0x4)
	unsigned char UnknownData_5E4[0x000C]; // 0x5E4(0xC)
};

// Class ProjectD.PDActionAnimInstance
// Size : 0x5F0 (Inherited : 0x5F0)
struct UPDActionAnimInstance : UPDPlayerAnimInstance {
};

// Class ProjectD.PDActionAnimNotify
// Size : 0x40 (Inherited : 0x38)
struct UPDActionAnimNotify : UAnimNotify {
	struct FName EventName; // 0x38(0x8)
};

// Class ProjectD.PDActionAnimNotifyState
// Size : 0x68 (Inherited : 0x30)
struct UPDActionAnimNotifyState : UAnimNotifyState {
	struct FName BeginEventName; // 0x30(0x8)
	struct UCurveBase* BeginCurve; // 0x38(0x8)
	struct FVector BeginVector; // 0x40(0xC)
	struct FName EndEventName; // 0x4C(0x8)
	struct FVector EndVector; // 0x54(0xC)
	enum class ECameraMovementType CameraMovement; // 0x60(0x1)
	unsigned char UnknownData_61[0x0007]; // 0x61(0x7)
};

// Class ProjectD.PDActionArmorPlateReplaceKit
// Size : 0x1A8 (Inherited : 0x168)
struct UPDActionArmorPlateReplaceKit : UPDActionBase {
	unsigned char UnknownData_168[0x0040]; // 0x168(0x40)
};

// Class ProjectD.PDActionBoltAction
// Size : 0x188 (Inherited : 0x168)
struct UPDActionBoltAction : UPDActionWeaponBase {
	unsigned char UnknownData_168[0x0020]; // 0x168(0x20)
};

// Class ProjectD.PDActionBurnReaction
// Size : 0x168 (Inherited : 0x168)
struct UPDActionBurnReaction : UPDActionBase {
};

// Class ProjectD.PDActionChangeStance
// Size : 0x170 (Inherited : 0x168)
struct UPDActionChangeStance : UPDActionBase {
	unsigned char UnknownData_168[0x0008]; // 0x168(0x8)
};

// Class ProjectD.PDActionChangeWeapon
// Size : 0x180 (Inherited : 0x168)
struct UPDActionChangeWeapon : UPDActionBase {
	unsigned char UnknownData_168[0x0018]; // 0x168(0x18)
};

// Class ProjectD.PDActionClimbBase
// Size : 0x168 (Inherited : 0x168)
struct UPDActionClimbBase : UPDActionBase {
};

// Class ProjectD.PDActionClimbEnterBase
// Size : 0x1F8 (Inherited : 0x168)
struct UPDActionClimbEnterBase : UPDActionClimbBase {
	unsigned char UnknownData_168[0x0090]; // 0x168(0x90)

	void PlayClimbEnter(); // Function ProjectD.PDActionClimbEnterBase.PlayClimbEnter // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C3E890
	void ClimbMoveEnd(); // Function ProjectD.PDActionClimbEnterBase.ClimbMoveEnd // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C3E870
};

// Class ProjectD.PDActionClimbEnterDownward
// Size : 0x1F8 (Inherited : 0x1F8)
struct UPDActionClimbEnterDownward : UPDActionClimbEnterBase {
};

// Class ProjectD.PDActionClimbEnterUpward
// Size : 0x200 (Inherited : 0x1F8)
struct UPDActionClimbEnterUpward : UPDActionClimbEnterBase {
	unsigned char UnknownData_1F8[0x0008]; // 0x1F8(0x8)
};

// Class ProjectD.PDActionClimbEnterVault
// Size : 0x1F8 (Inherited : 0x1F8)
struct UPDActionClimbEnterVault : UPDActionClimbEnterBase {
};

// Class ProjectD.PDActionClimbExit
// Size : 0x198 (Inherited : 0x168)
struct UPDActionClimbExit : UPDActionClimbBase {
	unsigned char UnknownData_168[0x0030]; // 0x168(0x30)
};

// Class ProjectD.PDActionClimbLedgeGrap
// Size : 0x218 (Inherited : 0x168)
struct UPDActionClimbLedgeGrap : UPDActionClimbBase {
	unsigned char UnknownData_168[0x00B0]; // 0x168(0xB0)
};

// Class ProjectD.PDActionClimbMove
// Size : 0x218 (Inherited : 0x168)
struct UPDActionClimbMove : UPDActionClimbBase {
	unsigned char UnknownData_168[0x00B0]; // 0x168(0xB0)
};

// Class ProjectD.PDActionCoinToss
// Size : 0x178 (Inherited : 0x168)
struct UPDActionCoinToss : UPDActionBase {
	unsigned char UnknownData_168[0x0010]; // 0x168(0x10)
};

// Class ProjectD.PDActionComponent
// Size : 0x118 (Inherited : 0xB0)
struct UPDActionComponent : UActorComponent {
	unsigned char UnknownData_B0[0x0018]; // 0xB0(0x18)
	struct TArray<struct UPDActionBase*> ActionList; // 0xC8(0x10)
	struct TArray<class UPDActionBase*> ActionClassList; // 0xD8(0x10)
	unsigned char UnknownData_E8[0x0018]; // 0xE8(0x18)
	struct UDataTable* ClimbUpHandOffsets; // 0x100(0x8)
	struct UDataTable* VaultHandOffsets; // 0x108(0x8)
	struct UDataTable* LedgeGrapHandOffsets; // 0x110(0x8)
};

// Class ProjectD.PDActionDrinkBottle
// Size : 0x168 (Inherited : 0x168)
struct UPDActionDrinkBottle : UPDActionBase {
};

// Class ProjectD.PDActionDynamicShielding
// Size : 0x170 (Inherited : 0x168)
struct UPDActionDynamicShielding : UPDActionBase {
	unsigned char UnknownData_168[0x0008]; // 0x168(0x8)
};

// Class ProjectD.PDActionEatHotdog
// Size : 0x168 (Inherited : 0x168)
struct UPDActionEatHotdog : UPDActionBase {
};

// Class ProjectD.PDActionExoSuitDash
// Size : 0x190 (Inherited : 0x168)
struct UPDActionExoSuitDash : UPDActionBase {
	unsigned char UnknownData_168[0x0028]; // 0x168(0x28)
};

// Class ProjectD.PDActionExoSuitLauncher
// Size : 0x178 (Inherited : 0x168)
struct UPDActionExoSuitLauncher : UPDActionBase {
	unsigned char UnknownData_168[0x0010]; // 0x168(0x10)
};

// Class ProjectD.PDActionFallingObjectKnockBack
// Size : 0x168 (Inherited : 0x168)
struct UPDActionFallingObjectKnockBack : UPDActionBase {
};

// Class ProjectD.PDActionFireWeapon
// Size : 0x1A0 (Inherited : 0x168)
struct UPDActionFireWeapon : UPDActionWeaponBase {
	unsigned char UnknownData_168[0x0038]; // 0x168(0x38)
};

// Class ProjectD.PDActionGlassesScan
// Size : 0x168 (Inherited : 0x168)
struct UPDActionGlassesScan : UPDActionBase {
};

// Class ProjectD.PDActionGroggyEnter
// Size : 0x188 (Inherited : 0x168)
struct UPDActionGroggyEnter : UPDActionBase {
	unsigned char UnknownData_168[0x0020]; // 0x168(0x20)
};

// Class ProjectD.PDActionGroggyExit
// Size : 0x190 (Inherited : 0x168)
struct UPDActionGroggyExit : UPDActionBase {
	unsigned char UnknownData_168[0x0028]; // 0x168(0x28)
};

// Class ProjectD.PDActionGroggyRescue
// Size : 0x180 (Inherited : 0x168)
struct UPDActionGroggyRescue : UPDActionBase {
	unsigned char UnknownData_168[0x0018]; // 0x168(0x18)
};

// Class ProjectD.PDActionGuard
// Size : 0x178 (Inherited : 0x168)
struct UPDActionGuard : UPDActionBase {
	unsigned char UnknownData_168[0x0010]; // 0x168(0x10)
};

// Class ProjectD.PDActionHacking
// Size : 0x180 (Inherited : 0x168)
struct UPDActionHacking : UPDActionBase {
	unsigned char UnknownData_168[0x0018]; // 0x168(0x18)
};

// Class ProjectD.PDActionInstantThrowWeapon
// Size : 0x180 (Inherited : 0x168)
struct UPDActionInstantThrowWeapon : UPDActionBase {
	unsigned char UnknownData_168[0x0018]; // 0x168(0x18)
};

// Class ProjectD.PDActionInteractBomb
// Size : 0x188 (Inherited : 0x168)
struct UPDActionInteractBomb : UPDActionBase {
	unsigned char UnknownData_168[0x0020]; // 0x168(0x20)
};

// Class ProjectD.PDActionItemUse
// Size : 0x1A8 (Inherited : 0x168)
struct UPDActionItemUse : UPDActionBase {
	unsigned char UnknownData_168[0x0040]; // 0x168(0x40)
};

// Class ProjectD.PDActionJuggernautDash_Base
// Size : 0x170 (Inherited : 0x168)
struct UPDActionJuggernautDash_Base : UPDActionBase {
	unsigned char UnknownData_168[0x0008]; // 0x168(0x8)
};

// Class ProjectD.PDActionJuggernautDash_Start
// Size : 0x178 (Inherited : 0x170)
struct UPDActionJuggernautDash_Start : UPDActionJuggernautDash_Base {
	unsigned char UnknownData_170[0x0008]; // 0x170(0x8)
};

// Class ProjectD.PDActionJuggernautDash_End
// Size : 0x170 (Inherited : 0x170)
struct UPDActionJuggernautDash_End : UPDActionJuggernautDash_Base {
};

// Class ProjectD.PDActionJump
// Size : 0x198 (Inherited : 0x168)
struct UPDActionJump : UPDActionBase {
	unsigned char UnknownData_168[0x0030]; // 0x168(0x30)
};

// Class ProjectD.PDActionKnockBack
// Size : 0x178 (Inherited : 0x168)
struct UPDActionKnockBack : UPDActionBase {
	unsigned char UnknownData_168[0x0010]; // 0x168(0x10)
};

// Class ProjectD.PDActionLand
// Size : 0x1D0 (Inherited : 0x168)
struct UPDActionLand : UPDActionBase {
	unsigned char UnknownData_168[0x0068]; // 0x168(0x68)
};

// Class ProjectD.PDActionLean
// Size : 0x1A8 (Inherited : 0x168)
struct UPDActionLean : UPDActionBase {
	unsigned char UnknownData_168[0x0040]; // 0x168(0x40)
};

// Class ProjectD.PDActionLickKnife
// Size : 0x168 (Inherited : 0x168)
struct UPDActionLickKnife : UPDActionBase {
};

// Class ProjectD.PDActionLookMagnifier
// Size : 0x168 (Inherited : 0x168)
struct UPDActionLookMagnifier : UPDActionBase {
};

// Class ProjectD.PDActionMaintenance
// Size : 0x178 (Inherited : 0x168)
struct UPDActionMaintenance : UPDActionBase {
	unsigned char UnknownData_168[0x0010]; // 0x168(0x10)
};

// Class ProjectD.PDActionMeleeAttack
// Size : 0x210 (Inherited : 0x168)
struct UPDActionMeleeAttack : UPDActionBase {
	unsigned char UnknownData_168[0x00A8]; // 0x168(0xA8)
};

// Class ProjectD.PDActionOutCover
// Size : 0x180 (Inherited : 0x168)
struct UPDActionOutCover : UPDActionBase {
	unsigned char UnknownData_168[0x0018]; // 0x168(0x18)
};

// Class ProjectD.PDActionParkourBase
// Size : 0x1D0 (Inherited : 0x168)
struct UPDActionParkourBase : UPDActionBase {
	unsigned char UnknownData_168[0x0044]; // 0x168(0x44)
	bool bShowDebug; // 0x1AC(0x1)
	unsigned char UnknownData_1AD[0x0003]; // 0x1AD(0x3)
	float HandPointThreshold; // 0x1B0(0x4)
	float CapsuleHalfHeightThreshold; // 0x1B4(0x4)
	float HandPointGap; // 0x1B8(0x4)
	float ForwardOffset; // 0x1BC(0x4)
	float OverCapsuleHalfHeight; // 0x1C0(0x4)
	float OverCollisionThickness; // 0x1C4(0x4)
	float VaultHeightThreshold; // 0x1C8(0x4)
	unsigned char UnknownData_1CC[0x0004]; // 0x1CC(0x4)
};

// Class ProjectD.PDActionParkourClimbup
// Size : 0x298 (Inherited : 0x1D0)
struct UPDActionParkourClimbup : UPDActionParkourBase {
	unsigned char UnknownData_1D0[0x00C8]; // 0x1D0(0xC8)
};

// Class ProjectD.PDActionParkourLedgeGrap
// Size : 0x270 (Inherited : 0x1D0)
struct UPDActionParkourLedgeGrap : UPDActionParkourBase {
	unsigned char UnknownData_1D0[0x00A0]; // 0x1D0(0xA0)
};

// Class ProjectD.PDActionParkourVault
// Size : 0x290 (Inherited : 0x1D0)
struct UPDActionParkourVault : UPDActionParkourBase {
	unsigned char UnknownData_1D0[0x00C0]; // 0x1D0(0xC0)
};

// Class ProjectD.PDActionPickUpItem
// Size : 0x188 (Inherited : 0x168)
struct UPDActionPickUpItem : UPDActionBase {
	unsigned char UnknownData_168[0x0020]; // 0x168(0x20)
};

// Class ProjectD.PDActionReloadWeapon
// Size : 0x190 (Inherited : 0x168)
struct UPDActionReloadWeapon : UPDActionWeaponBase {
	unsigned char UnknownData_168[0x0028]; // 0x168(0x28)
};

// Class ProjectD.PDActionRevolverSpinning
// Size : 0x168 (Inherited : 0x168)
struct UPDActionRevolverSpinning : UPDActionBase {
};

// Class ProjectD.PDActionRoll
// Size : 0x1C0 (Inherited : 0x168)
struct UPDActionRoll : UPDActionBase {
	unsigned char UnknownData_168[0x0058]; // 0x168(0x58)

	void OnPerchRadiusRestore(); // Function ProjectD.PDActionRoll.OnPerchRadiusRestore // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C426F0
};

// Class ProjectD.PDActionRoundEnter
// Size : 0x170 (Inherited : 0x168)
struct UPDActionRoundEnter : UPDActionBase {
	unsigned char UnknownData_168[0x0008]; // 0x168(0x8)
};

// Class ProjectD.PDActionShootFlare
// Size : 0x178 (Inherited : 0x168)
struct UPDActionShootFlare : UPDActionBase {
	unsigned char UnknownData_168[0x0010]; // 0x168(0x10)
};

// Class ProjectD.PDActionSlideBase
// Size : 0x178 (Inherited : 0x168)
struct UPDActionSlideBase : UPDActionBase {
	unsigned char UnknownData_168[0x0010]; // 0x168(0x10)
};

// Class ProjectD.PDActionSlideEnter
// Size : 0x188 (Inherited : 0x178)
struct UPDActionSlideEnter : UPDActionSlideBase {
	unsigned char UnknownData_178[0x0010]; // 0x178(0x10)
};

// Class ProjectD.PDActionSlideExit
// Size : 0x1A0 (Inherited : 0x178)
struct UPDActionSlideExit : UPDActionSlideBase {
	unsigned char UnknownData_178[0x0028]; // 0x178(0x28)
};

// Class ProjectD.PDActionSprayMoney
// Size : 0x168 (Inherited : 0x168)
struct UPDActionSprayMoney : UPDActionBase {
};

// Class ProjectD.PDActionThrowWeapon
// Size : 0x1A0 (Inherited : 0x168)
struct UPDActionThrowWeapon : UPDActionBase {
	unsigned char UnknownData_168[0x0038]; // 0x168(0x38)
};

// Class ProjectD.PDActionTurnBack
// Size : 0x1A0 (Inherited : 0x168)
struct UPDActionTurnBack : UPDActionBase {
	unsigned char UnknownData_168[0x0038]; // 0x168(0x38)
};

// Class ProjectD.PDActionWarcry
// Size : 0x168 (Inherited : 0x168)
struct UPDActionWarcry : UPDActionBase {
};

// Class ProjectD.PDActionWearJuggernaut_Base
// Size : 0x180 (Inherited : 0x168)
struct UPDActionWearJuggernaut_Base : UPDActionBase {
	unsigned char UnknownData_168[0x0018]; // 0x168(0x18)
};

// Class ProjectD.PDActionWearJuggernaut_Start
// Size : 0x180 (Inherited : 0x180)
struct UPDActionWearJuggernaut_Start : UPDActionWearJuggernaut_Base {
};

// Class ProjectD.PDActionWearJuggernaut_End
// Size : 0x180 (Inherited : 0x180)
struct UPDActionWearJuggernaut_End : UPDActionWearJuggernaut_Base {
};

// Class ProjectD.PDActionWearExoSuit_Start
// Size : 0x180 (Inherited : 0x180)
struct UPDActionWearExoSuit_Start : UPDActionWearJuggernaut_Start {
};

// Class ProjectD.PDActionWearExoSuit_End
// Size : 0x180 (Inherited : 0x180)
struct UPDActionWearExoSuit_End : UPDActionWearJuggernaut_End {
};

// Class ProjectD.PDActionZipline
// Size : 0x1A0 (Inherited : 0x168)
struct UPDActionZipline : UPDActionBase {
	unsigned char UnknownData_168[0x0038]; // 0x168(0x38)
};

// Class ProjectD.PDADSZoomCameraActor
// Size : 0x7E0 (Inherited : 0x7B0)
struct APDADSZoomCameraActor : ACameraActor {
	unsigned char UnknownData_7B0[0x0030]; // 0x7B0(0x30)
};

// Class ProjectD.PDSceneBaseUI
// Size : 0x288 (Inherited : 0x288)
struct UPDSceneBaseUI : UPDUserWidget {
};

// Class ProjectD.PDAgentCreateUI
// Size : 0x340 (Inherited : 0x288)
struct UPDAgentCreateUI : UPDSceneBaseUI {
	struct UTileView* TV_AgentList; // 0x288(0x8)
	struct UPDTabButtonGroup* AgentTabBtnGroup; // 0x290(0x8)
	struct UPDButton* CreateBtn; // 0x298(0x8)
	struct UPDKeyButton* Btn_Back; // 0x2A0(0x8)
	struct UWidget* IMG_Movie; // 0x2A8(0x8)
	struct UPDTextBlock* T_Name; // 0x2B0(0x8)
	struct UPDTextBlock* T_Num; // 0x2B8(0x8)
	struct UPDTextBlock* T_Nationality; // 0x2C0(0x8)
	struct UImage* IMG_ProfileBg_Pic; // 0x2C8(0x8)
	struct UImage* IMG_ProfilePic; // 0x2D0(0x8)
	struct UImage* IMG_Sign; // 0x2D8(0x8)
	struct UImage* IMG_Icon_Lepton_01; // 0x2E0(0x8)
	struct UImage* IMG_Icon_Lepton_02; // 0x2E8(0x8)
	struct UImage* IMG_Icon_Signature; // 0x2F0(0x8)
	struct UPDTextBlock* T_Title_Lepton_01; // 0x2F8(0x8)
	struct UPDTextBlock* T_Desc_Lepton_01; // 0x300(0x8)
	struct UPDTextBlock* T_Title_Lepton_02; // 0x308(0x8)
	struct UPDTextBlock* T_Desc_Lepton_02; // 0x310(0x8)
	struct UPDTextBlock* T_Desc_Signature; // 0x318(0x8)
	struct UPDTextBlock* T_ProfileDesc_01; // 0x320(0x8)
	struct UPDTextBlock* T_ProfileDesc_02; // 0x328(0x8)
	struct UMediaPlayer* AgentMediaPlayer; // 0x330(0x8)
	unsigned char UnknownData_338[0x0008]; // 0x338(0x8)

	void SetAgentInfo(int32_t SkillIndex, struct FVector2D InfoAbsolutePos); // Function ProjectD.PDAgentCreateUI.SetAgentInfo // (Final|Native|Private|HasDefaults) // Param Size : 0xC, 0x7FF653C42790
	void OnMovieOpened(); // Function ProjectD.PDAgentCreateUI.OnMovieOpened // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF6533F7E70
	void OnMovieClosed(); // Function ProjectD.PDAgentCreateUI.OnMovieClosed // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF6533F7E70
	void OnInitMediaPlayer(); // Function ProjectD.PDAgentCreateUI.OnInitMediaPlayer // (Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
	void OnCreateAgentClicked(); // Function ProjectD.PDAgentCreateUI.OnCreateAgentClicked // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C426D0
	void OnConfirmCreate(int32_t AgentIndex); // Function ProjectD.PDAgentCreateUI.OnConfirmCreate // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C42650
	void OnBackClicked(); // Function ProjectD.PDAgentCreateUI.OnBackClicked // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C42630
	void AgentSkillVisible(bool bShow); // Function ProjectD.PDAgentCreateUI.AgentSkillVisible // (Final|Native|Private) // Param Size : 0x1, 0x7FF653C42440
};

// Class ProjectD.PDAgentInvenCustomTarget
// Size : 0x290 (Inherited : 0x288)
struct UPDAgentInvenCustomTarget : UPDUserWidget {
	struct UWidgetSwitcher* WS_SelectedState; // 0x288(0x8)
};

// Class ProjectD.PDAgentInvenPerkListItem
// Size : 0x2D8 (Inherited : 0x288)
struct UPDAgentInvenPerkListItem : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UImage* Img_Bg; // 0x290(0x8)
	struct UImage* IMG_Item; // 0x298(0x8)
	struct UBorder* BD_ItemOutline; // 0x2A0(0x8)
	struct UPDButton* Btn_GoEquipPerk; // 0x2A8(0x8)
	unsigned char UnknownData_2B0[0x0028]; // 0x2B0(0x28)

	void GotoCharacterPerk(); // Function ProjectD.PDAgentInvenPerkListItem.GotoCharacterPerk // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C425B0
};

// Class ProjectD.PDAgentInventoryUI
// Size : 0x558 (Inherited : 0x288)
struct UPDAgentInventoryUI : UPDSceneBaseUI {
	struct UCanvasPanel* CP_AgentInventory; // 0x288(0x8)
	struct UVerticalBox* VB_CharacterSlots; // 0x290(0x8)
	struct UPDTabButtonGroup* AgentSlotTabBtnGroup; // 0x298(0x8)
	struct UImage* IMG_Siluet; // 0x2A0(0x8)
	struct UPDButton* Btn_GotoLobby; // 0x2A8(0x8)
	struct UPDTextBlock* T_ContractNum; // 0x2B0(0x8)
	struct UPDTextBlock* T_SelectedAgent_Name; // 0x2B8(0x8)
	struct UPDTextBlock* T_SelectedAgent_Nationality; // 0x2C0(0x8)
	struct UPDTextBlock* T_SelectedAgent_CodeName; // 0x2C8(0x8)
	struct UCanvasPanel* CP_AgentSign; // 0x2D0(0x8)
	struct UImage* IMG_AgentSign; // 0x2D8(0x8)
	struct UPDButton* Btn_QuickContract; // 0x2E0(0x8)
	struct UCanvasPanel* CP_PageInfo; // 0x2E8(0x8)
	struct UCanvasPanel* CP_SlotChanger_L; // 0x2F0(0x8)
	struct UCanvasPanel* CP_SlotChanger_R; // 0x2F8(0x8)
	struct UPDButton* Btn_SlotChanger_L; // 0x300(0x8)
	struct UPDButton* Btn_SlotChanger_R; // 0x308(0x8)
	struct UWidgetSwitcher* WS_SlotChanger_L; // 0x310(0x8)
	struct UWidgetSwitcher* WS_SlotChanger_R; // 0x318(0x8)
	struct UPDTextBlock* TB_CurPage; // 0x320(0x8)
	struct UPDTextBlock* TB_MaxPage; // 0x328(0x8)
	struct UCanvasPanel* CP_AgentPos; // 0x330(0x8)
	struct UCanvasPanel* CP_GamePos; // 0x338(0x8)
	struct UCanvasPanel* CP_WeaponPos; // 0x340(0x8)
	struct UPDAgentInvenCustomTarget* AICT_Agent; // 0x348(0x8)
	struct UPDAgentInvenCustomTarget* AICT_Game; // 0x350(0x8)
	struct UPDAgentInvenCustomTarget* AICT_Weapon; // 0x358(0x8)
	struct UCanvasPanel* CP_CustomAgent; // 0x360(0x8)
	struct UCanvasPanel* CP_CustomGame; // 0x368(0x8)
	struct UCanvasPanel* CP_CustomWeapon; // 0x370(0x8)
	struct UImage* IMG_New_Perk; // 0x378(0x8)
	struct UPDButton* Btn_CustomAgent_Perk; // 0x380(0x8)
	struct UImage* IMG_New_Look; // 0x388(0x8)
	struct UPDButton* Btn_CustomAgent_Look; // 0x390(0x8)
	struct UPDButton* Btn_CustomAgent_Voice; // 0x398(0x8)
	struct UPDButton* Btn_CustomGame; // 0x3A0(0x8)
	struct UPDButton* Btn_CustomWeapon; // 0x3A8(0x8)
	struct UCanvasPanel* CP_Rental_ToolTip; // 0x3B0(0x8)
	struct UCanvasPanel* CP_Title; // 0x3B8(0x8)
	struct UPDButton* Btn_Back; // 0x3C0(0x8)
	struct TMap<int32_t, struct FVector> CharacterMenuPositionMap; // 0x3C8(0x50)
	struct TMap<int32_t, struct FVector> GameMenuPositionMap; // 0x418(0x50)
	struct TMap<int32_t, struct FVector> WeaponMenuPositionMap; // 0x468(0x50)
	float RandomLineMin; // 0x4B8(0x4)
	float RandomLineMax; // 0x4BC(0x4)
	struct FLinearColor NormalLineColor; // 0x4C0(0x10)
	struct FLinearColor OverLineColor; // 0x4D0(0x10)
	struct UPDEquipPerkList* EquipPerkList; // 0x4E0(0x8)
	struct UCanvasPanel* CP_PerkList; // 0x4E8(0x8)
	unsigned char UnknownData_4F0[0x0068]; // 0x4F0(0x68)

	void SlotChangerRight(); // Function ProjectD.PDAgentInventoryUI.SlotChangerRight // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C42870
	void SlotChangerLeft(); // Function ProjectD.PDAgentInventoryUI.SlotChangerLeft // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C42850
	void QuickContract(); // Function ProjectD.PDAgentInventoryUI.QuickContract // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C42770
	void GotoLobby(); // Function ProjectD.PDAgentInventoryUI.GotoLobby // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C42610
	void GotoGameDeco(); // Function ProjectD.PDAgentInventoryUI.GotoGameDeco // (Final|Native|Private) // Param Size : 0x0, 0x7FF6533F7E70
	void GotoCharacterWeapon(); // Function ProjectD.PDAgentInventoryUI.GotoCharacterWeapon // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C425F0
	void GotoCharacterVoice(); // Function ProjectD.PDAgentInventoryUI.GotoCharacterVoice // (Final|Native|Private) // Param Size : 0x0, 0x7FF6533F7E70
	void GotoCharacterPerk(); // Function ProjectD.PDAgentInventoryUI.GotoCharacterPerk // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C425D0
	void GotoCharacterDeco(); // Function ProjectD.PDAgentInventoryUI.GotoCharacterDeco // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C42590
	void CustomWeaponBtnOver(); // Function ProjectD.PDAgentInventoryUI.CustomWeaponBtnOver // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C42570
	void CustomWeaponBtnOut(); // Function ProjectD.PDAgentInventoryUI.CustomWeaponBtnOut // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C42550
	void CustomGameBtnOver(); // Function ProjectD.PDAgentInventoryUI.CustomGameBtnOver // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C42530
	void CustomGameBtnOut(); // Function ProjectD.PDAgentInventoryUI.CustomGameBtnOut // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C42510
	void CustomCharacterPerkBtnOver(); // Function ProjectD.PDAgentInventoryUI.CustomCharacterPerkBtnOver // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C424F0
	void CustomCharacterPerkBtnOut(); // Function ProjectD.PDAgentInventoryUI.CustomCharacterPerkBtnOut // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C424D0
};

// Class ProjectD.PDAgentLeptonInfo
// Size : 0x360 (Inherited : 0x290)
struct UPDAgentLeptonInfo : UPDIngameModeWidget {
	struct UImage* IMG_UniqueSlot_Perk1; // 0x290(0x8)
	struct UPDTextBlock* T_UniqueSlot_PerkName1; // 0x298(0x8)
	struct UPDTextBlock* T_UniqueSlot_PerkDesc1; // 0x2A0(0x8)
	struct UImage* IMG_UniqueSlot_Perk2; // 0x2A8(0x8)
	struct UPDTextBlock* T_UniqueSlot_PerkName2; // 0x2B0(0x8)
	struct UPDTextBlock* T_UniqueSlot_PerkDesc2; // 0x2B8(0x8)
	unsigned char UnknownData_2C0[0x0010]; // 0x2C0(0x10)
	struct UWidgetSwitcher* WS_EquipSlot1; // 0x2D0(0x8)
	struct UImage* IMG_EquipSlot_Perk1; // 0x2D8(0x8)
	struct UPDTextBlock* T_EquipSlot_PerkName1; // 0x2E0(0x8)
	struct UPDTextBlock* T_EquipSlot_PerkDesc1; // 0x2E8(0x8)
	struct UWidgetSwitcher* WS_EquipSlot2; // 0x2F0(0x8)
	struct UImage* IMG_EquipSlot_Perk2; // 0x2F8(0x8)
	struct UPDTextBlock* T_EquipSlot_PerkName2; // 0x300(0x8)
	struct UPDTextBlock* T_EquipSlot_PerkDesc2; // 0x308(0x8)
	struct UWidgetSwitcher* WS_EquipSlot3; // 0x310(0x8)
	struct UImage* IMG_EquipSlot_Perk3; // 0x318(0x8)
	struct UPDTextBlock* T_EquipSlot_PerkName3; // 0x320(0x8)
	struct UPDTextBlock* T_EquipSlot_PerkDesc3; // 0x328(0x8)
	unsigned char UnknownData_330[0x0010]; // 0x330(0x10)
	struct UImage* IMG_Signature; // 0x340(0x8)
	struct UPDTextBlock* T_Signature_Name; // 0x348(0x8)
	struct UPDTextBlock* T_Signature_Desc; // 0x350(0x8)
	struct UPDTextBlock* T_AgentName; // 0x358(0x8)
};

// Class ProjectD.PDAgentListItemData
// Size : 0x40 (Inherited : 0x28)
struct UPDAgentListItemData : UObject {
	unsigned char UnknownData_28[0x0018]; // 0x28(0x18)
};

// Class ProjectD.PDAgentListItemUI
// Size : 0x2D0 (Inherited : 0x288)
struct UPDAgentListItemUI : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UImage* IMG_Face; // 0x290(0x8)
	struct UPDTextBlock* T_Name; // 0x298(0x8)
	struct UPDTextBlock* T_HoldingText; // 0x2A0(0x8)
	struct UPDTabButton* Btn_Select; // 0x2A8(0x8)
	struct UCanvasPanel* CP_Holding; // 0x2B0(0x8)
	struct UCanvasPanel* CP_Selected; // 0x2B8(0x8)
	struct UWidgetSwitcher* WS_LockState; // 0x2C0(0x8)
	unsigned char UnknownData_2C8[0x0008]; // 0x2C8(0x8)

	void OnUnSelectAgent(); // Function ProjectD.PDAgentListItemUI.OnUnSelectAgent // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C42750
	void OnUnHoverAgent(); // Function ProjectD.PDAgentListItemUI.OnUnHoverAgent // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C42730
	void OnSelectAgent(); // Function ProjectD.PDAgentListItemUI.OnSelectAgent // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C42710
	void OnHoverAgent(); // Function ProjectD.PDAgentListItemUI.OnHoverAgent // (Final|Native|Private) // Param Size : 0x0, 0x7FF6533F7E70
};

// Class ProjectD.PDAgentPresetListItemData
// Size : 0x48 (Inherited : 0x28)
struct UPDAgentPresetListItemData : UObject {
	unsigned char UnknownData_28[0x0020]; // 0x28(0x20)
};

// Class ProjectD.PDAgentPresetListItem
// Size : 0x2B8 (Inherited : 0x288)
struct UPDAgentPresetListItem : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UBorder* BD_Normal; // 0x290(0x8)
	struct UBorder* BD_Hover; // 0x298(0x8)
	struct UBorder* BD_Select; // 0x2A0(0x8)
	struct UPDTextBlock* TB_Name; // 0x2A8(0x8)
	unsigned char UnknownData_2B0[0x0008]; // 0x2B0(0x8)
};

// Class ProjectD.PDAgentSkillListData
// Size : 0x60 (Inherited : 0x28)
struct UPDAgentSkillListData : UObject {
	unsigned char UnknownData_28[0x0038]; // 0x28(0x38)
};

// Class ProjectD.PDAgentSkillListUI
// Size : 0x2D8 (Inherited : 0x288)
struct UPDAgentSkillListUI : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UImage* IMG_Icon; // 0x290(0x8)
	struct UPDButton* Btn_Skill; // 0x298(0x8)
	struct UPDTextBlock* TB_Name; // 0x2A0(0x8)
	struct UPDTextBlock* TB_Desc; // 0x2A8(0x8)
	unsigned char UnknownData_2B0[0x0028]; // 0x2B0(0x28)

	void OnUnHoverAgentSkill(); // Function ProjectD.PDAgentSkillListUI.OnUnHoverAgentSkill // (Final|Native|Private) // Param Size : 0x0, 0x7FF6533F7E70
	void OnHoverAgentSkill(); // Function ProjectD.PDAgentSkillListUI.OnHoverAgentSkill // (Final|Native|Private) // Param Size : 0x0, 0x7FF6533F7E70
};

// Class ProjectD.PDAgentSlotListItemUI
// Size : 0x318 (Inherited : 0x288)
struct UPDAgentSlotListItemUI : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UImage* IMG_New; // 0x290(0x8)
	struct UWidgetSwitcher* WS_CharacterSlot; // 0x298(0x8)
	struct UWidgetSwitcher* WS_TagState; // 0x2A0(0x8)
	struct UPDButton* Btn_CreateButton; // 0x2A8(0x8)
	struct UPDButton* Btn_AgentSelectButton; // 0x2B0(0x8)
	struct UPDTextBlock* TB_CharacterName; // 0x2B8(0x8)
	struct UPDTextBlock* TB_CharacterAncestry; // 0x2C0(0x8)
	struct UPDTextBlock* TB_Level; // 0x2C8(0x8)
	struct UProgressBar* PB_Exp; // 0x2D0(0x8)
	struct UCanvasPanel* CP_CharacterSlot_OverSet; // 0x2D8(0x8)
	struct UCanvasPanel* CP_CharacterSlot_SelectedSet; // 0x2E0(0x8)
	struct UImage* IMG_CharacterSlot_Portrait; // 0x2E8(0x8)
	struct UCanvasPanel* CP_Empty_OverSet; // 0x2F0(0x8)
	struct UImage* IMG_Signature; // 0x2F8(0x8)
	struct UCanvasPanel* CP_OverDeco; // 0x300(0x8)
	struct UCanvasPanel* CP_ExpiredSet; // 0x308(0x8)
	unsigned char UnknownData_310[0x0008]; // 0x310(0x8)

	void OnUnHoverSelectAgent(); // Function ProjectD.PDAgentSlotListItemUI.OnUnHoverSelectAgent // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C457D0
	void OnUnHoverCreateAgent(); // Function ProjectD.PDAgentSlotListItemUI.OnUnHoverCreateAgent // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C457B0
	void OnHoverSelectAgent(); // Function ProjectD.PDAgentSlotListItemUI.OnHoverSelectAgent // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C45790
	void OnHoverCreateAgent(); // Function ProjectD.PDAgentSlotListItemUI.OnHoverCreateAgent // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C45770
	void OnClickSelectAgent(); // Function ProjectD.PDAgentSlotListItemUI.OnClickSelectAgent // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C45750
	void OnClickCreateAgent(); // Function ProjectD.PDAgentSlotListItemUI.OnClickCreateAgent // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C45730
};

// Class ProjectD.PDAimOffsetAnimInstance
// Size : 0x5F0 (Inherited : 0x5F0)
struct UPDAimOffsetAnimInstance : UPDPlayerAnimInstance {
};

// Class ProjectD.PDAkAmbientSound
// Size : 0x260 (Inherited : 0x260)
struct APDAkAmbientSound : AAkAmbientSound {
};

// Class ProjectD.PDAkEventAnimNotifyState
// Size : 0x50 (Inherited : 0x30)
struct UPDAkEventAnimNotifyState : UAnimNotifyState {
	bool bAutoStopBeginEventPlayingOnEnd; // 0x30(0x1)
	unsigned char UnknownData_31[0x0007]; // 0x31(0x7)
	struct UAkAudioEvent* EventOnBegin; // 0x38(0x8)
	struct UAkAudioEvent* EventOnEnd; // 0x40(0x8)
	unsigned char UnknownData_48[0x0008]; // 0x48(0x8)
};

// Class ProjectD.PDAkEventLoadList
// Size : 0x38 (Inherited : 0x28)
struct UPDAkEventLoadList : UObject {
	struct TArray<struct UAkAudioEvent*> EventsToLoad; // 0x28(0x10)
};

// Class ProjectD.PDAkEventTriggerVolume
// Size : 0x2B8 (Inherited : 0x258)
struct APDAkEventTriggerVolume : ATriggerVolume {
	struct UPDAkComponent* PDAkComponent; // 0x258(0x8)
	struct TArray<struct UAkAudioEvent*> BeginOverlapAkEvents; // 0x260(0x10)
	struct TArray<struct UAkAudioEvent*> EndOverlapAkEvents; // 0x270(0x10)
	struct TArray<struct FPDAudioSwitch> Switches; // 0x280(0x10)
	struct FString StateGroup; // 0x290(0x10)
	struct FString State; // 0x2A0(0x10)
	bool StopWhenOwnerIsDestroyed; // 0x2B0(0x1)
	unsigned char UnknownData_2B1[0x0007]; // 0x2B1(0x7)
};

// Class ProjectD.PDAkReactor
// Size : 0x2D8 (Inherited : 0x220)
struct APDAkReactor : AActor {
	unsigned char UnknownData_220[0x00A8]; // 0x220(0xA8)
	struct USphereComponent* SphereComponent; // 0x2C8(0x8)
	struct UPDAkComponent* PDAkComponent; // 0x2D0(0x8)
};

// Class ProjectD.PDAnimDynamicsInstBase
// Size : 0x2B0 (Inherited : 0x280)
struct UPDAnimDynamicsInstBase : UPDAnimInstance {
	struct FVector WindVelocity; // 0x280(0xC)
	bool UseAnimDynamics; // 0x28C(0x1)
	bool UseWind; // 0x28D(0x1)
	unsigned char UnknownData_28E[0x0002]; // 0x28E(0x2)
	float WindInterval; // 0x290(0x4)
	float MinWindForce; // 0x294(0x4)
	float MaxWindForce; // 0x298(0x4)
	unsigned char UnknownData_29C[0x0014]; // 0x29C(0x14)
};

// Class ProjectD.PDAnimNotifyState
// Size : 0xA0 (Inherited : 0x30)
struct UPDAnimNotifyState : UAnimNotifyState {
	struct FActionNotifyData BeginNotifyData; // 0x30(0x38)
	struct FActionNotifyData EndNotifyData; // 0x68(0x38)
};

// Class ProjectD.PDArmorGauge
// Size : 0x4D0 (Inherited : 0x288)
struct UPDArmorGauge : UPDUserWidget {
	struct FSlateBrush ArmorDisableBrush; // 0x288(0x88)
	struct FSlateBrush ArmorBackgroundBrush; // 0x310(0x88)
	struct FSlateBrush ArmorFillBrush; // 0x398(0x88)
	struct FSlateBrush ArmorMaxBrush; // 0x420(0x88)
	struct UCanvasPanel* CP_Normal; // 0x4A8(0x8)
	struct UHorizontalBox* HB_NormalBar; // 0x4B0(0x8)
	struct UCanvasPanel* CP_Juggernaut; // 0x4B8(0x8)
	struct UProgressBar* PB_Juggernaut; // 0x4C0(0x8)
	unsigned char UnknownData_4C8[0x0008]; // 0x4C8(0x8)
};

// Class ProjectD.PDArmorGaugeDetail
// Size : 0x580 (Inherited : 0x4D0)
struct UPDArmorGaugeDetail : UPDArmorGauge {
	struct UHorizontalBox* HB_NormalText; // 0x4D0(0x8)
	struct UPDMaskedText* MT_Juggernaut; // 0x4D8(0x8)
	struct FSlateBrush ArmorRecoverBrush; // 0x4E0(0x88)
	unsigned char UnknownData_568[0x0008]; // 0x568(0x8)
	class UPDMaskedText* NormalTextClass; // 0x570(0x8)
	float Width; // 0x578(0x4)
	unsigned char UnknownData_57C[0x0004]; // 0x57C(0x4)
};

// Class ProjectD.PDAssetManager
// Size : 0x438 (Inherited : 0x438)
struct UPDAssetManager : UAssetManager {
};

// Class ProjectD.PDAsyncMeshActor
// Size : 0x230 (Inherited : 0x220)
struct APDAsyncMeshActor : AActor {
	struct UBoxComponent* BoxComponent; // 0x220(0x8)
	struct UPDAsyncMeshComponent* AsyncMeshComponent; // 0x228(0x8)
};

// Class ProjectD.PDAsyncMeshComponent
// Size : 0x4D0 (Inherited : 0x4A0)
struct UPDAsyncMeshComponent : UStaticMeshComponent {
	unsigned char UnknownData_4A0[0x0030]; // 0x4A0(0x30)

	void OnBeginOverlapEvent(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function ProjectD.PDAsyncMeshComponent.OnBeginOverlapEvent // (Final|Native|Private|HasOutParms) // Param Size : 0xA8, 0x7FF653C45540
};

// Class ProjectD.PDHUDIconBaseUI
// Size : 0x2A0 (Inherited : 0x288)
struct UPDHUDIconBaseUI : UPDUserWidget {
	unsigned char UnknownData_288[0x0018]; // 0x288(0x18)
};

// Class ProjectD.PDAttackDamageIndicatorUI
// Size : 0x3D0 (Inherited : 0x2A0)
struct UPDAttackDamageIndicatorUI : UPDHUDIconBaseUI {
	struct UBorder* BD_OutArrow; // 0x2A0(0x8)
	struct UOverlay* O_Damage; // 0x2A8(0x8)
	struct UPDTextBlock* TB_TotalDamage; // 0x2B0(0x8)
	struct UPDTextBlock* TB_TotalArmorDamage; // 0x2B8(0x8)
	struct UPDTextBlock* TB_TotalGroggyDamage; // 0x2C0(0x8)
	struct FSlateColor WeakDamageColor; // 0x2C8(0x28)
	struct FSlateColor MediumDamageColor; // 0x2F0(0x28)
	struct FSlateColor StrongDamageColor; // 0x318(0x28)
	int32_t NormalDamageFontSize; // 0x340(0x4)
	unsigned char UnknownData_344[0x0004]; // 0x344(0x4)
	struct FSlateColor ArmorDamageColor; // 0x348(0x28)
	int32_t ArmorDamageFontSize; // 0x370(0x4)
	unsigned char UnknownData_374[0x0004]; // 0x374(0x4)
	struct FSlateColor GroggyDamageColor; // 0x378(0x28)
	int32_t GroggyDamageFontSize; // 0x3A0(0x4)
	struct FVector2D DamageRandBoxSize; // 0x3A4(0x8)
	struct FVector2D DamageOffsetSize; // 0x3AC(0x8)
	float DamageShowTime; // 0x3B4(0x4)
	unsigned char UnknownData_3B8[0x0018]; // 0x3B8(0x18)
};

// Class ProjectD.OcclusionTraceWorkObject
// Size : 0x90 (Inherited : 0x28)
struct UOcclusionTraceWorkObject : UObject {
	unsigned char UnknownData_28[0x0068]; // 0x28(0x68)
};

// Class ProjectD.PDBaseAnimNotify
// Size : 0x48 (Inherited : 0x38)
struct UPDBaseAnimNotify : UAnimNotify {
	unsigned char UnknownData_38[0x0010]; // 0x38(0x10)
};

// Class ProjectD.PDBaseModeUI
// Size : 0x4A0 (Inherited : 0x288)
struct UPDBaseModeUI : UPDUserWidget {
	struct UCanvasPanel* CP_GameModeLayer; // 0x288(0x8)
	struct TMap<enum class EGameModeWidget, struct UPDIngameModeWidget*> ModeWidgetMap; // 0x290(0x50)
	struct UPDPlayerInfoUI* PlayerInfo; // 0x2E0(0x8)
	struct UPDPerkUI* PerkUI; // 0x2E8(0x8)
	struct UPDPerkNotifyUI* PerkNotifyUI; // 0x2F0(0x8)
	struct UPDCoinInfoUI* CoinInfo; // 0x2F8(0x8)
	struct UPDCrossHairUI* CrossHair; // 0x300(0x8)
	struct UPDInteractionInfoUI* InteractionInfo; // 0x308(0x8)
	struct UPDDamageScreenIndicatorUI* DamageScreenIndicator; // 0x310(0x8)
	struct UPD3DIndicatorUI* ThreeDIndicator; // 0x318(0x8)
	struct UPDTargetScreenUI* TargetScreen; // 0x320(0x8)
	struct UPDGameTimeUI* GameTime; // 0x328(0x8)
	struct UPDIngameMapUI* IngameMap; // 0x330(0x8)
	struct UPDWorldMessageUI* WorldMessage; // 0x338(0x8)
	struct UPDBattleLogUI* BattleLog; // 0x340(0x8)
	struct UPDKillLogUI* KillLog; // 0x348(0x8)
	struct UPDPingLog* PingLog; // 0x350(0x8)
	struct UPDUnKnownMarket* UnKnownMarket; // 0x358(0x8)
	struct UPDTutorialQuestListUI* TutorialQuest; // 0x360(0x8)
	struct UPDSpectatorUI* SpectatorUI; // 0x368(0x8)
	struct UPDRingCommandUI* RingCommand; // 0x370(0x8)
	struct UPDMarkerGuide* MarkerGuide; // 0x378(0x8)
	struct UPDStateGaugeUI* StateGauge; // 0x380(0x8)
	struct UPDAgentLeptonInfo* AgentLeptonInfo; // 0x388(0x8)
	struct UPDPersonalMissionUI* PersonalMissionUI; // 0x390(0x8)
	struct UPDChattingUI* Chatting; // 0x398(0x8)
	struct UCanvasPanel* CP_ChatLayer; // 0x3A0(0x8)
	struct UCanvasPanel* CP_CCTVLayer; // 0x3A8(0x8)
	struct UCanvasPanel* CP_IntroCinemaLayer; // 0x3B0(0x8)
	struct UCanvasPanel* CP_SubtitleLayer; // 0x3B8(0x8)
	struct UPDIngameVideoUI* IngameVideo; // 0x3C0(0x8)
	struct UPDSubtitleUI* SubtitleUI; // 0x3C8(0x8)
	struct UCanvasPanel* CP_EscMenu; // 0x3D0(0x8)
	struct UPDEscMenuUI* EscMenu; // 0x3D8(0x8)
	struct UCanvasPanel* CP_BreakIntoLayer; // 0x3E0(0x8)
	struct UPDBreakIntoUI* BreakInto; // 0x3E8(0x8)
	struct UPDRoundWaitUI* RoundWait; // 0x3F0(0x8)
	struct UPDPlayerSettingUI* PlayerSetting; // 0x3F8(0x8)
	struct UScaleBox* NoneScale_Inventory; // 0x400(0x8)
	struct UScaleBox* NoneScale_CrossHair; // 0x408(0x8)
	struct UScaleBox* NoneScale_StatusBoard; // 0x410(0x8)
	struct UScaleBox* NoneScale_IngameMap; // 0x418(0x8)
	struct UScaleBox* NoneScale_Replay; // 0x420(0x8)
	struct UScaleBox* NoneScale_PlayerSetting; // 0x428(0x8)
	struct UScaleBox* NoneScale_MarketGuide; // 0x430(0x8)
	struct UScaleBox* NoneScale_RingCommand; // 0x438(0x8)
	struct UScaleBox* NoneScale_AgentLeptonInfo; // 0x440(0x8)
	struct UScaleBox* NoneScale_RoundResult; // 0x448(0x8)
	struct UScaleBox* NoneScale_ReportPopup; // 0x450(0x8)
	struct UScaleBox* NoneScale_CCTV; // 0x458(0x8)
	struct UScaleBox* NoneScale_IntroCinema; // 0x460(0x8)
	struct UScaleBox* NoneScale_Menu; // 0x468(0x8)
	unsigned char UnknownData_470[0x0030]; // 0x470(0x30)
};

// Class ProjectD.PDBaseUI
// Size : 0x410 (Inherited : 0x288)
struct UPDBaseUI : UPDUserWidget {
	struct UCanvasPanel* CP_SceneLayer; // 0x288(0x8)
	struct UCanvasPanel* CP_PopupLayer; // 0x290(0x8)
	struct UCanvasPanel* CP_GlobalPopupLayer; // 0x298(0x8)
	struct UCanvasPanel* CP_TopLayer; // 0x2A0(0x8)
	struct UCanvasPanel* CP_Blind; // 0x2A8(0x8)
	struct UImage* IMG_Blind; // 0x2B0(0x8)
	struct UCanvasPanel* CP_DevLayer; // 0x2B8(0x8)
	struct UPDMatchingUI* MatchingUI; // 0x2C0(0x8)
	struct UPDOutGameTopMenu* OutGameTopMenu; // 0x2C8(0x8)
	struct UPDCustomRoomUI* CustomRoom; // 0x2D0(0x8)
	struct UPDChattingUI* ChattingUI; // 0x2D8(0x8)
	struct TMap<enum class EUIName, class UObject*> UIClassMap; // 0x2E0(0x50)
	struct TMap<enum class EUIName, struct UPDSceneBaseUI*> SceneUIWidgetMap; // 0x330(0x50)
	struct UPDSystemMessageUI* SystemMessageUIWidget; // 0x380(0x8)
	struct UPDSceneBaseUI* MatchSceneUI; // 0x388(0x8)
	unsigned char UnknownData_390[0x0008]; // 0x390(0x8)
	struct TArray<struct UPDPopupBaseUI*> PopupUIStack; // 0x398(0x10)
	struct TArray<struct UPDPopupBaseUI*> GlobalPopupUIStack; // 0x3A8(0x10)
	struct UPDTextBlock* Dev_Text; // 0x3B8(0x8)
	struct UPDTextBlock* Connect_State_Text; // 0x3C0(0x8)
	struct UPDTextBlock* TB_FPS; // 0x3C8(0x8)
	struct UPDTextBlock* TB_BuildInfo; // 0x3D0(0x8)
	struct UPDTextBlock* TB_ConnectInfo; // 0x3D8(0x8)
	struct UPDTextBlock* TB_MatchID; // 0x3E0(0x8)
	struct UPDTextBlock* TB_Ping; // 0x3E8(0x8)
	struct UImage* IMG_Connect; // 0x3F0(0x8)
	struct UPDTextBlock* TB_Graphics; // 0x3F8(0x8)
	unsigned char UnknownData_400[0x0010]; // 0x400(0x10)
};

// Class ProjectD.PDBattleLogModule
// Size : 0x2A8 (Inherited : 0x288)
struct UPDBattleLogModule : UPDUserWidget {
	struct UPDTextBlock* TB_Log; // 0x288(0x8)
	struct UBorder* BD_Bg; // 0x290(0x8)
	unsigned char UnknownData_298[0x0010]; // 0x298(0x10)
};

// Class ProjectD.PDBattleLogUI
// Size : 0x300 (Inherited : 0x290)
struct UPDBattleLogUI : UPDIngameModeWidget {
	unsigned char UnknownData_290[0x0008]; // 0x290(0x8)
	struct UVerticalBox* VB_EventLog; // 0x298(0x8)
	enum class EHorizontalAlignment LogHAlign; // 0x2A0(0x1)
	unsigned char UnknownData_2A1[0x0003]; // 0x2A1(0x3)
	struct FMargin LogPadding; // 0x2A4(0x10)
	bool InvertToAdd; // 0x2B4(0x1)
	unsigned char UnknownData_2B5[0x0003]; // 0x2B5(0x3)
	int32_t MaxLogCount; // 0x2B8(0x4)
	float DefaultDuration; // 0x2BC(0x4)
	bool AutoRemove; // 0x2C0(0x1)
	unsigned char UnknownData_2C1[0x0007]; // 0x2C1(0x7)
	struct UVerticalBox* VB_WarningList; // 0x2C8(0x8)
	struct UVerticalBox* VB_FeedbackLog; // 0x2D0(0x8)
	enum class EHorizontalAlignment FeedbackHAlign; // 0x2D8(0x1)
	unsigned char UnknownData_2D9[0x0003]; // 0x2D9(0x3)
	struct FMargin FeedbackPadding; // 0x2DC(0x10)
	int32_t MaxFeedbackCount; // 0x2EC(0x4)
	float DefaultFeedbackDuration; // 0x2F0(0x4)
	bool bAutoRemoveFeedback; // 0x2F4(0x1)
	bool bReverseToAddFeedback; // 0x2F5(0x1)
	unsigned char UnknownData_2F6[0x0002]; // 0x2F6(0x2)
	struct UPDNotificationAlert* AlertWidget; // 0x2F8(0x8)
};

// Class ProjectD.PDBreakableObject
// Size : 0x388 (Inherited : 0x220)
struct APDBreakableObject : AActor {
	unsigned char UnknownData_220[0x0068]; // 0x220(0x68)
	struct UChildActorComponent* SwitchActor; // 0x288(0x8)
	struct USkeletalMeshComponent* AnimMesh; // 0x290(0x8)
	struct TArray<enum class EDamageType> EffectiveDamages; // 0x298(0x10)
	int32_t StartHP; // 0x2A8(0x4)
	unsigned char UnknownData_2AC[0x0004]; // 0x2AC(0x4)
	struct FString Start_BaseSocket; // 0x2B0(0x10)
	int32_t Start_BaseEffectID; // 0x2C0(0x4)
	unsigned char UnknownData_2C4[0x0004]; // 0x2C4(0x4)
	struct FString DestructSound; // 0x2C8(0x10)
	float Middle_Time; // 0x2D8(0x4)
	unsigned char UnknownData_2DC[0x0004]; // 0x2DC(0x4)
	struct FString Middle_ResultSocket; // 0x2E0(0x10)
	int32_t Middle_ResultEffectID; // 0x2F0(0x4)
	float Middle_Damage; // 0x2F4(0x4)
	float End_Time; // 0x2F8(0x4)
	unsigned char UnknownData_2FC[0x0004]; // 0x2FC(0x4)
	struct UStaticMeshComponent* BaseMesh; // 0x300(0x8)
	struct UStaticMeshComponent* ResultMesh; // 0x308(0x8)
	struct USphereComponent* DamageArea; // 0x310(0x8)
	unsigned char UnknownData_318[0x0070]; // 0x318(0x70)
};

// Class ProjectD.PDBreakIntoPlayerItem
// Size : 0x2B8 (Inherited : 0x288)
struct UPDBreakIntoPlayerItem : UPDUserWidget {
	struct UImage* IMG_PlayerPic; // 0x288(0x8)
	struct UImage* IMG_SlotBg_L; // 0x290(0x8)
	struct UImage* IMG_SlotBg_R; // 0x298(0x8)
	struct UImage* IMG_Divider; // 0x2A0(0x8)
	struct UImage* IMG_SlotOutline; // 0x2A8(0x8)
	struct UPDTextBlock* T_PlayerName; // 0x2B0(0x8)
};

// Class ProjectD.PDBreakIntoUI
// Size : 0x380 (Inherited : 0x290)
struct UPDBreakIntoUI : UPDIngameModeWidget {
	struct UPDTextBlock* TB_PlayTimeMin; // 0x290(0x8)
	struct UPDTextBlock* TB_PlayTimeSec; // 0x298(0x8)
	struct UPDTextBlock* TB_Round; // 0x2A0(0x8)
	struct UPDGameMapModule* GameMap; // 0x2A8(0x8)
	struct UImage* IMG_TeamBG_Ally; // 0x2B0(0x8)
	struct UPDTextBlock* TB_TeamName_Ally; // 0x2B8(0x8)
	struct UImage* IMG_TeamBG_Enemy; // 0x2C0(0x8)
	struct UPDTextBlock* TB_TeamName_Enemy; // 0x2C8(0x8)
	struct UPDBreakIntoPlayerItem* AllyPlayer_01; // 0x2D0(0x8)
	struct UPDBreakIntoPlayerItem* AllyPlayer_02; // 0x2D8(0x8)
	struct UPDBreakIntoPlayerItem* AllyPlayer_03; // 0x2E0(0x8)
	struct UPDBreakIntoPlayerItem* AllyPlayer_04; // 0x2E8(0x8)
	struct UPDBreakIntoPlayerItem* AllyPlayer_05; // 0x2F0(0x8)
	struct UPDBreakIntoPlayerItem* EnemyPlayer_01; // 0x2F8(0x8)
	struct UPDBreakIntoPlayerItem* EnemyPlayer_02; // 0x300(0x8)
	struct UPDBreakIntoPlayerItem* EnemyPlayer_03; // 0x308(0x8)
	struct UPDBreakIntoPlayerItem* EnemyPlayer_04; // 0x310(0x8)
	struct UPDBreakIntoPlayerItem* EnemyPlayer_05; // 0x318(0x8)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_2; // 0x320(0x8)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_3; // 0x328(0x8)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_4; // 0x330(0x8)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_5; // 0x338(0x8)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_6; // 0x340(0x8)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_7; // 0x348(0x8)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_8; // 0x350(0x8)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_9; // 0x358(0x8)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_10; // 0x360(0x8)
	struct TArray<struct UPDStatusBoardRoundResultItem*> RoundResultList; // 0x368(0x10)
	unsigned char UnknownData_378[0x0008]; // 0x378(0x8)
};

// Class ProjectD.PDBrickListItemData
// Size : 0x58 (Inherited : 0x28)
struct UPDBrickListItemData : UObject {
	unsigned char UnknownData_28[0x0030]; // 0x28(0x30)
};

// Class ProjectD.PDBrickListItem
// Size : 0x2B8 (Inherited : 0x288)
struct UPDBrickListItem : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UImage* IMG_Brick; // 0x290(0x8)
	struct UPDTextBlock* TB_Title; // 0x298(0x8)
	struct UBorder* BD_ItemOutline; // 0x2A0(0x8)
	struct UBorder* BD_ItemOverOutline; // 0x2A8(0x8)
	struct UBorder* BD_ItemSelOutline; // 0x2B0(0x8)
};

// Class ProjectD.PDButton
// Size : 0xC50 (Inherited : 0x288)
struct UPDButton : UPDUserWidget {
	struct UPDCustomButton* Button; // 0x288(0x8)
	struct UPDTextBlock* Text; // 0x290(0x8)
	struct UBorder* BD_Outline; // 0x298(0x8)
	struct UWidgetSwitcher* WS_IMGState; // 0x2A0(0x8)
	struct UImage* IMG_Normal; // 0x2A8(0x8)
	struct UImage* IMG_Hover; // 0x2B0(0x8)
	struct UImage* IMG_Press; // 0x2B8(0x8)
	struct UImage* IMG_Disable; // 0x2C0(0x8)
	struct UImage* IMG_Ani1; // 0x2C8(0x8)
	struct UImage* IMG_Ani2; // 0x2D0(0x8)
	struct TArray<struct UImage*> AniImages; // 0x2D8(0x10)
	struct FButtonStyle ButtonStyle; // 0x2E8(0x278)
	struct FText InText; // 0x560(0x18)
	struct FSlateFontInfo Font; // 0x578(0x50)
	struct FMargin TextMargin; // 0x5C8(0x10)
	enum class ETextJustify TextJustfication; // 0x5D8(0x1)
	unsigned char UnknownData_5D9[0x0007]; // 0x5D9(0x7)
	struct FString NormalAniName; // 0x5E0(0x10)
	bool IsLoopNormalAni; // 0x5F0(0x1)
	unsigned char UnknownData_5F1[0x0007]; // 0x5F1(0x7)
	struct FString HoverAniName; // 0x5F8(0x10)
	bool IsLoopHoverAni; // 0x608(0x1)
	unsigned char UnknownData_609[0x0007]; // 0x609(0x7)
	struct TArray<struct FSlateBrush> AniImageBrushs; // 0x610(0x10)
	struct UAkAudioEvent* HoverSound; // 0x620(0x8)
	struct UAkAudioEvent* ClickSound; // 0x628(0x8)
	unsigned char UnknownData_630[0x0008]; // 0x630(0x8)
	struct FSlateBrush ButtonNormalStyle; // 0x638(0x88)
	struct FSlateBrush ButtonHoverStyle; // 0x6C0(0x88)
	struct FSlateBrush ButtonPressStyle; // 0x748(0x88)
	struct FSlateBrush ButtonDisableStyle; // 0x7D0(0x88)
	bool UseNormalOutline; // 0x858(0x1)
	bool UseHoverOutline; // 0x859(0x1)
	bool UseClickOutline; // 0x85A(0x1)
	bool UseDisableOutline; // 0x85B(0x1)
	unsigned char UnknownData_85C[0x0004]; // 0x85C(0x4)
	struct FPDButtonOutLine NormalOutLineStyle; // 0x860(0xC8)
	struct FPDButtonOutLine HoverOutLineStyle; // 0x928(0xC8)
	struct FPDButtonOutLine ClickOutLineStyle; // 0x9F0(0xC8)
	struct FPDButtonOutLine DisableOutLineStyle; // 0xAB8(0xC8)
	struct FSlateColor NormalTextColor; // 0xB80(0x28)
	struct FSlateColor HoverTextColor; // 0xBA8(0x28)
	struct FSlateColor PressTextColor; // 0xBD0(0x28)
	struct FSlateColor DisableTextColor; // 0xBF8(0x28)
	unsigned char UnknownData_C20[0x0030]; // 0xC20(0x30)

	void OnUnHovered(); // Function ProjectD.PDButton.OnUnHovered // (Native|Public) // Param Size : 0x0, 0x7FF653C4AE10
	void OnReleased(); // Function ProjectD.PDButton.OnReleased // (Native|Public) // Param Size : 0x0, 0x7FF653C4ADF0
	void OnHovered(); // Function ProjectD.PDButton.OnHovered // (Native|Public) // Param Size : 0x0, 0x7FF653C4ADD0
	void OnClicked(); // Function ProjectD.PDButton.OnClicked // (Native|Public) // Param Size : 0x0, 0x7FF653C4ADB0
};

// Class ProjectD.PDCameraShakeNormal
// Size : 0x160 (Inherited : 0x160)
struct UPDCameraShakeNormal : UCameraShake {
};

// Class ProjectD.PDCamSpline
// Size : 0x250 (Inherited : 0x220)
struct APDCamSpline : AActor {
	struct UPDSplineComponent* SplineComp; // 0x220(0x8)
	int32_t SplineID; // 0x228(0x4)
	int32_t FOVStart; // 0x22C(0x4)
	int32_t FOVEnd; // 0x230(0x4)
	bool ApplyRotation; // 0x234(0x1)
	unsigned char UnknownData_235[0x0003]; // 0x235(0x3)
	struct FRotator TargetRotation; // 0x238(0xC)
	unsigned char UnknownData_244[0x0004]; // 0x244(0x4)
	struct AActor* LookAtTarget; // 0x248(0x8)
};

// Class ProjectD.PDCCTVUI
// Size : 0x2A8 (Inherited : 0x288)
struct UPDCCTVUI : UPDUserWidget {
	struct UPDTextBlock* T_Desc_01; // 0x288(0x8)
	struct UPDTextBlock* T_Desc_02; // 0x290(0x8)
	struct UPDTextBlock* T_Desc_03; // 0x298(0x8)
	struct UPDTextBlock* T_Desc_04; // 0x2A0(0x8)
};

// Class ProjectD.PDChangeLocoTypeAnimNotifyState
// Size : 0x30 (Inherited : 0x30)
struct UPDChangeLocoTypeAnimNotifyState : UAnimNotifyState {
};

// Class ProjectD.PDCharacterEntity
// Size : 0x7F0 (Inherited : 0x4C0)
struct APDCharacterEntity : ACharacter {
	unsigned char UnknownData_4C0[0x0330]; // 0x4C0(0x330)
};

// Class ProjectD.PDTimelineBaseComponent
// Size : 0xB0 (Inherited : 0xB0)
struct UPDTimelineBaseComponent : UActorComponent {
};

// Class ProjectD.PDCharacterTimelineComponent
// Size : 0xB0 (Inherited : 0xB0)
struct UPDCharacterTimelineComponent : UPDTimelineBaseComponent {
};

// Class ProjectD.PDChattingUI
// Size : 0x350 (Inherited : 0x288)
struct UPDChattingUI : UPDUserWidget {
	struct UImage* IMG_ChatBg; // 0x288(0x8)
	struct UScrollBox* SB_Chatting; // 0x290(0x8)
	struct UBorder* BD_BlockArea; // 0x298(0x8)
	struct UCanvasPanel* CP_ChatArea; // 0x2A0(0x8)
	struct UCanvasPanel* CP_InputType; // 0x2A8(0x8)
	struct UCanvasPanel* CP_ChatImg; // 0x2B0(0x8)
	struct URichTextBlock* RTB_ChatType; // 0x2B8(0x8)
	struct UEditableText* ET_Chatting; // 0x2C0(0x8)
	struct URichTextBlock* RTB_CopyTextBlock; // 0x2C8(0x8)
	struct UCanvasPanel* CP_ChattingHelp; // 0x2D0(0x8)
	struct UPDButton* Btn_WhisperChat; // 0x2D8(0x8)
	struct UPDButton* Btn_ReplyChat; // 0x2E0(0x8)
	struct UPDButton* Btn_TeamChat; // 0x2E8(0x8)
	struct UPDButton* Btn_SquadChat; // 0x2F0(0x8)
	struct UPDButton* Btn_ClanChat; // 0x2F8(0x8)
	struct UPDButton* Btn_Hide; // 0x300(0x8)
	struct UPDCustomSlider* SD_Slider; // 0x308(0x8)
	unsigned char UnknownData_310[0x0040]; // 0x310(0x40)

	void SendChatMessage(struct FText Text, enum class ETextCommit CommitMethod); // Function ProjectD.PDChattingUI.SendChatMessage // (Final|Native|Public|HasOutParms) // Param Size : 0x19, 0x7FF653C4EF10
	void OnValueChanged(float InValue); // Function ProjectD.PDChattingUI.OnValueChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C4E6E0
	void OnClickWhisperChatBtn(); // Function ProjectD.PDChattingUI.OnClickWhisperChatBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C4E2C0
	void OnClickTeamChatBtn(); // Function ProjectD.PDChattingUI.OnClickTeamChatBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C4E2C0
	void OnClickSquadChatBtn(); // Function ProjectD.PDChattingUI.OnClickSquadChatBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C4E2C0
	void OnClickReplyChatBtn(); // Function ProjectD.PDChattingUI.OnClickReplyChatBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C4E2C0
	void OnClickHideBtn(); // Function ProjectD.PDChattingUI.OnClickHideBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C4E2C0
	void OnClickClanChatBtn(); // Function ProjectD.PDChattingUI.OnClickClanChatBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C4E2C0
	void ChangeText(struct FText InText); // Function ProjectD.PDChattingUI.ChangeText // (Final|Native|Public|HasOutParms) // Param Size : 0x18, 0x7FF653C4D810
};

// Class ProjectD.PDCheatManager
// Size : 0x90 (Inherited : 0x78)
struct UPDCheatManager : UCheatManager {
	unsigned char UnknownData_78[0x0018]; // 0x78(0x18)

	void WeaponSocketTest(); // Function ProjectD.PDCheatManager.WeaponSocketTest // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF6533F7E70
	void TestCameraShakeAnim(int32_t ShakeIndex, float ShakeScale); // Function ProjectD.PDCheatManager.TestCameraShakeAnim // (Final|Exec|Native|Public) // Param Size : 0x8, 0x7FF653C4FAD0
	void TestCameraShake(int32_t ShakeIndex, float ShakeScale, float TimerValue); // Function ProjectD.PDCheatManager.TestCameraShake // (Final|Exec|Native|Public) // Param Size : 0xC, 0x7FF653C4F9D0
	void TeleportCharacter(float fPosY); // Function ProjectD.PDCheatManager.TeleportCharacter // (Final|Exec|Native|Public) // Param Size : 0x4, 0x7FF653C4F950
	void SunFlower(); // Function ProjectD.PDCheatManager.SunFlower // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF653C4F930
	void SuicideHit(); // Function ProjectD.PDCheatManager.SuicideHit // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF653C4F910
	void StopLoopSound(); // Function ProjectD.PDCheatManager.StopLoopSound // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF653C4F8F0
	void SpawnItemAll(); // Function ProjectD.PDCheatManager.SpawnItemAll // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF6533F7E70
	void SpawnItem(uint32_t ItemDBIndex, int32_t ItemCount); // Function ProjectD.PDCheatManager.SpawnItem // (Final|Exec|Native|Public) // Param Size : 0x8, 0x7FF653C4F830
	void ShowSlopeAngle(); // Function ProjectD.PDCheatManager.ShowSlopeAngle // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF653C4F810
	void ShowRoundCoinRewardBoard(int32_t AddCoinValue, bool bShow); // Function ProjectD.PDCheatManager.ShowRoundCoinRewardBoard // (Final|Exec|Native|Public) // Param Size : 0x5, 0x7FF653C4F750
	void ShowOcclusionDebugLine(bool bShow); // Function ProjectD.PDCheatManager.ShowOcclusionDebugLine // (Final|Exec|Native|Public) // Param Size : 0x1, 0x7FF653C4F6C0
	void ShowMOA(); // Function ProjectD.PDCheatManager.ShowMOA // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF653C4F6A0
	void ShowIngameWidget(int32_t WidgetCode, bool bShow); // Function ProjectD.PDCheatManager.ShowIngameWidget // (Final|Exec|Native|Public) // Param Size : 0x5, 0x7FF653C4F5E0
	void ShowEffect(int32_t Index, float Distance); // Function ProjectD.PDCheatManager.ShowEffect // (Final|Exec|Native|Public) // Param Size : 0x8, 0x7FF653C4F510
	void ShowDecal(int32_t Index); // Function ProjectD.PDCheatManager.ShowDecal // (Final|Exec|Native|Public) // Param Size : 0x4, 0x7FF653C4F490
	void ShowDebugClimb(); // Function ProjectD.PDCheatManager.ShowDebugClimb // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF653C4F470
	void ShowDebugAudio(bool bShow); // Function ProjectD.PDCheatManager.ShowDebugAudio // (Final|Exec|Native|Public) // Param Size : 0x1, 0x7FF653C4F3E0
	void ShowAllIngameWidget(bool bShow); // Function ProjectD.PDCheatManager.ShowAllIngameWidget // (Final|Exec|Native|Public) // Param Size : 0x1, 0x7FF653C4F350
	void SetIngameUIScale(float InScale); // Function ProjectD.PDCheatManager.SetIngameUIScale // (Final|Exec|Native|Public) // Param Size : 0x4, 0x7FF653C4F2D0
	void SetCharacterURONonRender(int32_t UpdateRateValue); // Function ProjectD.PDCheatManager.SetCharacterURONonRender // (Final|Exec|Native|Public) // Param Size : 0x4, 0x7FF653C4F250
	void SetCharacterURODists(float D1, float D2, float D3); // Function ProjectD.PDCheatManager.SetCharacterURODists // (Final|Exec|Native|Public) // Param Size : 0xC, 0x7FF653C4F140
	void SetAiming(struct FString AimingType); // Function ProjectD.PDCheatManager.SetAiming // (Final|Exec|Native|Public) // Param Size : 0x10, 0x7FF653C4F040
	void RequestPing(); // Function ProjectD.PDCheatManager.RequestPing // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF6533F7E70
	void ReloadScript(); // Function ProjectD.PDCheatManager.ReloadScript // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF653C4EEF0
	void ReloadCameraSettings(); // Function ProjectD.PDCheatManager.ReloadCameraSettings // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF653C4EED0
	void ProjectileCollisionCheck(); // Function ProjectD.PDCheatManager.ProjectileCollisionCheck // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF653C4EEB0
	void ProfileClient10Sec(); // Function ProjectD.PDCheatManager.ProfileClient10Sec // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF6533F7E70
	void PlaySound(struct FString soundText, float Distance); // Function ProjectD.PDCheatManager.PlaySound // (Final|Exec|Native|Public) // Param Size : 0x14, 0x7FF653C4ED80
	void PlayLoopSound(struct FString soundText); // Function ProjectD.PDCheatManager.PlayLoopSound // (Final|Exec|Native|Public) // Param Size : 0x10, 0x7FF653C4EC80
	void PlayIntro(int32_t PcID, float Time, int32_t InSpawnIndex); // Function ProjectD.PDCheatManager.PlayIntro // (Final|Exec|Native|Public) // Param Size : 0xC, 0x7FF653C4EB80
	void PlayDestroy(); // Function ProjectD.PDCheatManager.PlayDestroy // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF653C4EB60
	void PlayCCTV(int32_t PcID, float Time, int32_t TeamType); // Function ProjectD.PDCheatManager.PlayCCTV // (Final|Exec|Native|Public) // Param Size : 0xC, 0x7FF653C4EA60
	void PDUnloadSubLevel(struct FString SubLevelName); // Function ProjectD.PDCheatManager.PDUnloadSubLevel // (Final|Exec|Native|Public) // Param Size : 0x10, 0x7FF653C4E960
	void PDNextViewTarget(); // Function ProjectD.PDCheatManager.PDNextViewTarget // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF653C4E940
	void PDLoadSubLevel(struct FString SubLevelName); // Function ProjectD.PDCheatManager.PDLoadSubLevel // (Final|Exec|Native|Public) // Param Size : 0x10, 0x7FF653C4E840
	void PDDrawLine(struct FVector Start, struct FVector End); // Function ProjectD.PDCheatManager.PDDrawLine // (Final|Exec|Native|Public|HasDefaults) // Param Size : 0x18, 0x7FF653C4E760
	void OnDeathMyPlayer(); // Function ProjectD.PDCheatManager.OnDeathMyPlayer // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF6533F7E70
	void OccDebugLine(bool bOn); // Function ProjectD.PDCheatManager.OccDebugLine // (Final|Exec|Native|Public) // Param Size : 0x1, 0x7FF653C4E0F0
	void MakeCrash(); // Function ProjectD.PDCheatManager.MakeCrash // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF653C4E0D0
	void IndefiniteStamina(bool bEnable); // Function ProjectD.PDCheatManager.IndefiniteStamina // (Final|Exec|Native|Public) // Param Size : 0x1, 0x7FF653C4E040
	void HitTest(struct FString Hit, struct FString Type, struct FString Direction); // Function ProjectD.PDCheatManager.HitTest // (Final|Exec|Native|Public) // Param Size : 0x30, 0x7FF653C4DE10
	void GrazeTest(struct FString GrazeType, int32_t Index); // Function ProjectD.PDCheatManager.GrazeTest // (Final|Exec|Native|Public) // Param Size : 0x14, 0x7FF653C4DCE0
	void GetHitParts(); // Function ProjectD.PDCheatManager.GetHitParts // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF653C4DCC0
	void GetCollider(); // Function ProjectD.PDCheatManager.GetCollider // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF653C4DCA0
	void FenceShow(); // Function ProjectD.PDCheatManager.FenceShow // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF6533F7E70
	void DrawDebugSkillZone(bool bDraw); // Function ProjectD.PDCheatManager.DrawDebugSkillZone // (Final|Exec|Native|Public) // Param Size : 0x1, 0x7FF653C42440
	void DebugParkour(struct FString ParkourType, bool bEnable); // Function ProjectD.PDCheatManager.DebugParkour // (Final|Exec|Native|Public) // Param Size : 0x11, 0x7FF653C4DB60
	void DebugMeleeDraw(int32_t DrawMode); // Function ProjectD.PDCheatManager.DebugMeleeDraw // (Final|Exec|Native|Public) // Param Size : 0x4, 0x7FF653C4D8F0
	void DebugMeleeClear(); // Function ProjectD.PDCheatManager.DebugMeleeClear // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF6533F7E70
	void DebugMeleeAttack(int32_t AttackType); // Function ProjectD.PDCheatManager.DebugMeleeAttack // (Final|Exec|Native|Public) // Param Size : 0x4, 0x7FF653C4D8F0
	void DebugExec(int32_t AnimIndex); // Function ProjectD.PDCheatManager.DebugExec // (Final|Exec|Native|Public) // Param Size : 0x4, 0x7FF653C4DAE0
	void DebugCameraEvent(bool bControllerRecoil, bool bAnimRecoil, bool bCameraShake, bool bCameraFOV); // Function ProjectD.PDCheatManager.DebugCameraEvent // (Final|Exec|Native|Public) // Param Size : 0x4, 0x7FF653C4D970
	void CompleteUnloadSubLevel(int32_t LinkID); // Function ProjectD.PDCheatManager.CompleteUnloadSubLevel // (Final|Native|Public) // Param Size : 0x4, 0x7FF653C4D8F0
	void CompleteLoadSubLevel(int32_t LinkID); // Function ProjectD.PDCheatManager.CompleteLoadSubLevel // (Final|Native|Public) // Param Size : 0x4, 0x7FF653C4D8F0
	void ChangeMuzzleEffect(int32_t Index, float FireRate); // Function ProjectD.PDCheatManager.ChangeMuzzleEffect // (Final|Exec|Native|Public) // Param Size : 0x8, 0x7FF653C4D740
	void ChangeListener(); // Function ProjectD.PDCheatManager.ChangeListener // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF653C4D720
	void ChamberBullet(); // Function ProjectD.PDCheatManager.ChamberBullet // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF6533F7E70
	void BuyJuggernaut(); // Function ProjectD.PDCheatManager.BuyJuggernaut // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF653C4D700
	void BombInstallStart(); // Function ProjectD.PDCheatManager.BombInstallStart // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF653C4D6E0
	void BombInstallFail(); // Function ProjectD.PDCheatManager.BombInstallFail // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF653C4D6C0
	void BombInstallEndSuccess(); // Function ProjectD.PDCheatManager.BombInstallEndSuccess // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF653C4D6A0
	void BombDeActiveStart(); // Function ProjectD.PDCheatManager.BombDeActiveStart // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF653C4D680
	void BombDeActiveFail(); // Function ProjectD.PDCheatManager.BombDeActiveFail // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF653C4D660
	void BombDeActiveEndSuccess(); // Function ProjectD.PDCheatManager.BombDeActiveEndSuccess // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF653C4D640
	void AutoMove(struct FString MoveType, bool bMove); // Function ProjectD.PDCheatManager.AutoMove // (Final|Exec|Native|Public) // Param Size : 0x11, 0x7FF653C4D500
	void ArrowShot(); // Function ProjectD.PDCheatManager.ArrowShot // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF653C4D4E0
	void AllPlayerSuicideHit(int32_t weaponEntityId); // Function ProjectD.PDCheatManager.AllPlayerSuicideHit // (Final|Exec|Native|Public) // Param Size : 0x4, 0x7FF653C4D460
	void AddCoinList(int32_t ChangeType, int32_t ChagneValue); // Function ProjectD.PDCheatManager.AddCoinList // (Final|Exec|Native|Public) // Param Size : 0x8, 0x7FF653C4D3A0
	void AddAttack(); // Function ProjectD.PDCheatManager.AddAttack // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF653C4D380
};

// Class ProjectD.PDCheckBox
// Size : 0x298 (Inherited : 0x288)
struct UPDCheckBox : UPDUserWidget {
	struct UCheckBox* CheckBox; // 0x288(0x8)
	struct UAkAudioEvent* HoverSound; // 0x290(0x8)
};

// Class ProjectD.PDCheerMarkFx
// Size : 0x298 (Inherited : 0x288)
struct UPDCheerMarkFx : UPDUserWidget {
	struct UWidgetSwitcher* WS_Cheer; // 0x288(0x8)
	unsigned char UnknownData_290[0x0008]; // 0x290(0x8)
};

// Class ProjectD.PDChunkInfo
// Size : 0x30 (Inherited : 0x30)
struct UPDChunkInfo : UPrimaryDataAsset {
};

// Class ProjectD.PDCircleProgress
// Size : 0x318 (Inherited : 0x288)
struct UPDCircleProgress : UPDUserWidget {
	struct UImage* Img_Bg; // 0x288(0x8)
	struct UImage* IMG_Gauge; // 0x290(0x8)
	struct UImage* IMG_Glow; // 0x298(0x8)
	struct UObject* BGTexture; // 0x2A0(0x8)
	struct FLinearColor BGColor; // 0x2A8(0x10)
	struct UObject* GaugeTexture; // 0x2B8(0x8)
	struct FLinearColor GaugeColor; // 0x2C0(0x10)
	bool UseGlow; // 0x2D0(0x1)
	unsigned char UnknownData_2D1[0x0007]; // 0x2D1(0x7)
	struct UObject* GlowTexture; // 0x2D8(0x8)
	struct FLinearColor GlowColor; // 0x2E0(0x10)
	float DefaultPercent; // 0x2F0(0x4)
	unsigned char UnknownData_2F4[0x0024]; // 0x2F4(0x24)
};

// Class ProjectD.PDCircleProgressModule
// Size : 0x2F8 (Inherited : 0x288)
struct UPDCircleProgressModule : UPDUserWidget {
	struct UImage* IMG_CircleProgress; // 0x288(0x8)
	struct UPDTextBlock* TB_ProgressTime; // 0x290(0x8)
	bool IsInverse; // 0x298(0x1)
	bool IsClockWise; // 0x299(0x1)
	bool IsDivide; // 0x29A(0x1)
	unsigned char UnknownData_29B[0x0001]; // 0x29B(0x1)
	int32_t DivideNum; // 0x29C(0x4)
	float DivideAntiAliasing; // 0x2A0(0x4)
	float DivideGapSize; // 0x2A4(0x4)
	float StartPos; // 0x2A8(0x4)
	float CompleteRange; // 0x2AC(0x4)
	float AntiAliasing; // 0x2B0(0x4)
	float CircleSize; // 0x2B4(0x4)
	bool IsColorTexture; // 0x2B8(0x1)
	unsigned char UnknownData_2B9[0x0007]; // 0x2B9(0x7)
	struct UTexture* ColorTexture; // 0x2C0(0x8)
	bool IsMaskTexture; // 0x2C8(0x1)
	unsigned char UnknownData_2C9[0x0007]; // 0x2C9(0x7)
	struct UTexture* MaskTexture; // 0x2D0(0x8)
	unsigned char UnknownData_2D8[0x0010]; // 0x2D8(0x10)
	struct FDelegate GetProgressPerDelegate; // 0x2E8(0x10)

	void OnSynchronizeProperties(); // Function ProjectD.PDCircleProgressModule.OnSynchronizeProperties // (Native|Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF653C4E340
};

// Class ProjectD.PDClanApplicantListItemData
// Size : 0x30 (Inherited : 0x28)
struct UPDClanApplicantListItemData : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// Class ProjectD.PDClanApplicantListItemUI
// Size : 0x2D8 (Inherited : 0x288)
struct UPDClanApplicantListItemUI : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UPDTextBlock* TB_Nickname; // 0x290(0x8)
	struct UPDTextBlock* TB_PassedTime; // 0x298(0x8)
	struct UCanvasPanel* CP_Normal; // 0x2A0(0x8)
	struct UPDButton* BTN_Accept; // 0x2A8(0x8)
	struct UPDButton* BTN_Decline; // 0x2B0(0x8)
	struct UCanvasPanel* CP_Wait; // 0x2B8(0x8)
	struct UPDButton* BTN_CancelReqJoin; // 0x2C0(0x8)
	struct UBorder* BD_Outline; // 0x2C8(0x8)
	unsigned char UnknownData_2D0[0x0008]; // 0x2D0(0x8)

	void OnClickDecline(); // Function ProjectD.PDClanApplicantListItemUI.OnClickDecline // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C4E280
	void OnClickCancelReqJoin(); // Function ProjectD.PDClanApplicantListItemUI.OnClickCancelReqJoin // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C4E280
	void OnClickAccept(); // Function ProjectD.PDClanApplicantListItemUI.OnClickAccept // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C4E260
};

// Class ProjectD.PDClanCreateUI
// Size : 0x350 (Inherited : 0x288)
struct UPDClanCreateUI : UPDSceneBaseUI {
	struct UEditableTextBox* ET_ClanName; // 0x288(0x8)
	struct UPDButton* BTN_CheckInUse; // 0x290(0x8)
	struct UPDTextBlock* T_ClanName_Msg; // 0x298(0x8)
	struct UPDTabButtonGroup* TabGroupMembership; // 0x2A0(0x8)
	struct UPDTabButton* TAB_FreeJoin; // 0x2A8(0x8)
	struct UPDTabButton* TAB_SignUp; // 0x2B0(0x8)
	struct UPDTabButtonGroup* TabGroupClanStyle; // 0x2B8(0x8)
	struct UPDTabButton* TAB_Social; // 0x2C0(0x8)
	struct UPDTabButton* TAB_Normal; // 0x2C8(0x8)
	struct UPDTabButton* TAB_Competition; // 0x2D0(0x8)
	struct UEditableTextBox* ET_ClanTagInput1; // 0x2D8(0x8)
	struct UEditableTextBox* ET_ClanTagInput2; // 0x2E0(0x8)
	struct UEditableTextBox* ET_ClanTagInput3; // 0x2E8(0x8)
	struct UPDButton* BTN_CreateClan; // 0x2F0(0x8)
	struct UPDTextBlock* T_CreateClan_Msg; // 0x2F8(0x8)
	struct UImage* IMG_ClanMarkBG; // 0x300(0x8)
	struct UImage* IMG_ClanMarkFG; // 0x308(0x8)
	struct UPDButton* BTN_RandomMark; // 0x310(0x8)
	struct UMultiLineEditableText* MET_ClanDesc; // 0x318(0x8)
	unsigned char UnknownData_320[0x0030]; // 0x320(0x30)

	void OnTextChangedClanTag3(struct FText InText); // Function ProjectD.PDClanCreateUI.OnTextChangedClanTag3 // (Final|Native|Protected|HasOutParms) // Param Size : 0x18, 0x7FF653C4E600
	void OnTextChangedClanTag2(struct FText InText); // Function ProjectD.PDClanCreateUI.OnTextChangedClanTag2 // (Final|Native|Protected|HasOutParms) // Param Size : 0x18, 0x7FF653C4E520
	void OnTextChangedClanTag1(struct FText InText); // Function ProjectD.PDClanCreateUI.OnTextChangedClanTag1 // (Final|Native|Protected|HasOutParms) // Param Size : 0x18, 0x7FF653C4E440
	void OnTextChangedClanDesc(struct FText Text); // Function ProjectD.PDClanCreateUI.OnTextChangedClanDesc // (Final|Native|Protected|HasOutParms) // Param Size : 0x18, 0x7FF653C4E360
	void OnCreateConfirm(); // Function ProjectD.PDClanCreateUI.OnCreateConfirm // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C4E320
	void OnClickSocialTab(); // Function ProjectD.PDClanCreateUI.OnClickSocialTab // (Final|Native|Protected) // Param Size : 0x0, 0x7FF6533F7E70
	void OnClickSingUpTab(); // Function ProjectD.PDClanCreateUI.OnClickSingUpTab // (Final|Native|Protected) // Param Size : 0x0, 0x7FF6533F7E70
	void OnClickRandomMark(); // Function ProjectD.PDClanCreateUI.OnClickRandomMark // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C4E300
	void OnClickNormalTab(); // Function ProjectD.PDClanCreateUI.OnClickNormalTab // (Final|Native|Protected) // Param Size : 0x0, 0x7FF6533F7E70
	void OnClickFreeJoinTab(); // Function ProjectD.PDClanCreateUI.OnClickFreeJoinTab // (Final|Native|Protected) // Param Size : 0x0, 0x7FF6533F7E70
	void OnClickCreateClan(); // Function ProjectD.PDClanCreateUI.OnClickCreateClan // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C4E2E0
	void OnClickCompetitionTab(); // Function ProjectD.PDClanCreateUI.OnClickCompetitionTab // (Final|Native|Protected) // Param Size : 0x0, 0x7FF6533F7E70
	void OnClickCheckInUse(); // Function ProjectD.PDClanCreateUI.OnClickCheckInUse // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C4E2A0
	void OnClanNameTextChanged(struct FText InText); // Function ProjectD.PDClanCreateUI.OnClanNameTextChanged // (Final|Native|Protected|HasOutParms) // Param Size : 0x18, 0x7FF653C4E180
};

// Class ProjectD.PDPopupBaseUI
// Size : 0x2B8 (Inherited : 0x288)
struct UPDPopupBaseUI : UPDUserWidget {
	unsigned char UnknownData_288[0x0030]; // 0x288(0x30)

	void OnClickOKBtn(); // Function ProjectD.PDPopupBaseUI.OnClickOKBtn // (Native|Protected) // Param Size : 0x0, 0x7FF653C4AE10
	void OnClickCancelBtn(); // Function ProjectD.PDPopupBaseUI.OnClickCancelBtn // (Native|Protected) // Param Size : 0x0, 0x7FF653C4ADB0
};

// Class ProjectD.PDOKPopupUI
// Size : 0x2D0 (Inherited : 0x2B8)
struct UPDOKPopupUI : UPDPopupBaseUI {
	struct UPDTextBlock* Desc; // 0x2B8(0x8)
	struct UPDButton* OKBtn; // 0x2C0(0x8)
	unsigned char UnknownData_2C8[0x0008]; // 0x2C8(0x8)
};

// Class ProjectD.PDClanInfoPopupUI
// Size : 0x328 (Inherited : 0x2D0)
struct UPDClanInfoPopupUI : UPDOKPopupUI {
	struct UPDTextBlock* T_ClanName; // 0x2D0(0x8)
	struct UPDTextBlock* T_Public; // 0x2D8(0x8)
	struct UWidgetSwitcher* WS_ClanTrend; // 0x2E0(0x8)
	struct UPDTextBlock* T_ClanTag; // 0x2E8(0x8)
	struct UImage* IMG_ClanMarkBG; // 0x2F0(0x8)
	struct UImage* IMG_ClanMarkFG; // 0x2F8(0x8)
	struct UPDTextBlock* T_ClanDesc; // 0x300(0x8)
	struct UMultiLineEditableText* ET_ClanDesc; // 0x308(0x8)
	struct UPDTextBlock* T_ClanMaster; // 0x310(0x8)
	struct UPDTextBlock* T_ClanMemberNum; // 0x318(0x8)
	struct UPDTextBlock* T_ClanCreateDate; // 0x320(0x8)
};

// Class ProjectD.PDClanInfoUI
// Size : 0x3F0 (Inherited : 0x288)
struct UPDClanInfoUI : UPDSceneBaseUI {
	struct UPDButton* BTN_ShowClanInfo; // 0x288(0x8)
	struct UWidgetSwitcher* WS_Info; // 0x290(0x8)
	struct UPDTextBlock* TB_ClanMsg; // 0x298(0x8)
	struct UPDTextBlock* T_ClanName; // 0x2A0(0x8)
	struct UImage* IMG_Info_Hover; // 0x2A8(0x8)
	struct UCanvasPanel* CP_None; // 0x2B0(0x8)
	struct UCanvasPanel* CP_Info; // 0x2B8(0x8)
	struct UCanvasPanel* CP_Member; // 0x2C0(0x8)
	struct UCanvasPanel* CP_Applicant; // 0x2C8(0x8)
	struct UCanvasPanel* CP_Manage; // 0x2D0(0x8)
	struct UPDButton* BTN_Leave; // 0x2D8(0x8)
	struct UPDTabButtonGroup* TabGroupMenu; // 0x2E0(0x8)
	struct UPDTabButton* TAB_Member; // 0x2E8(0x8)
	struct UPDTabButtonGroup* TabGroupMenu_Right; // 0x2F0(0x8)
	struct UPDTabButton* TAB_Applicant; // 0x2F8(0x8)
	struct UPDTabButton* TAB_ClanManage; // 0x300(0x8)
	struct UPDTabButton* TAB_BreakClan; // 0x308(0x8)
	struct UListView* LV_MemberList; // 0x310(0x8)
	struct UListView* LV_ApplicantList; // 0x318(0x8)
	struct UPDButton* BTN_Create; // 0x320(0x8)
	struct UPDButton* BTN_Search; // 0x328(0x8)
	struct UPDButton* BTN_ForceClanBreak; // 0x330(0x8)
	struct UEditableTextBox* ET_ClanName; // 0x338(0x8)
	struct UPDButton* BTN_CheckInUse; // 0x340(0x8)
	struct UPDTabButtonGroup* TabGroupMembership; // 0x348(0x8)
	struct UPDTabButton* TAB_FreeJoin; // 0x350(0x8)
	struct UPDTabButton* TAB_SignUp; // 0x358(0x8)
	struct UPDTabButtonGroup* TabGroupClanStyle; // 0x360(0x8)
	struct UPDTabButton* TAB_Social; // 0x368(0x8)
	struct UPDTabButton* TAB_Normal; // 0x370(0x8)
	struct UPDTabButton* TAB_Competition; // 0x378(0x8)
	struct UEditableTextBox* ET_ClanTagInput1; // 0x380(0x8)
	struct UEditableTextBox* ET_ClanTagInput2; // 0x388(0x8)
	struct UEditableTextBox* ET_ClanTagInput3; // 0x390(0x8)
	struct UPDButton* BTN_ManageChange; // 0x398(0x8)
	struct UImage* IMG_ClanMarkBG; // 0x3A0(0x8)
	struct UImage* IMG_ClanMarkFG; // 0x3A8(0x8)
	struct UPDButton* BTN_ChangeMark; // 0x3B0(0x8)
	struct UMultiLineEditableText* MET_ClanDesc; // 0x3B8(0x8)
	unsigned char UnknownData_3C0[0x0030]; // 0x3C0(0x30)

	void OnUnhoveredShowClanInfo(); // Function ProjectD.PDClanInfoUI.OnUnhoveredShowClanInfo // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C540B0
	void OnTextChangedClanTag3(struct FText InText); // Function ProjectD.PDClanInfoUI.OnTextChangedClanTag3 // (Final|Native|Protected|HasOutParms) // Param Size : 0x18, 0x7FF653C53FB0
	void OnTextChangedClanTag2(struct FText InText); // Function ProjectD.PDClanInfoUI.OnTextChangedClanTag2 // (Final|Native|Protected|HasOutParms) // Param Size : 0x18, 0x7FF653C53ED0
	void OnTextChangedClanTag1(struct FText InText); // Function ProjectD.PDClanInfoUI.OnTextChangedClanTag1 // (Final|Native|Protected|HasOutParms) // Param Size : 0x18, 0x7FF653C53DF0
	void OnTextChangedClanName(struct FText Text); // Function ProjectD.PDClanInfoUI.OnTextChangedClanName // (Final|Native|Protected|HasOutParms) // Param Size : 0x18, 0x7FF653C53D10
	void OnTextChangedClanDesc(struct FText Text); // Function ProjectD.PDClanInfoUI.OnTextChangedClanDesc // (Final|Native|Protected|HasOutParms) // Param Size : 0x18, 0x7FF653C53C30
	void OnLeaveConfirm(); // Function ProjectD.PDClanInfoUI.OnLeaveConfirm // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53BF0
	void OnHoveredShowClanInfo(); // Function ProjectD.PDClanInfoUI.OnHoveredShowClanInfo // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53B30
	void OnForceClanBreakButton(); // Function ProjectD.PDClanInfoUI.OnForceClanBreakButton // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C52DD0
	void OnClickSocialTab(); // Function ProjectD.PDClanInfoUI.OnClickSocialTab // (Final|Native|Protected) // Param Size : 0x0, 0x7FF6533F7E70
	void OnClickSingUpTab(); // Function ProjectD.PDClanInfoUI.OnClickSingUpTab // (Final|Native|Protected) // Param Size : 0x0, 0x7FF6533F7E70
	void OnClickShowClanInfo(); // Function ProjectD.PDClanInfoUI.OnClickShowClanInfo // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53700
	void OnClickSearch(); // Function ProjectD.PDClanInfoUI.OnClickSearch // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53660
	void OnClickNormalTab(); // Function ProjectD.PDClanInfoUI.OnClickNormalTab // (Final|Native|Protected) // Param Size : 0x0, 0x7FF6533F7E70
	void OnClickMemberTab(); // Function ProjectD.PDClanInfoUI.OnClickMemberTab // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53580
	void OnClickManageChange(); // Function ProjectD.PDClanInfoUI.OnClickManageChange // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53560
	void OnClickLeave(); // Function ProjectD.PDClanInfoUI.OnClickLeave // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53540
	void OnClickFreeJoinTab(); // Function ProjectD.PDClanInfoUI.OnClickFreeJoinTab // (Final|Native|Protected) // Param Size : 0x0, 0x7FF6533F7E70
	void OnClickDisband(); // Function ProjectD.PDClanInfoUI.OnClickDisband // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53400
	void OnClickCreate(); // Function ProjectD.PDClanInfoUI.OnClickCreate // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53360
	void OnClickCompetitionTab(); // Function ProjectD.PDClanInfoUI.OnClickCompetitionTab // (Final|Native|Protected) // Param Size : 0x0, 0x7FF6533F7E70
	void OnClickClanManageTab(); // Function ProjectD.PDClanInfoUI.OnClickClanManageTab // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53340
	void OnClickCheckInUse(); // Function ProjectD.PDClanInfoUI.OnClickCheckInUse // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53300
	void OnClickChangeMark(); // Function ProjectD.PDClanInfoUI.OnClickChangeMark // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C532E0
	void OnClickApplicantTab(); // Function ProjectD.PDClanInfoUI.OnClickApplicantTab // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C532A0
	void OnBreakClanConfirmButton(); // Function ProjectD.PDClanInfoUI.OnBreakClanConfirmButton // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C52DD0
	void OnBreakClanCancelButton(); // Function ProjectD.PDClanInfoUI.OnBreakClanCancelButton // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C52DB0
	void OnBreakClanButton(); // Function ProjectD.PDClanInfoUI.OnBreakClanButton // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C52D90
};

// Class ProjectD.PDClanListUI
// Size : 0x2C0 (Inherited : 0x288)
struct UPDClanListUI : UPDSceneBaseUI {
	struct UPDComboBox* CBO_ClanStyle2; // 0x288(0x8)
	struct UListView* LV_ClanList; // 0x290(0x8)
	struct UEditableTextBox* ET_Search; // 0x298(0x8)
	struct UPDButton* BTN_Search; // 0x2A0(0x8)
	struct UCanvasPanel* CP_ClanListContext; // 0x2A8(0x8)
	struct UPDButton* BTN_ClanInfo; // 0x2B0(0x8)
	unsigned char UnknownData_2B8[0x0008]; // 0x2B8(0x8)

	void OnEnterSearch(struct FText Text, enum class ETextCommit CommitMethod); // Function ProjectD.PDClanListUI.OnEnterSearch // (Final|Native|Protected|HasOutParms) // Param Size : 0x19, 0x7FF653C53940
	void OnClickSeach(); // Function ProjectD.PDClanListUI.OnClickSeach // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53640
	void OnClickClanInfo(); // Function ProjectD.PDClanListUI.OnClickClanInfo // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53320
	void OnClanStyleSelectionChanged(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function ProjectD.PDClanListUI.OnClanStyleSelectionChanged // (Final|Native|Protected) // Param Size : 0x11, 0x7FF653C53150
	void OnChangeSearchText(struct FText InText); // Function ProjectD.PDClanListUI.OnChangeSearchText // (Final|Native|Protected|HasOutParms) // Param Size : 0x18, 0x7FF653C53050
};

// Class ProjectD.PDClanMainUI
// Size : 0x300 (Inherited : 0x288)
struct UPDClanMainUI : UPDSceneBaseUI {
	struct UPDButton* Btn_GotoLobby; // 0x288(0x8)
	struct UPDTabButtonGroup* MenuTabGroup; // 0x290(0x8)
	struct UPDTabButton* TAB_ClanInfo; // 0x298(0x8)
	struct UPDTabButton* TAB_ClanList; // 0x2A0(0x8)
	struct UPDTabButton* TAB_ClanCreate; // 0x2A8(0x8)
	struct TMap<enum class None, struct UPDTabButton*> ClanTabs; // 0x2B0(0x50)

	void OnClickTabClanList(); // Function ProjectD.PDClanMainUI.OnClickTabClanList // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53760
	void OnClickTabClanInfo(); // Function ProjectD.PDClanMainUI.OnClickTabClanInfo // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53740
	void OnClickTabClanCreate(); // Function ProjectD.PDClanMainUI.OnClickTabClanCreate // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53720
	void OnClickBtnGotoLobby(); // Function ProjectD.PDClanMainUI.OnClickBtnGotoLobby // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C532C0
};

// Class ProjectD.PDClanMemberListItemData
// Size : 0x30 (Inherited : 0x28)
struct UPDClanMemberListItemData : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// Class ProjectD.PDClanMemberListItemUI
// Size : 0x2D8 (Inherited : 0x288)
struct UPDClanMemberListItemUI : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UPDTextBlock* TB_Nickname; // 0x290(0x8)
	struct UImage* IMG_Agent; // 0x298(0x8)
	struct UImage* IMG_Master; // 0x2A0(0x8)
	struct UPDTextBlock* TB_ConnectState; // 0x2A8(0x8)
	struct UPDButton* BTN_Kick; // 0x2B0(0x8)
	struct UBorder* BD_Outline; // 0x2B8(0x8)
	unsigned char UnknownData_2C0[0x0018]; // 0x2C0(0x18)

	void OnKickConfirm(); // Function ProjectD.PDClanMemberListItemUI.OnKickConfirm // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53BD0
	void OnClickKick(); // Function ProjectD.PDClanMemberListItemUI.OnClickKick // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C534E0
};

// Class ProjectD.PDClanOtherListItemData
// Size : 0x48 (Inherited : 0x28)
struct UPDClanOtherListItemData : UObject {
	unsigned char UnknownData_28[0x0020]; // 0x28(0x20)
};

// Class ProjectD.PDClanOtherListItemUI
// Size : 0x320 (Inherited : 0x288)
struct UPDClanOtherListItemUI : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UImage* IMG_ClanMarkBG; // 0x290(0x8)
	struct UImage* IMG_ClanMarkFG; // 0x298(0x8)
	struct UPDTextBlock* TB_ClanName; // 0x2A0(0x8)
	struct UPDTextBlock* TB_MemberCount; // 0x2A8(0x8)
	struct UImage* IMG_ActivityIndex; // 0x2B0(0x8)
	struct UWidgetSwitcher* WS_ClanTrend; // 0x2B8(0x8)
	struct UPDTextBlock* TB_ClanTag; // 0x2C0(0x8)
	struct UWidgetSwitcher* WS_Membership_Case; // 0x2C8(0x8)
	struct UPDImageButton* Btn_Bg; // 0x2D0(0x8)
	struct UPDButton* BTN_Join; // 0x2D8(0x8)
	struct UPDButton* BTN_Full; // 0x2E0(0x8)
	struct UBorder* BD_Outline; // 0x2E8(0x8)
	unsigned char UnknownData_2F0[0x0030]; // 0x2F0(0x30)

	void OnDblClicked(); // Function ProjectD.PDClanOtherListItemUI.OnDblClicked // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53920
	void OnClickJoin(); // Function ProjectD.PDClanOtherListItemUI.OnClickJoin // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C534C0
};

// Class ProjectD.PDCommPage
// Size : 0x290 (Inherited : 0x288)
struct UPDCommPage : UPDUserWidget {
	struct UTreeView* TV_Display; // 0x288(0x8)
};

// Class ProjectD.PDClanPage
// Size : 0x290 (Inherited : 0x290)
struct UPDClanPage : UPDCommPage {
};

// Class ProjectD.PDClimbNodeActor
// Size : 0x270 (Inherited : 0x220)
struct APDClimbNodeActor : AActor {
	struct USphereComponent* Sphere; // 0x220(0x8)
	struct UArrowComponent* Arrow; // 0x228(0x8)
	struct FNeighborInfo NeighborInfo; // 0x230(0x40)
};

// Class ProjectD.PDClimbableActor
// Size : 0x2D8 (Inherited : 0x220)
struct APDClimbableActor : AActor {
	unsigned char UnknownData_220[0x0010]; // 0x220(0x10)
	struct UBoxComponent* Box; // 0x230(0x8)
	unsigned char UnknownData_238[0x0018]; // 0x238(0x18)
	bool bDataOverridden; // 0x250(0x1)
	bool bBidirectional; // 0x251(0x1)
	unsigned char UnknownData_252[0x0006]; // 0x252(0x6)
	struct APDClimbableActor* OppositeDirectionActor; // 0x258(0x8)
	struct FNeighborInfoArray NeighborInfos; // 0x260(0x48)
	struct TArray<struct APDClimbableActor*> IgnoreActorsOnBuild; // 0x2A8(0x10)
	unsigned char UnknownData_2B8[0x0020]; // 0x2B8(0x20)
};

// Class ProjectD.PDClimbableActorGroup
// Size : 0x260 (Inherited : 0x220)
struct APDClimbableActorGroup : AActor {
	unsigned char UnknownData_220[0x0040]; // 0x220(0x40)
};

// Class ProjectD.PDCoinInfoListItemUI
// Size : 0x2B0 (Inherited : 0x288)
struct UPDCoinInfoListItemUI : UPDUserWidget {
	struct UCanvasPanel* CP_Coin; // 0x288(0x8)
	struct UPDTextBlock* TB_HoldingCoin; // 0x290(0x8)
	struct UPDTextBlock* TB_GetCoin; // 0x298(0x8)
	struct UPDTextBlock* TB_GetCoin_Back; // 0x2A0(0x8)
	float TotalShowTime; // 0x2A8(0x4)
	unsigned char UnknownData_2AC[0x0004]; // 0x2AC(0x4)
};

// Class ProjectD.PDCoinInfoUI
// Size : 0x2C0 (Inherited : 0x290)
struct UPDCoinInfoUI : UPDIngameModeWidget {
	unsigned char UnknownData_290[0x0008]; // 0x290(0x8)
	struct UCanvasPanel* CP_RoundCoinBoard; // 0x298(0x8)
	struct UVerticalBox* VB_CoinList; // 0x2A0(0x8)
	struct UPDTextBlock* TB_TotalCoin; // 0x2A8(0x8)
	float ShowDuration; // 0x2B0(0x4)
	int32_t MaxListNum; // 0x2B4(0x4)
	unsigned char UnknownData_2B8[0x0008]; // 0x2B8(0x8)
};

// Class ProjectD.PDComboBox
// Size : 0xF50 (Inherited : 0x288)
struct UPDComboBox : UPDUserWidget {
	struct UComboBoxString* ComboBox; // 0x288(0x8)
	struct FSlateFontInfo ComboFontInfo; // 0x290(0x50)
	struct FMargin ComboTextMargin; // 0x2E0(0x10)
	struct FComboBoxStyle ComboBoxWidgetStyle; // 0x2F0(0x3F0)
	struct FTableRowStyle ComboBoxItemStyle; // 0x6E0(0x7C8)
	float ItemHeight; // 0xEA8(0x4)
	unsigned char UnknownData_EAC[0x0004]; // 0xEAC(0x4)
	struct TMap<struct FString, struct USizeBox*> ItemBlocks; // 0xEB0(0x50)
	struct TMap<struct FString, struct UPDTextBlock*> ItemTexts; // 0xF00(0x50)

	struct UWidget* OnComboBoxGenerateWidget(struct FString Item); // Function ProjectD.PDComboBox.OnComboBoxGenerateWidget // (Final|Native|Private) // Param Size : 0x18, 0x7FF653C53800
};

// Class ProjectD.PDCommunityPopupUI
// Size : 0x3D0 (Inherited : 0x2B8)
struct UPDCommunityPopupUI : UPDPopupBaseUI {
	struct UPDTextBlock* T_CCU; // 0x2B8(0x8)
	struct UPDImageButton* IMG_Btn_Bg; // 0x2C0(0x8)
	struct UPDTabButton* Btn_FriendTab; // 0x2C8(0x8)
	struct UPDTabButton* Btn_ClanTab; // 0x2D0(0x8)
	struct UPDTabButton* Btn_FriendAddTab; // 0x2D8(0x8)
	struct UPDTabButtonGroup* TabGroup; // 0x2E0(0x8)
	struct UPDButton* Btn_FriendAdd; // 0x2E8(0x8)
	struct UPDButton* Btn_FriendRemove; // 0x2F0(0x8)
	struct UPDButton* Btn_FavoriteAdd; // 0x2F8(0x8)
	struct UPDButton* Btn_UnFavorite; // 0x300(0x8)
	struct UPDButton* Btn_PartyInvite; // 0x308(0x8)
	struct UPDButton* Btn_Whisper; // 0x310(0x8)
	struct UPDButton* Btn_CustomInvite; // 0x318(0x8)
	struct UPDButton* BTN_ClanInfo; // 0x320(0x8)
	struct UPDButton* Btn_WIC; // 0x328(0x8)
	struct UPDButton* Btn_Close; // 0x330(0x8)
	struct UCanvasPanel* CP_ContextMenu; // 0x338(0x8)
	struct UWidgetSwitcher* PageSwitcher; // 0x340(0x8)
	struct UPDFriendPage* FriendPage; // 0x348(0x8)
	struct UPDClanPage* ClanPage; // 0x350(0x8)
	struct UPDFriendAddPage* FriendAddPage; // 0x358(0x8)
	struct UPDFindPartyPageUI* FindPartyPage; // 0x360(0x8)
	struct UPDButton* Btn_FindParty; // 0x368(0x8)
	struct UCanvasPanel* CP_ToolTip; // 0x370(0x8)
	struct UPDTextBlock* TB_DataName; // 0x378(0x8)
	struct UPDTextBlock* TB_DataValue; // 0x380(0x8)
	struct UCanvasPanel* CP_MannerToolTip; // 0x388(0x8)
	struct UPDTextBlock* TB_PointLevel; // 0x390(0x8)
	struct UCanvasPanel* CP_FindPartyMannerToolTip; // 0x398(0x8)
	struct UPDTextBlock* TB_FindPartyPointLevel; // 0x3A0(0x8)
	unsigned char UnknownData_3A8[0x0028]; // 0x3A8(0x28)

	void OnWICClicked(); // Function ProjectD.PDCommunityPopupUI.OnWICClicked // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C540D0
	void OnWhisperClicked(); // Function ProjectD.PDCommunityPopupUI.OnWhisperClicked // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C540F0
	void OnUnFavoriteClicked(); // Function ProjectD.PDCommunityPopupUI.OnUnFavoriteClicked // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C54090
	void OnPartyInviteClicked(); // Function ProjectD.PDCommunityPopupUI.OnPartyInviteClicked // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53C10
	void OnFriendTabClicked(); // Function ProjectD.PDCommunityPopupUI.OnFriendTabClicked // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53B10
	void OnFriendRemoveClicked(); // Function ProjectD.PDCommunityPopupUI.OnFriendRemoveClicked // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53AF0
	void OnFriendAddTabClicked(); // Function ProjectD.PDCommunityPopupUI.OnFriendAddTabClicked // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53AD0
	void OnFriendAddClicked(); // Function ProjectD.PDCommunityPopupUI.OnFriendAddClicked // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53AB0
	void OnFindPartyClicked(); // Function ProjectD.PDCommunityPopupUI.OnFindPartyClicked // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53A90
	void OnFavoriteAddClicked(); // Function ProjectD.PDCommunityPopupUI.OnFavoriteAddClicked // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53A70
	void OnCustomInviteClicked(); // Function ProjectD.PDCommunityPopupUI.OnCustomInviteClicked // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53900
	void OnClanTabClicked(); // Function ProjectD.PDCommunityPopupUI.OnClanTabClicked // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53280
	void OnClanInfoClicked(); // Function ProjectD.PDCommunityPopupUI.OnClanInfoClicked // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C53130
};

// Class ProjectD.PDOptionUIBase
// Size : 0x338 (Inherited : 0x288)
struct UPDOptionUIBase : UPDUserWidget {
	struct UPDTabButtonGroup* MiddleOptionTabBtnGroup; // 0x288(0x8)
	struct FSlateFontInfo CategoryFont; // 0x290(0x50)
	struct TMap<struct FString, struct UPDOptionContent*> MapOptionContents; // 0x2E0(0x50)
	unsigned char UnknownData_330[0x0008]; // 0x330(0x8)
};

// Class ProjectD.PDControlOptionUI
// Size : 0x358 (Inherited : 0x338)
struct UPDControlOptionUI : UPDOptionUIBase {
	struct UPDTabButton* MoveNActionSettingBtn; // 0x338(0x8)
	struct UPDTabButton* ETCActionSettingBtn; // 0x340(0x8)
	struct UScrollBox* SB_Controls; // 0x348(0x8)
	unsigned char UnknownData_350[0x0008]; // 0x350(0x8)

	void OnInputKeySelected(struct UPDOptionContent* Content); // Function ProjectD.PDControlOptionUI.OnInputKeySelected // (Final|Native|Private) // Param Size : 0x8, 0x7FF653C53B50
	void OnClickZoom2ToggleButton(); // Function ProjectD.PDControlOptionUI.OnClickZoom2ToggleButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C537E0
	void OnClickZoom2DefaultButton(); // Function ProjectD.PDControlOptionUI.OnClickZoom2DefaultButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C537C0
	void OnClickZoom1ToggleButton(); // Function ProjectD.PDControlOptionUI.OnClickZoom1ToggleButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C537A0
	void OnClickZoom1DefaultButton(); // Function ProjectD.PDControlOptionUI.OnClickZoom1DefaultButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C53780
	void OnClickShootingRightButton(); // Function ProjectD.PDControlOptionUI.OnClickShootingRightButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C536E0
	void OnClickShootingLeftButton(); // Function ProjectD.PDControlOptionUI.OnClickShootingLeftButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C536C0
	void OnClickSetToggleButton(); // Function ProjectD.PDControlOptionUI.OnClickSetToggleButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C536A0
	void OnClickSetDefaultButton(); // Function ProjectD.PDControlOptionUI.OnClickSetDefaultButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C53680
	void OnClickScoreBoardToggleButton(); // Function ProjectD.PDControlOptionUI.OnClickScoreBoardToggleButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C53620
	void OnClickScoreBoardHoldeButton(); // Function ProjectD.PDControlOptionUI.OnClickScoreBoardHoldeButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C53600
	void OnClickScope2ToggleButton(); // Function ProjectD.PDControlOptionUI.OnClickScope2ToggleButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C535E0
	void OnClickScope2DefaultButton(); // Function ProjectD.PDControlOptionUI.OnClickScope2DefaultButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C535C0
	void OnClickMoveNActionSettingButton(); // Function ProjectD.PDControlOptionUI.OnClickMoveNActionSettingButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C535A0
	void OnClickLeanToggleButton(); // Function ProjectD.PDControlOptionUI.OnClickLeanToggleButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C53520
	void OnClickLeanHoldButton(); // Function ProjectD.PDControlOptionUI.OnClickLeanHoldButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C53500
	void OnClickIngameMapSizeToggleButton(); // Function ProjectD.PDControlOptionUI.OnClickIngameMapSizeToggleButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C534A0
	void OnClickIngameMapSizeHoldeButton(); // Function ProjectD.PDControlOptionUI.OnClickIngameMapSizeHoldeButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C53480
	void OnClickETCActionSettingButton(); // Function ProjectD.PDControlOptionUI.OnClickETCActionSettingButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C53420
	void OnClickEnableWeaponChange2Button(); // Function ProjectD.PDControlOptionUI.OnClickEnableWeaponChange2Button // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C53460
	void OnClickEnableWeaponChange1Button(); // Function ProjectD.PDControlOptionUI.OnClickEnableWeaponChange1Button // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C53440
	void OnClickDisableWeaponChange2Button(); // Function ProjectD.PDControlOptionUI.OnClickDisableWeaponChange2Button // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C533E0
	void OnClickDisableWeaponChange1Button(); // Function ProjectD.PDControlOptionUI.OnClickDisableWeaponChange1Button // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C533C0
	void OnClickCrouchToggleButton(); // Function ProjectD.PDControlOptionUI.OnClickCrouchToggleButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C533A0
	void OnClickCrouchHoldButton(); // Function ProjectD.PDControlOptionUI.OnClickCrouchHoldButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C53380
	void OnChangePing1DblClickType(struct FString Item, enum class ESelectInfo SelType); // Function ProjectD.PDControlOptionUI.OnChangePing1DblClickType // (Final|Native|Private) // Param Size : 0x11, 0x7FF653C52F20
	void OnChangePing1ClickType(struct FString Item, enum class ESelectInfo SelType); // Function ProjectD.PDControlOptionUI.OnChangePing1ClickType // (Final|Native|Private) // Param Size : 0x11, 0x7FF653C52DF0
	void OnAutoReloadEnabled(); // Function ProjectD.PDControlOptionUI.OnAutoReloadEnabled // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C52D70
	void OnAutoReloadDisabled(); // Function ProjectD.PDControlOptionUI.OnAutoReloadDisabled // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C52D50
};

// Class ProjectD.PDCrossHairUI
// Size : 0x7B8 (Inherited : 0x290)
struct UPDCrossHairUI : UPDIngameModeWidget {
	struct UWidgetSwitcher* WS_FireIndicator; // 0x290(0x8)
	struct UPanelWidget* CP_Aim; // 0x298(0x8)
	struct UPanelWidget* CP_Aim_Offset; // 0x2A0(0x8)
	struct UPanelWidget* CP_Aim_Crosshair; // 0x2A8(0x8)
	struct UPanelWidget* CP_Crosshair_Default; // 0x2B0(0x8)
	struct UPanelWidget* CP_Crosshair_SG; // 0x2B8(0x8)
	struct UBorder* BD_Kill; // 0x2C0(0x8)
	struct UPanelWidget* CP_Ammo; // 0x2C8(0x8)
	struct UPDCircleProgressModule* CPM_Ammo; // 0x2D0(0x8)
	struct UPDCircleProgressModule* CPM_AmmoBG; // 0x2D8(0x8)
	struct UBorder* BD_AmmoInfo; // 0x2E0(0x8)
	struct USizeBox* SB_Key; // 0x2E8(0x8)
	struct UPDTextBlock* TB_Key; // 0x2F0(0x8)
	struct UPDTextBlock* TB_AmmoInfo; // 0x2F8(0x8)
	struct UImage* IMG_CrossHairSight; // 0x300(0x8)
	struct UImage* IMG_CrossHairC; // 0x308(0x8)
	struct UImage* IMG_CrossHairL; // 0x310(0x8)
	struct UImage* IMG_CrossHairR; // 0x318(0x8)
	struct UImage* IMG_CrossHairT; // 0x320(0x8)
	struct UImage* IMG_CrossHairB; // 0x328(0x8)
	struct UImage* IMG_CrossHairC_L; // 0x330(0x8)
	struct UImage* IMG_CrossHairC_R; // 0x338(0x8)
	struct UImage* IMG_CrossHairC_T; // 0x340(0x8)
	struct UImage* IMG_CrossHairC_B; // 0x348(0x8)
	struct UImage* IMG_CrossHairC_C; // 0x350(0x8)
	struct UPanelWidget* CP_RedDot; // 0x358(0x8)
	struct UImage* IMG_RedDot; // 0x360(0x8)
	struct UImage* IMG_RedDotActive; // 0x368(0x8)
	struct UImage* IMG_RedDotLine; // 0x370(0x8)
	struct UImage* IMG_AimWarning; // 0x378(0x8)
	struct UPanelWidget* CP_Melee; // 0x380(0x8)
	struct UImage* IMG_CrossHairMelee; // 0x388(0x8)
	struct UImage* IMG_ReloadIcon; // 0x390(0x8)
	struct UBorder* BD_Hit; // 0x398(0x8)
	struct UImage* IMG_Hit_L; // 0x3A0(0x8)
	struct UImage* IMG_Hit_R; // 0x3A8(0x8)
	struct UImage* IMG_Hit_T; // 0x3B0(0x8)
	struct UImage* IMG_Hit_D; // 0x3B8(0x8)
	struct UPDHitFeedBackUI* HitFeedback_Armor; // 0x3C0(0x8)
	struct UPDHitFeedBackUI* HitFeedback_kill; // 0x3C8(0x8)
	bool bEnableCrosshairLineAlpha; // 0x3D0(0x1)
	unsigned char UnknownData_3D1[0x0007]; // 0x3D1(0x7)
	struct UCurveFloat* CrosshairFireCurve; // 0x3D8(0x8)
	unsigned char UnknownData_3E0[0x0080]; // 0x3E0(0x80)
	struct TArray<struct UImage*> HitLines; // 0x460(0x10)
	struct FSlateBrush CenterDotBrush; // 0x470(0x88)
	struct FSlateBrush CrossHairBrush; // 0x4F8(0x88)
	struct FSlateBrush HitLineBrush; // 0x580(0x88)
	struct FSlateBrush KillLineBrush; // 0x608(0x88)
	struct FSlateBrush RedDotBrush; // 0x690(0x88)
	struct FSlateBrush OutlineBrush; // 0x718(0x88)
	float DefaultOutlineThickness; // 0x7A0(0x4)
	enum class ECrossHairDrawStyle DrawStyle; // 0x7A4(0x4)
	unsigned char UnknownData_7A8[0x0010]; // 0x7A8(0x10)
};

// Class ProjectD.PDCursorWidget
// Size : 0x240 (Inherited : 0x230)
struct UPDCursorWidget : UUserWidget {
	struct UCanvasPanel* CP_Parent; // 0x230(0x8)
	struct UImage* IMG_Cursor; // 0x238(0x8)

	void SetSize(); // Function ProjectD.PDCursorWidget.SetSize // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C57480
};

// Class ProjectD.PDCustomButton
// Size : 0x428 (Inherited : 0x428)
struct UPDCustomButton : UButton {
};

// Class ProjectD.PDCustomCategoryListItemData
// Size : 0x38 (Inherited : 0x28)
struct UPDCustomCategoryListItemData : UObject {
	unsigned char UnknownData_28[0x0010]; // 0x28(0x10)
};

// Class ProjectD.PDCustomCategoryListItem
// Size : 0x2B8 (Inherited : 0x288)
struct UPDCustomCategoryListItem : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UBorder* BD_ItemOutline; // 0x290(0x8)
	struct UBorder* BD_Back; // 0x298(0x8)
	struct UPDTextBlock* TB_Category; // 0x2A0(0x8)
	struct UImage* IMG_New; // 0x2A8(0x8)
	unsigned char UnknownData_2B0[0x0008]; // 0x2B0(0x8)
};

// Class ProjectD.PDCustomCharacterDecoUI
// Size : 0x300 (Inherited : 0x288)
struct UPDCustomCharacterDecoUI : UPDSceneBaseUI {
	struct UTileView* TV_ClosetCategory; // 0x288(0x8)
	struct UTileView* TV_ClosetItemList; // 0x290(0x8)
	struct UPDButton* Btn_Restore; // 0x298(0x8)
	struct UPDButton* Btn_Save; // 0x2A0(0x8)
	struct UBorder* BD_Cover; // 0x2A8(0x8)
	struct UPDButton* Btn_Buy; // 0x2B0(0x8)
	struct UPDCheckBox* CB_AllSkin; // 0x2B8(0x8)
	struct UPDCheckBox* CB_HasSkin; // 0x2C0(0x8)
	struct UPDCheckBox* CB_AllHasSkin; // 0x2C8(0x8)
	struct UPDKeyButton* Btn_GotoBack; // 0x2D0(0x8)
	struct UPDButton* Btn_LeftTurn; // 0x2D8(0x8)
	struct UPDButton* Btn_Zoom; // 0x2E0(0x8)
	struct UPDButton* Btn_RightTurn; // 0x2E8(0x8)
	struct UPDTextBlock* TB_AllHasSkin; // 0x2F0(0x8)
	unsigned char UnknownData_2F8[0x0008]; // 0x2F8(0x8)

	void OnZoomReleased(); // Function ProjectD.PDCustomCharacterDecoUI.OnZoomReleased // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C57360
	void OnZoomPressed(); // Function ProjectD.PDCustomCharacterDecoUI.OnZoomPressed // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C57340
	void OnSelectedCustomItem(struct UPDCustomListItemData* InListItemData); // Function ProjectD.PDCustomCharacterDecoUI.OnSelectedCustomItem // (Final|Native|Private) // Param Size : 0x8, 0x7FF653C571E0
	void OnSelectedCategoryItem(struct UPDCustomCategoryListItemData* InListItemData); // Function ProjectD.PDCustomCharacterDecoUI.OnSelectedCategoryItem // (Final|Native|Private) // Param Size : 0x8, 0x7FF653C57160
	void OnSaveAndLeave(); // Function ProjectD.PDCustomCharacterDecoUI.OnSaveAndLeave // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C57120
	void OnRightTurnReleased(); // Function ProjectD.PDCustomCharacterDecoUI.OnRightTurnReleased // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C56C40
	void OnRightTurnPressed(); // Function ProjectD.PDCustomCharacterDecoUI.OnRightTurnPressed // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C56FD0
	void OnRestore(); // Function ProjectD.PDCustomCharacterDecoUI.OnRestore // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C56FB0
	void OnMenuCoverMouseDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ProjectD.PDCustomCharacterDecoUI.OnMenuCoverMouseDown // (Final|Native|Private|HasOutParms) // Param Size : 0xA8, 0x7FF653C56D90
	void OnLeftTurnReleased(); // Function ProjectD.PDCustomCharacterDecoUI.OnLeftTurnReleased // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C56C40
	void OnLeftTurnPressed(); // Function ProjectD.PDCustomCharacterDecoUI.OnLeftTurnPressed // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C56C20
	void OnHasSkinCheckBoxChanged(bool InIsChecked); // Function ProjectD.PDCustomCharacterDecoUI.OnHasSkinCheckBoxChanged // (Final|Native|Private) // Param Size : 0x1, 0x7FF653C56B10
	void OnBuyItem(); // Function ProjectD.PDCustomCharacterDecoUI.OnBuyItem // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C568D0
	void OnAllSkinCheckBoxChanged(bool InIsChecked); // Function ProjectD.PDCustomCharacterDecoUI.OnAllSkinCheckBoxChanged // (Final|Native|Private) // Param Size : 0x1, 0x7FF653C56820
	void GotoBack(); // Function ProjectD.PDCustomCharacterDecoUI.GotoBack // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C56730
};

// Class ProjectD.PDCustomCharacterPerkUI
// Size : 0x410 (Inherited : 0x288)
struct UPDCustomCharacterPerkUI : UPDSceneBaseUI {
	unsigned char UnknownData_288[0x0010]; // 0x288(0x10)
	struct UTileView* TV_UniqueLeptonList; // 0x298(0x8)
	struct UTileView* TV_ProgressLeptonList; // 0x2A0(0x8)
	struct UTileView* TV_OwnLeptonList; // 0x2A8(0x8)
	struct UTileView* TV_EquipLeptonList; // 0x2B0(0x8)
	struct UImage* IMG_CostBg1; // 0x2B8(0x8)
	struct UImage* IMG_Cost1; // 0x2C0(0x8)
	struct UImage* IMG_CostBg2; // 0x2C8(0x8)
	struct UImage* IMG_Cost2; // 0x2D0(0x8)
	struct UImage* IMG_CostBg3; // 0x2D8(0x8)
	struct UImage* IMG_Cost3; // 0x2E0(0x8)
	struct UImage* IMG_CostBg4; // 0x2E8(0x8)
	struct UImage* IMG_Cost4; // 0x2F0(0x8)
	struct UImage* IMG_CostBg5; // 0x2F8(0x8)
	struct UImage* IMG_Cost5; // 0x300(0x8)
	struct TArray<struct UImage*> IMG_CostBgs; // 0x308(0x10)
	struct TArray<struct UImage*> IMG_Costs; // 0x318(0x10)
	struct UPDTextBlock* TB_Level; // 0x328(0x8)
	struct UPDTextBlock* TB_Name; // 0x330(0x8)
	struct UCanvasPanel* CP_SkillToolTip; // 0x338(0x8)
	struct UImage* IMG_PerkPreview; // 0x340(0x8)
	struct UImage* IMG_DescIcon; // 0x348(0x8)
	struct UPDTextBlock* TB_PerkName; // 0x350(0x8)
	struct UPDTextBlock* TB_PerkDesc; // 0x358(0x8)
	struct UPDTextBlock* TB_PerkStory; // 0x360(0x8)
	struct UPDKeyButton* Btn_GotoBack; // 0x368(0x8)
	struct UCanvasPanel* CP_Loading; // 0x370(0x8)
	struct UPDTabButton* TBtn_Preset01; // 0x378(0x8)
	struct UPDTabButton* TBtn_Preset02; // 0x380(0x8)
	struct UPDTabButton* TBtn_Preset03; // 0x388(0x8)
	struct UPDButton* Btn_List01; // 0x390(0x8)
	struct UPDButton* Btn_List02; // 0x398(0x8)
	struct UPDButton* Btn_List03; // 0x3A0(0x8)
	struct UImage* IMG_List01; // 0x3A8(0x8)
	struct UImage* IMG_List02; // 0x3B0(0x8)
	struct UImage* IMG_List03; // 0x3B8(0x8)
	struct UCanvasPanel* CP_PresetList; // 0x3C0(0x8)
	struct UListView* LV_PresetList; // 0x3C8(0x8)
	struct UPDButton* Btn_ResetPreset; // 0x3D0(0x8)
	struct UPDTabButtonGroup* PresetCategoryGroup; // 0x3D8(0x8)
	unsigned char UnknownData_3E0[0x0030]; // 0x3E0(0x30)

	void SeLeptonInfo(int32_t SkillIndex, struct FVector2D InfoAbsolutePos, int32_t IconWidth); // Function ProjectD.PDCustomCharacterPerkUI.SeLeptonInfo // (Final|Native|Protected|HasDefaults) // Param Size : 0x10, 0x7FF653C57380
	void OnSelectedPresetNameList(struct UPDAgentPresetListItemData* InListItemData); // Function ProjectD.PDCustomCharacterPerkUI.OnSelectedPresetNameList // (Final|Native|Protected) // Param Size : 0x8, 0x7FF653C57260
	void OnSaveAndLeaveCustomCharacterLepton(); // Function ProjectD.PDCustomCharacterPerkUI.OnSaveAndLeaveCustomCharacterLepton // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C57140
	void OnLeaveCustomCharacterLepton(); // Function ProjectD.PDCustomCharacterPerkUI.OnLeaveCustomCharacterLepton // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C56C00
	void OnClickResetPreset(); // Function ProjectD.PDCustomCharacterPerkUI.OnClickResetPreset // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C56A90
	void OnClickPresetThird(); // Function ProjectD.PDCustomCharacterPerkUI.OnClickPresetThird // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C56A70
	void OnClickPresetSecond(); // Function ProjectD.PDCustomCharacterPerkUI.OnClickPresetSecond // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C56A50
	void OnClickPresetFirst(); // Function ProjectD.PDCustomCharacterPerkUI.OnClickPresetFirst // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C56A30
	void OnClickNameList(); // Function ProjectD.PDCustomCharacterPerkUI.OnClickNameList // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C56A10
	void LeptonTooltipVisible(bool bShow); // Function ProjectD.PDCustomCharacterPerkUI.LeptonTooltipVisible // (Final|Native|Protected) // Param Size : 0x1, 0x7FF653C56770
	void GotoBack(); // Function ProjectD.PDCustomCharacterPerkUI.GotoBack // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C56750
};

// Class ProjectD.PDCustomJoinPopupUI
// Size : 0x2D8 (Inherited : 0x2B8)
struct UPDCustomJoinPopupUI : UPDPopupBaseUI {
	struct UPDButton* Btn_Show; // 0x2B8(0x8)
	struct UPDButton* Btn_Hide; // 0x2C0(0x8)
	struct UPDButton* Btn_Ok; // 0x2C8(0x8)
	struct UEditableTextBox* ET_Code; // 0x2D0(0x8)

	void OnClickShowBtn(); // Function ProjectD.PDCustomJoinPopupUI.OnClickShowBtn // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C56AB0
	void OnClickHideBtn(); // Function ProjectD.PDCustomJoinPopupUI.OnClickHideBtn // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C569F0
	void OnChangeText(struct FText InText); // Function ProjectD.PDCustomJoinPopupUI.OnChangeText // (Final|Native|Protected|HasOutParms) // Param Size : 0x18, 0x7FF653C568F0
};

// Class ProjectD.PDCustomListItemData
// Size : 0x88 (Inherited : 0x28)
struct UPDCustomListItemData : UObject {
	unsigned char UnknownData_28[0x0060]; // 0x28(0x60)
};

// Class ProjectD.PDCustomListItem
// Size : 0x300 (Inherited : 0x288)
struct UPDCustomListItem : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UAkAudioEvent* HoverSound; // 0x290(0x8)
	struct UAkAudioEvent* ClickSound; // 0x298(0x8)
	struct UImage* Img_Bg; // 0x2A0(0x8)
	struct UImage* IMG_Item; // 0x2A8(0x8)
	struct UImage* IMG_Lock; // 0x2B0(0x8)
	struct UImage* IMG_New; // 0x2B8(0x8)
	struct UImage* IMG_Equip; // 0x2C0(0x8)
	struct UPDTextBlock* TB_Name; // 0x2C8(0x8)
	struct UPDTextBlock* TB_Count; // 0x2D0(0x8)
	struct UBorder* BD_ItemOutline; // 0x2D8(0x8)
	struct UBorder* BD_ItemSelOutline; // 0x2E0(0x8)
	unsigned char UnknownData_2E8[0x0018]; // 0x2E8(0x18)
};

// Class ProjectD.PDCustomMatchCharItemData
// Size : 0x38 (Inherited : 0x28)
struct UPDCustomMatchCharItemData : UObject {
	unsigned char UnknownData_28[0x0010]; // 0x28(0x10)
};

// Class ProjectD.PDCustomMatchCharItem
// Size : 0x2B8 (Inherited : 0x288)
struct UPDCustomMatchCharItem : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UImage* Img_Bg; // 0x290(0x8)
	struct UImage* IMG_Item; // 0x298(0x8)
	struct UBorder* BD_ItemOutline; // 0x2A0(0x8)
	unsigned char UnknownData_2A8[0x0010]; // 0x2A8(0x10)
};

// Class ProjectD.PDCustomMatchListItemData
// Size : 0x80 (Inherited : 0x28)
struct UPDCustomMatchListItemData : UObject {
	unsigned char UnknownData_28[0x0058]; // 0x28(0x58)
};

// Class ProjectD.PDCustomMatchListItem
// Size : 0x360 (Inherited : 0x288)
struct UPDCustomMatchListItem : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UCanvasPanel* CP_Normal; // 0x290(0x8)
	struct UCanvasPanel* CP_Add; // 0x298(0x8)
	struct UCanvasPanel* CP_Join; // 0x2A0(0x8)
	struct UCanvasPanel* CP_Empty; // 0x2A8(0x8)
	struct UBorder* Background; // 0x2B0(0x8)
	struct UImage* IMG_Face; // 0x2B8(0x8)
	struct UImage* IMG_ClanMarkBG; // 0x2C0(0x8)
	struct UImage* IMG_ClanMarkFG; // 0x2C8(0x8)
	struct UPDTextBlock* TB_ClanName; // 0x2D0(0x8)
	struct UCanvasPanel* CP_ClanMark; // 0x2D8(0x8)
	struct UPDButton* Btn_Perk; // 0x2E0(0x8)
	struct UImage* IMG_Leader; // 0x2E8(0x8)
	struct UPDTextBlock* TB_NickName3; // 0x2F0(0x8)
	struct UPDButton* Btn_CharChange; // 0x2F8(0x8)
	struct UPDButton* BTN_Join; // 0x300(0x8)
	unsigned char UnknownData_308[0x0058]; // 0x308(0x58)

	void OnPerkUnHovered(); // Function ProjectD.PDCustomMatchListItem.OnPerkUnHovered // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C56F90
	void OnPerkHovered(); // Function ProjectD.PDCustomMatchListItem.OnPerkHovered // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C56F70
	void OnJoinClicked(); // Function ProjectD.PDCustomMatchListItem.OnJoinClicked // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C56BC0
	void OnCharChangeClicked(); // Function ProjectD.PDCustomMatchListItem.OnCharChangeClicked // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C569D0
};

// Class ProjectD.PDCustomMatchTooltip
// Size : 0x298 (Inherited : 0x288)
struct UPDCustomMatchTooltip : UPDUserWidget {
	struct UListView* LV_Perks; // 0x288(0x8)
	struct UImage* Img_Bg; // 0x290(0x8)
};

// Class ProjectD.PDCustomPerkListItemData
// Size : 0x88 (Inherited : 0x28)
struct UPDCustomPerkListItemData : UObject {
	unsigned char UnknownData_28[0x0060]; // 0x28(0x60)
};

// Class ProjectD.PDCustomPerkListItem
// Size : 0x308 (Inherited : 0x288)
struct UPDCustomPerkListItem : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UImage* Img_SignatureBg; // 0x290(0x8)
	struct UImage* Img_Bg; // 0x298(0x8)
	struct UImage* IMG_Item; // 0x2A0(0x8)
	struct UImage* IMG_Lock; // 0x2A8(0x8)
	struct UPDTextBlock* TB_Name; // 0x2B0(0x8)
	struct UPDTextBlock* TB_Activate; // 0x2B8(0x8)
	struct UBorder* BD_ItemOutline; // 0x2C0(0x8)
	struct UBorder* BD_SignatureItemOutline; // 0x2C8(0x8)
	struct UDragDropOperation* DragDropOperation; // 0x2D0(0x8)
	unsigned char UnknownData_2D8[0x0030]; // 0x2D8(0x30)
};

// Class ProjectD.PDCustomRoomUI
// Size : 0x3B0 (Inherited : 0x288)
struct UPDCustomRoomUI : UPDUserWidget {
	struct UPDTextBlock* T_Code; // 0x288(0x8)
	struct UPDButton* Btn_Hide; // 0x290(0x8)
	struct UPDButton* Btn_Copy; // 0x298(0x8)
	struct UCanvasPanel* CP_CharChange; // 0x2A0(0x8)
	struct UPDCustomMatchTooltip* CustomMatchTooltip; // 0x2A8(0x8)
	struct UListView* LV_Characters; // 0x2B0(0x8)
	struct UCanvasPanel* CP_ContextMenu; // 0x2B8(0x8)
	struct UPDButton* Btn_FriendAdd; // 0x2C0(0x8)
	struct UPDButton* Btn_Whisper; // 0x2C8(0x8)
	struct UPDButton* Btn_KickUser; // 0x2D0(0x8)
	struct UPDButton* Btn_TransferMaster; // 0x2D8(0x8)
	struct UListView* LV_ATeam; // 0x2E0(0x8)
	struct UListView* LV_BTeam; // 0x2E8(0x8)
	struct UListView* LV_NTeam; // 0x2F0(0x8)
	struct UPDButton* Btn_Back; // 0x2F8(0x8)
	struct UPDButton* Btn_Option; // 0x300(0x8)
	struct UPDButton* Btn_Comm; // 0x308(0x8)
	struct UPDButton* Btn_Start; // 0x310(0x8)
	struct UPDComboBox* CB_Mode; // 0x318(0x8)
	struct UPDComboBox* CB_Round; // 0x320(0x8)
	struct UImage* IMG_Disabled; // 0x328(0x8)
	struct URichTextBlock* RT_StartDesc; // 0x330(0x8)
	unsigned char UnknownData_338[0x0078]; // 0x338(0x78)

	void OnWhisperUserClicked(); // Function ProjectD.PDCustomRoomUI.OnWhisperUserClicked // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C57320
	void OnTransferMasterClicked(); // Function ProjectD.PDCustomRoomUI.OnTransferMasterClicked // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C57300
	void OnStartClicked(); // Function ProjectD.PDCustomRoomUI.OnStartClicked // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C572E0
	void OnRoundSelectedChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDCustomRoomUI.OnRoundSelectedChanged // (Final|Native|Private) // Param Size : 0x11, 0x7FF653C56FF0
	void OnOptionClicked(); // Function ProjectD.PDCustomRoomUI.OnOptionClicked // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C56F50
	void OnMapSelectedChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDCustomRoomUI.OnMapSelectedChanged // (Final|Native|Private) // Param Size : 0x11, 0x7FF653C56C60
	void OnKickUserClicked(); // Function ProjectD.PDCustomRoomUI.OnKickUserClicked // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C56BE0
	void OnHideClicked(); // Function ProjectD.PDCustomRoomUI.OnHideClicked // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C56BA0
	void OnCopyClicked(); // Function ProjectD.PDCustomRoomUI.OnCopyClicked // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C56AF0
	void OnCommClicked(); // Function ProjectD.PDCustomRoomUI.OnCommClicked // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C56AD0
	void OnBackClicked(); // Function ProjectD.PDCustomRoomUI.OnBackClicked // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C568B0
	void OnAddFriendClicked(); // Function ProjectD.PDCustomRoomUI.OnAddFriendClicked // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C56800
};

// Class ProjectD.PDCustomSlider
// Size : 0x4F8 (Inherited : 0x4F8)
struct UPDCustomSlider : USlider {
};

// Class ProjectD.PDCustomWeaponAttribute
// Size : 0x2B8 (Inherited : 0x288)
struct UPDCustomWeaponAttribute : UPDUserWidget {
	struct UPDTextBlock* T_StatName; // 0x288(0x8)
	struct UPDTextBlock* T_Stat_Value; // 0x290(0x8)
	struct UProgressBar* PB_Stat_Src; // 0x298(0x8)
	struct FText InStatName; // 0x2A0(0x18)
};

// Class ProjectD.PDCustomWeaponListItemData
// Size : 0x78 (Inherited : 0x28)
struct UPDCustomWeaponListItemData : UObject {
	unsigned char UnknownData_28[0x0050]; // 0x28(0x50)
};

// Class ProjectD.PDCustomWeaponListItem
// Size : 0x2D0 (Inherited : 0x288)
struct UPDCustomWeaponListItem : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UImage* Img_Bg; // 0x290(0x8)
	struct UImage* IMG_Item; // 0x298(0x8)
	struct UImage* IMG_Lock; // 0x2A0(0x8)
	struct UImage* IMG_Equip; // 0x2A8(0x8)
	struct UPDTextBlock* TB_Name; // 0x2B0(0x8)
	struct UPDTextBlock* TB_Count; // 0x2B8(0x8)
	struct UBorder* BD_ItemOutline; // 0x2C0(0x8)
	unsigned char UnknownData_2C8[0x0008]; // 0x2C8(0x8)
};

// Class ProjectD.PDCustomWeaponUI
// Size : 0x380 (Inherited : 0x288)
struct UPDCustomWeaponUI : UPDSceneBaseUI {
	struct UTileView* TV_WeaponCategory; // 0x288(0x8)
	struct UTileView* TV_WeaponItemList; // 0x290(0x8)
	struct UTileView* TV_ItemSkinList; // 0x298(0x8)
	struct UCanvasPanel* CP_Inventory; // 0x2A0(0x8)
	struct UPDButton* Btn_Restore; // 0x2A8(0x8)
	struct UPDButton* Btn_Buy; // 0x2B0(0x8)
	struct UPDButton* Btn_LoadOut; // 0x2B8(0x8)
	struct UPDButton* Btn_SaveAndOut; // 0x2C0(0x8)
	struct UPDButton* Btn_ChangeView; // 0x2C8(0x8)
	struct UBorder* BD_Cover; // 0x2D0(0x8)
	struct UPDTextBlock* T_FireModeInfo; // 0x2D8(0x8)
	struct UPDTextBlock* T_BulletInfo; // 0x2E0(0x8)
	struct UImage* IMG_Info_Bullet; // 0x2E8(0x8)
	struct UPDCustomWeaponAttribute* WeaponStat1; // 0x2F0(0x8)
	struct UPDCustomWeaponAttribute* WeaponStat2; // 0x2F8(0x8)
	struct UPDCustomWeaponAttribute* WeaponStat3; // 0x300(0x8)
	struct UPDCustomWeaponAttribute* WeaponStat4; // 0x308(0x8)
	struct UPDCustomWeaponAttribute* WeaponStat5; // 0x310(0x8)
	struct UPDCustomWeaponAttribute* WeaponStat6; // 0x318(0x8)
	struct UPDCheckBox* CB_AllSkin; // 0x320(0x8)
	struct UPDCheckBox* CB_HasSkin; // 0x328(0x8)
	struct UPDButton* Btn_LeftTurn; // 0x330(0x8)
	struct UPDButton* Btn_Zoom; // 0x338(0x8)
	struct UPDButton* Btn_RightTurn; // 0x340(0x8)
	struct UPDKeyButton* Btn_GotoBack; // 0x348(0x8)
	struct UImage* IMG_Zoom; // 0x350(0x8)
	struct TArray<struct UPDCustomWeaponListItemData*> WeaponSkinListItems; // 0x358(0x10)
	struct FVector WeaponPivot; // 0x368(0xC)
	unsigned char UnknownData_374[0x000C]; // 0x374(0xC)

	void OnZoomReleased(); // Function ProjectD.PDCustomWeaponUI.OnZoomReleased // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C5BE20
	void OnZoomPressed(); // Function ProjectD.PDCustomWeaponUI.OnZoomPressed // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C5BE00
	void OnSelectedSkinListItem(struct UPDCustomWeaponListItemData* InListItemData); // Function ProjectD.PDCustomWeaponUI.OnSelectedSkinListItem // (Final|Native|Private) // Param Size : 0x8, 0x7FF653C5B9B0
	void OnSelectedItemListItem(struct UPDCustomWeaponListItemData* InListItemData); // Function ProjectD.PDCustomWeaponUI.OnSelectedItemListItem // (Final|Native|Private) // Param Size : 0x8, 0x7FF653C5B930
	void OnSelectedCategoryItem(struct UPDCustomCategoryListItemData* InListItemData); // Function ProjectD.PDCustomWeaponUI.OnSelectedCategoryItem // (Final|Native|Private) // Param Size : 0x8, 0x7FF653C5B8B0
	void OnSaveAndLeave(); // Function ProjectD.PDCustomWeaponUI.OnSaveAndLeave // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C5B810
	void OnRightTurnReleased(); // Function ProjectD.PDCustomWeaponUI.OnRightTurnReleased // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C5B120
	void OnRightTurnPressed(); // Function ProjectD.PDCustomWeaponUI.OnRightTurnPressed // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C5B7F0
	void OnRestore(); // Function ProjectD.PDCustomWeaponUI.OnRestore // (Final|Native|Private) // Param Size : 0x0, 0x7FF6533F7E70
	void OnMenuCoverMouseDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ProjectD.PDCustomWeaponUI.OnMenuCoverMouseDown // (Final|Native|Private|HasOutParms) // Param Size : 0xA8, 0x7FF653C5B250
	void OnLoadOut(); // Function ProjectD.PDCustomWeaponUI.OnLoadOut // (Final|Native|Private) // Param Size : 0x0, 0x7FF6533F7E70
	void OnLeftTurnReleased(); // Function ProjectD.PDCustomWeaponUI.OnLeftTurnReleased // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C5B120
	void OnLeftTurnPressed(); // Function ProjectD.PDCustomWeaponUI.OnLeftTurnPressed // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C5B100
	void OnHasSkinCheckBoxChanged(bool InIsChecked); // Function ProjectD.PDCustomWeaponUI.OnHasSkinCheckBoxChanged // (Final|Native|Private) // Param Size : 0x1, 0x7FF653C5AEC0
	void OnChangeView(); // Function ProjectD.PDCustomWeaponUI.OnChangeView // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C5A640
	void OnBuyItem(); // Function ProjectD.PDCustomWeaponUI.OnBuyItem // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C5A620
	void OnAllSkinCheckBoxChanged(bool InIsChecked); // Function ProjectD.PDCustomWeaponUI.OnAllSkinCheckBoxChanged // (Final|Native|Private) // Param Size : 0x1, 0x7FF653C5A320
	void GotoBack(); // Function ProjectD.PDCustomWeaponUI.GotoBack // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C56730
};

// Class ProjectD.PDDamageIndicatorUI
// Size : 0x2A8 (Inherited : 0x288)
struct UPDDamageIndicatorUI : UPDUserWidget {
	struct UBorder* BD_Rotator; // 0x288(0x8)
	struct UImage* IMG_DamageIndicator; // 0x290(0x8)
	unsigned char UnknownData_298[0x0010]; // 0x298(0x10)
};

// Class ProjectD.PDDamageScreenIndicatorUI
// Size : 0x328 (Inherited : 0x290)
struct UPDDamageScreenIndicatorUI : UPDIngameModeWidget {
	struct UImage* IMG_LeftUp; // 0x290(0x8)
	struct UImage* IMG_Up; // 0x298(0x8)
	struct UImage* IMG_RightUp; // 0x2A0(0x8)
	struct UImage* IMG_Right; // 0x2A8(0x8)
	struct UImage* IMG_RightDown; // 0x2B0(0x8)
	struct UImage* IMG_Down; // 0x2B8(0x8)
	struct UImage* IMG_LeftDown; // 0x2C0(0x8)
	struct UImage* IMG_Left; // 0x2C8(0x8)
	struct UCanvasPanel* CP_Impact; // 0x2D0(0x8)
	unsigned char UnknownData_2D8[0x0050]; // 0x2D8(0x50)
};

// Class ProjectD.PDDeathMatchModeUI
// Size : 0x4A0 (Inherited : 0x4A0)
struct UPDDeathMatchModeUI : UPDBaseModeUI {
};

// Class ProjectD.PDDebugLogUI
// Size : 0x388 (Inherited : 0x288)
struct UPDDebugLogUI : UPDSceneBaseUI {
	unsigned char UnknownData_288[0x0030]; // 0x288(0x30)
	struct UPDButton* Btn_GotoLobby; // 0x2B8(0x8)
	struct UButton* BTN_FP_Left; // 0x2C0(0x8)
	struct UButton* BTN_FP_Right; // 0x2C8(0x8)
	struct UMultiLineEditableTextBox* MTXT_Content; // 0x2D0(0x8)
	struct UTextBlock* TXT_FP_Page; // 0x2D8(0x8)
	struct TArray<struct UPDButton*> FileNameButtonList; // 0x2E0(0x10)
	struct UPDButton* Filename_1; // 0x2F0(0x8)
	struct UPDButton* Filename_2; // 0x2F8(0x8)
	struct UPDButton* Filename_3; // 0x300(0x8)
	struct UPDButton* Filename_4; // 0x308(0x8)
	struct UPDButton* Filename_5; // 0x310(0x8)
	struct UPDButton* Filename_6; // 0x318(0x8)
	struct UPDButton* Filename_7; // 0x320(0x8)
	struct UPDButton* Filename_8; // 0x328(0x8)
	struct UPDButton* Filename_9; // 0x330(0x8)
	struct UPDButton* Filename_10; // 0x338(0x8)
	struct UPDButton* Filename_11; // 0x340(0x8)
	struct UPDButton* Filename_12; // 0x348(0x8)
	struct UPDButton* Filename_13; // 0x350(0x8)
	struct UPDButton* Filename_14; // 0x358(0x8)
	struct UPDButton* Filename_15; // 0x360(0x8)
	struct UPDButton* Filename_16; // 0x368(0x8)
	struct UPDButton* Filename_17; // 0x370(0x8)
	struct UPDButton* Filename_18; // 0x378(0x8)
	struct UPDButton* Filename_19; // 0x380(0x8)

	void OnClickBtnGotoLobby(); // Function ProjectD.PDDebugLogUI.OnClickBtnGotoLobby // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C532C0
	void OnClickBtnFPRight(); // Function ProjectD.PDDebugLogUI.OnClickBtnFPRight // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5A680
	void OnClickBtnFPLeft(); // Function ProjectD.PDDebugLogUI.OnClickBtnFPLeft // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5A660
	void OnClickBtnFileName_10(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_10 // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5A8E0
	void OnClickBtnFileName_9(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_9 // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5A8C0
	void OnClickBtnFileName_8(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_8 // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5A8A0
	void OnClickBtnFileName_7(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_7 // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5A880
	void OnClickBtnFileName_6(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_6 // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5A860
	void OnClickBtnFileName_5(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_5 // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5A840
	void OnClickBtnFileName_4(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_4 // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5A820
	void OnClickBtnFileName_3(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_3 // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5A800
	void OnClickBtnFileName_19(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_19 // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5A7C0
	void OnClickBtnFileName_18(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_18 // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5A7A0
	void OnClickBtnFileName_17(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_17 // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5A780
	void OnClickBtnFileName_16(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_16 // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5A760
	void OnClickBtnFileName_15(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_15 // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5A740
	void OnClickBtnFileName_14(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_14 // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5A720
	void OnClickBtnFileName_13(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_13 // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5A700
	void OnClickBtnFileName_12(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_12 // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5A6E0
	void OnClickBtnFileName_11(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_11 // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5A6C0
	void OnClickBtnFileName_2(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_2 // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5A7E0
	void OnClickBtnFileName_1(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_1 // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5A6A0
};

// Class ProjectD.PDDefuseBombModeUI
// Size : 0x508 (Inherited : 0x4A0)
struct UPDDefuseBombModeUI : UPDBaseModeUI {
	unsigned char UnknownData_4A0[0x0028]; // 0x4A0(0x28)
	struct UPDCCTVUI* CCTV; // 0x4C8(0x8)
	struct UPDSkyViewUI* SkyView; // 0x4D0(0x8)
	struct UPDIngameStatusBoardUI* IngameStatusBoard; // 0x4D8(0x8)
	struct UPDRoundInfoUI* RoundInfo; // 0x4E0(0x8)
	struct UPDRoundResult* RoundResult; // 0x4E8(0x8)
	struct UPDKillMessage* KillMessage; // 0x4F0(0x8)
	struct UPDRoundReplayer* RoundReplayer; // 0x4F8(0x8)
	struct UPDReportPopupUI* ReportPopup; // 0x500(0x8)
};

// Class ProjectD.PDDisplayOptionUI
// Size : 0x430 (Inherited : 0x338)
struct UPDDisplayOptionUI : UPDOptionUIBase {
	struct UPDTabButton* VideoSettingBtn; // 0x338(0x8)
	struct UPDTabButton* SystemSettingBtn; // 0x340(0x8)
	struct UScrollBox* SB_Display; // 0x348(0x8)
	unsigned char UnknownData_350[0x0058]; // 0x350(0x58)
	struct UEnum* EDisplayModePtr; // 0x3A8(0x8)
	struct UEnum* EFrameRateModePtr; // 0x3B0(0x8)
	struct UEnum* EGraphicsQualityPtr; // 0x3B8(0x8)
	struct UEnum* EBlockTypePtr; // 0x3C0(0x8)
	unsigned char UnknownData_3C8[0x0068]; // 0x3C8(0x68)

	void OnWhisperBlockChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDDisplayOptionUI.OnWhisperBlockChanged // (Final|Native|Private) // Param Size : 0x11, 0x7FF653C5BCD0
	void OnViewDistanceQualityChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnViewDistanceQualityChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C5BC50
	void OnUseVSyncChanged(bool bIsChecked); // Function ProjectD.PDDisplayOptionUI.OnUseVSyncChanged // (Final|Native|Private) // Param Size : 0x1, 0x7FF653C5BBC0
	void OnUseAdditionalPostProcessesChanged(bool Value); // Function ProjectD.PDDisplayOptionUI.OnUseAdditionalPostProcessesChanged // (Final|Native|Private) // Param Size : 0x1, 0x7FF653C5BB30
	void OnTextureQualityChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnTextureQualityChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C5BAB0
	void OnShadowQualityChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnShadowQualityChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C5BA30
	void OnScreenPercentageChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnScreenPercentageChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C5B830
	void OnResolutionChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDDisplayOptionUI.OnResolutionChanged // (Final|Native|Private) // Param Size : 0x11, 0x7FF653C5B6C0
	void OnPostProcessQualityChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnPostProcessQualityChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C5B640
	void OnPostProcessAAQualityChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnPostProcessAAQualityChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C5B5C0
	void OnPartyInviteBlockChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDDisplayOptionUI.OnPartyInviteBlockChanged // (Final|Native|Private) // Param Size : 0x11, 0x7FF653C5B490
	void OnOutGameBrightnessVolumeChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnOutGameBrightnessVolumeChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C5B410
	void OnMaxAnisotropyChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnMaxAnisotropyChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C5B1D0
	void OnLightShaftChanged(bool Value); // Function ProjectD.PDDisplayOptionUI.OnLightShaftChanged // (Final|Native|Private) // Param Size : 0x1, 0x7FF653C5B140
	void OnLanguageChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDDisplayOptionUI.OnLanguageChanged // (Final|Native|Private) // Param Size : 0x11, 0x7FF653C5AFD0
	void OnInGameBrightnessVolumeChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnInGameBrightnessVolumeChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C5AF50
	void OnFullScreenModeChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDDisplayOptionUI.OnFullScreenModeChanged // (Final|Native|Private) // Param Size : 0x11, 0x7FF653C5AD90
	void OnFrameRateModeChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDDisplayOptionUI.OnFrameRateModeChanged // (Final|Native|Private) // Param Size : 0x11, 0x7FF653C5AC60
	void OnFrameRateLimitChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnFrameRateLimitChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C5ABE0
	void OnFoliageQualityChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnFoliageQualityChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C5AB60
	void OnEffectsQualityChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnEffectsQualityChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C5A9A0
	void OnClickVideoSettingButton(); // Function ProjectD.PDDisplayOptionUI.OnClickVideoSettingButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C535A0
	void OnClickSystemSettingButton(); // Function ProjectD.PDDisplayOptionUI.OnClickSystemSettingButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C53420
	void OnClickMidiumGraphicButton(); // Function ProjectD.PDDisplayOptionUI.OnClickMidiumGraphicButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C5A980
	void OnClickLowGraphicButton(); // Function ProjectD.PDDisplayOptionUI.OnClickLowGraphicButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C5A960
	void OnClickHighGraphicButton(); // Function ProjectD.PDDisplayOptionUI.OnClickHighGraphicButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C5A940
	void OnClickEpicGraphicButton(); // Function ProjectD.PDDisplayOptionUI.OnClickEpicGraphicButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C5A920
	void OnClickCustomGraphicButton(); // Function ProjectD.PDDisplayOptionUI.OnClickCustomGraphicButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C5A900
	void OnBackGroundQualityChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnBackGroundQualityChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C5A3B0
	void OnAddFriendBlockChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDDisplayOptionUI.OnAddFriendBlockChanged // (Final|Native|Private) // Param Size : 0x11, 0x7FF653C5A1F0
};

// Class ProjectD.PDDPICustomScalingRule
// Size : 0x28 (Inherited : 0x28)
struct UPDDPICustomScalingRule : UDPICustomScalingRule {
};

// Class ProjectD.PDDroneSpringArmComponent
// Size : 0x2A0 (Inherited : 0x280)
struct UPDDroneSpringArmComponent : USpringArmComponent {
	float CrouchTargetOffsetLagSpeed; // 0x280(0x4)
	unsigned char UnknownData_284[0x001C]; // 0x284(0x1C)
};

// Class ProjectD.PDDynamicActorEntity
// Size : 0x230 (Inherited : 0x220)
struct APDDynamicActorEntity : AActor {
	unsigned char UnknownData_220[0x0010]; // 0x220(0x10)
};

// Class ProjectD.PDDynamicObjectEvent
// Size : 0x420 (Inherited : 0x220)
struct APDDynamicObjectEvent : AActor {
	unsigned char UnknownData_220[0x0020]; // 0x220(0x20)
	int32_t DBID; // 0x240(0x4)
	bool UseCollisionBox; // 0x244(0x1)
	unsigned char UnknownData_245[0x01DB]; // 0x245(0x1DB)

	void OnActorEndOverlapEvent(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function ProjectD.PDDynamicObjectEvent.OnActorEndOverlapEvent // (Final|Native|Protected) // Param Size : 0x10, 0x7FF653C5A130
	void OnActorBeginOverlapEvent(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function ProjectD.PDDynamicObjectEvent.OnActorBeginOverlapEvent // (Final|Native|Protected) // Param Size : 0x10, 0x7FF653C5A070
};

// Class ProjectD.PDDynamicObject
// Size : 0x678 (Inherited : 0x420)
struct APDDynamicObject : APDDynamicObjectEvent {
	enum class EDYNAMICOBJECTSTATE DefaultState; // 0x420(0x1)
	bool ReverseDirection; // 0x421(0x1)
	unsigned char UnknownData_422[0x0256]; // 0x422(0x256)
};

// Class ProjectD.PDDynamicObjectPoint
// Size : 0x430 (Inherited : 0x430)
struct UPDDynamicObjectPoint : USphereComponent {
};

// Class ProjectD.PDDynamicObjectSwitchComponent
// Size : 0x570 (Inherited : 0x4A0)
struct UPDDynamicObjectSwitchComponent : UStaticMeshComponent {
	struct UArrowComponent* InteractionArrow; // 0x498(0x8)
	struct UBoxComponent* SwitchExtentBox; // 0x4A0(0x8)
	struct TSet<struct FString> ReactNames; // 0x4A8(0x50)
	struct TMap<int32_t, struct UMaterialInstance*> ActiveMaterial; // 0x4F8(0x50)
	unsigned char UnknownData_550[0x0020]; // 0x550(0x20)

	void OnEndTriggerOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function ProjectD.PDDynamicObjectSwitchComponent.OnEndTriggerOverlap // (Final|Native|Public) // Param Size : 0x1C, 0x7FF653C5AA20
	void OnBeginTriggerOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function ProjectD.PDDynamicObjectSwitchComponent.OnBeginTriggerOverlap // (Final|Native|Public|HasOutParms) // Param Size : 0xA8, 0x7FF653C5A430
};

// Class ProjectD.PDEndAnimNotifyState
// Size : 0x38 (Inherited : 0x30)
struct UPDEndAnimNotifyState : UAnimNotifyState {
	enum class EPDEndAnimationType EndAnimationType; // 0x30(0x1)
	unsigned char UnknownData_31[0x0007]; // 0x31(0x7)
};

// Class ProjectD.PDSolidInfoBase
// Size : 0x28 (Inherited : 0x28)
struct UPDSolidInfoBase : UInterface {
};

// Class ProjectD.PDEnvEffect
// Size : 0x528 (Inherited : 0x220)
struct APDEnvEffect : AActor {
	enum class EPDEnvEffectClientType EffectType; // 0x220(0x1)
	unsigned char UnknownData_221[0x0007]; // 0x221(0x7)
	struct UArrowComponent* MovingObjectSoundHelper; // 0x228(0x8)
	struct UArrowComponent* CameraMountedHelper; // 0x230(0x8)
	struct UArrowComponent* FrontOutdoor; // 0x238(0x8)
	struct UMaterialParameterCollection* MPC; // 0x240(0x8)
	struct UCurveLinearColor* SandStormCurve; // 0x248(0x8)
	struct UCurveLinearColor* SandStormCurve2; // 0x250(0x8)
	struct FEnvSetting OrgSetting; // 0x258(0x64)
	struct FEnvSetting TargetSetting; // 0x2BC(0x64)
	float TransitionDistance; // 0x320(0x4)
	float EnteringDistance; // 0x324(0x4)
	float CameraImpactDistance; // 0x328(0x4)
	float IntensityFactor; // 0x32C(0x4)
	float OutdoornessTransitionTime; // 0x330(0x4)
	float VisibilityToggleDistance; // 0x334(0x4)
	unsigned char UnknownData_338[0x0004]; // 0x338(0x4)
	struct FWeakObjectPtr<struct UExponentialHeightFogComponent> GlobalFog; // 0x33C(0x8)
	struct FWeakObjectPtr<struct UDirectionalLightComponent> GlobalDirectionalLightComponent; // 0x344(0x8)
	struct FWeakObjectPtr<struct USkyLightComponent> GlobalSkyLightComponent; // 0x34C(0x8)
	unsigned char UnknownData_354[0x014C]; // 0x354(0x14C)
	struct FVector MovingObjectInitPosition; // 0x4A0(0xC)
	struct FVector MovingObjectTargetPosition; // 0x4AC(0xC)
	struct FWeakObjectPtr<struct UMaterialParameterCollectionInstance> MPCI; // 0x4B8(0x8)
	struct FWeakObjectPtr<struct UParticleSystemComponent> MovingEffect; // 0x4C0(0x8)
	struct TArray<struct FWeakObjectPtr<struct UParticleSystemComponent>> Particles; // 0x4C8(0x10)
	struct TArray<struct FWeakObjectPtr<struct UParticleSystemComponent>> SolidParticles; // 0x4D8(0x10)
	struct TArray<struct FWeakObjectPtr<struct UParticleSystemComponent>> SwitchableParticles; // 0x4E8(0x10)
	struct FWeakObjectPtr<struct UPostProcessComponent> PostProcessRef; // 0x4F8(0x8)
	struct FWeakObjectPtr<struct APDIndoorVolume> IndoorVolume; // 0x500(0x8)
	struct TArray<struct FWeakObjectPtr<struct AActor>> ActorsForVisibilityToggleByDistance; // 0x508(0x10)
	unsigned char UnknownData_518[0x0010]; // 0x518(0x10)
};

// Class ProjectD.PEquipLeptonListItemData
// Size : 0x78 (Inherited : 0x28)
struct UPEquipLeptonListItemData : UObject {
	unsigned char UnknownData_28[0x0050]; // 0x28(0x50)
};

// Class ProjectD.PDEquipLeptonListItem
// Size : 0x318 (Inherited : 0x288)
struct UPDEquipLeptonListItem : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UWidgetSwitcher* WS_EquipLepton; // 0x290(0x8)
	struct UImage* IMG_Item; // 0x298(0x8)
	struct UPDTextBlock* TB_Name; // 0x2A0(0x8)
	struct UImage* IMG_Cost1; // 0x2A8(0x8)
	struct UImage* IMG_Cost2; // 0x2B0(0x8)
	struct UImage* IMG_Cost3; // 0x2B8(0x8)
	struct UImage* IMG_Cost4; // 0x2C0(0x8)
	struct UImage* IMG_Cost5; // 0x2C8(0x8)
	struct UBorder* BD_Outline; // 0x2D0(0x8)
	struct UDragDropOperation* DragDropOperation; // 0x2D8(0x8)
	unsigned char UnknownData_2E0[0x0028]; // 0x2E0(0x28)
	struct TArray<struct UImage*> CostImgArr; // 0x308(0x10)
};

// Class ProjectD.PDEquipPerkList
// Size : 0x328 (Inherited : 0x288)
struct UPDEquipPerkList : UPDUserWidget {
	unsigned char UnknownData_288[0x0018]; // 0x288(0x18)
	struct UTileView* TV_PerkSignatureList; // 0x2A0(0x8)
	struct UTileView* TV_PerkSocketList; // 0x2A8(0x8)
	struct UTileView* TV_PerkPassiveList; // 0x2B0(0x8)
	struct UCanvasPanel* CP_SkillToolTip; // 0x2B8(0x8)
	struct UBorder* B_SkillToolTip; // 0x2C0(0x8)
	struct UImage* IMG_DescIcon; // 0x2C8(0x8)
	struct UPDTextBlock* TB_PerkName; // 0x2D0(0x8)
	struct UPDTextBlock* TB_PerkDesc; // 0x2D8(0x8)
	struct UPDTextBlock* TB_PerkStory; // 0x2E0(0x8)
	struct UCanvasPanel* CP_AlertEquipPerk; // 0x2E8(0x8)
	struct UPDButton* Btn_GoEquipPerk; // 0x2F0(0x8)
	struct UCanvasPanel* CP_Perk_Alert; // 0x2F8(0x8)
	struct UHorizontalBox* HP_PerkList; // 0x300(0x8)
	unsigned char UnknownData_308[0x0020]; // 0x308(0x20)

	void SetSkillToolTipVisible(bool bShow); // Function ProjectD.PDEquipPerkList.SetSkillToolTipVisible // (Final|Native|Private) // Param Size : 0x1, 0x7FF653C5F600
	void SetSkillInfo(int32_t SkillIndex, struct FVector2D InfoAbsolutePos, int32_t IconWidth); // Function ProjectD.PDEquipPerkList.SetSkillInfo // (Final|Native|Private|HasDefaults) // Param Size : 0x10, 0x7FF653C5F500
	void SetSignatureInfo(int32_t SignatureIndex, struct FVector2D InfoAbsolutePos, int32_t IconWidth); // Function ProjectD.PDEquipPerkList.SetSignatureInfo // (Final|Native|Private|HasDefaults) // Param Size : 0x10, 0x7FF653C5F400
	void OnListClickItem(struct UPDCustomPerkListItemData* InListItemData); // Function ProjectD.PDEquipPerkList.OnListClickItem // (Final|Native|Private) // Param Size : 0x8, 0x7FF653C5F240
};

// Class ProjectD.PDEscMenuUI
// Size : 0x2A8 (Inherited : 0x288)
struct UPDEscMenuUI : UPDUserWidget {
	struct UPDButton* ResumeBtn; // 0x288(0x8)
	struct UPDButton* LeaveGameBtn; // 0x290(0x8)
	struct UPDButton* QuitBtn; // 0x298(0x8)
	struct UPDButton* OptionBtn; // 0x2A0(0x8)

	void OnClickResumeBtn(); // Function ProjectD.PDEscMenuUI.OnClickResumeBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C5EC70
	void OnClickQuitBtn(); // Function ProjectD.PDEscMenuUI.OnClickQuitBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C5EC10
	void OnClickOptionBtn(); // Function ProjectD.PDEscMenuUI.OnClickOptionBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C5EBF0
	void OnClickLeaveGameBtn(); // Function ProjectD.PDEscMenuUI.OnClickLeaveGameBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C5EBD0
};

// Class ProjectD.PDExportSafeZoneInitialVertices
// Size : 0x288 (Inherited : 0x220)
struct APDExportSafeZoneInitialVertices : AActor {
	enum class None GroupID; // 0x220(0x1)
	enum class None UsageVertexNum; // 0x221(0x1)
	unsigned char UnknownData_222[0x0006]; // 0x222(0x6)
	struct UStaticMeshComponent* Origin; // 0x228(0x8)
	struct UPDExportSafeZoneVertexComponent* Vertex_00; // 0x230(0x8)
	struct UPDExportSafeZoneVertexComponent* Vertex_01; // 0x238(0x8)
	struct UPDExportSafeZoneVertexComponent* Vertex_02; // 0x240(0x8)
	struct UPDExportSafeZoneVertexComponent* Vertex_03; // 0x248(0x8)
	struct UPDExportSafeZoneVertexComponent* Vertex_04; // 0x250(0x8)
	struct UPDExportSafeZoneVertexComponent* Vertex_05; // 0x258(0x8)
	struct UPDExportSafeZoneVertexComponent* Vertex_06; // 0x260(0x8)
	struct UPDExportSafeZoneVertexComponent* Vertex_07; // 0x268(0x8)
	struct UPDExportSafeZoneVertexComponent* Vertex_08; // 0x270(0x8)
	struct UPDExportSafeZoneVertexComponent* Vertex_09; // 0x278(0x8)
	struct UPDExportSafeZoneVertexComponent* Vertex_11; // 0x280(0x8)
};

// Class ProjectD.PDExportSafeZoneSelectPoint
// Size : 0x278 (Inherited : 0x220)
struct APDExportSafeZoneSelectPoint : AActor {
	struct UStaticMeshComponent* Mesh; // 0x220(0x8)
	struct TSet<enum class None> UsagePhaseGroupIDs; // 0x228(0x50)
};

// Class ProjectD.PDExportSafeZoneVertexComponent
// Size : 0x4A0 (Inherited : 0x4A0)
struct UPDExportSafeZoneVertexComponent : UStaticMeshComponent {
	enum class None Index; // 0x498(0x1)
};

// Class ProjectD.PDExportSeedArea
// Size : 0x260 (Inherited : 0x220)
struct APDExportSeedArea : AActor {
	int32_t SeedAreaID; // 0x220(0x4)
	unsigned char UnknownData_224[0x0004]; // 0x224(0x4)
	struct UStaticMeshComponent* SeedAComp; // 0x228(0x8)
	struct UStaticMeshComponent* SeedBComp; // 0x230(0x8)
	unsigned char UnknownData_238[0x0028]; // 0x238(0x28)

	void OnEndSeedBBoxOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function ProjectD.PDExportSeedArea.OnEndSeedBBoxOverlap // (Final|Native|Protected) // Param Size : 0x1C, 0x7FF653C5F100
	void OnEndSeedABoxOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function ProjectD.PDExportSeedArea.OnEndSeedABoxOverlap // (Final|Native|Protected) // Param Size : 0x1C, 0x7FF653C5EFC0
	void OnBeginSeedBBoxOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function ProjectD.PDExportSeedArea.OnBeginSeedBBoxOverlap // (Final|Native|Protected|HasOutParms) // Param Size : 0xA8, 0x7FF653C5E8C0
	void OnBeginSeedABoxOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function ProjectD.PDExportSeedArea.OnBeginSeedABoxOverlap // (Final|Native|Protected|HasOutParms) // Param Size : 0xA8, 0x7FF653C5E6D0
};

// Class ProjectD.PDFindPartyListItemData
// Size : 0x88 (Inherited : 0x28)
struct UPDFindPartyListItemData : UObject {
	unsigned char UnknownData_28[0x0060]; // 0x28(0x60)
};

// Class ProjectD.PDFindPartyListItem
// Size : 0x3C8 (Inherited : 0x288)
struct UPDFindPartyListItem : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UBorder* BD_Background; // 0x290(0x8)
	struct UWidgetSwitcher* WS_State; // 0x298(0x8)
	struct UImage* IMG_Face; // 0x2A0(0x8)
	struct UCanvasPanel* CP_ClanMarkInfo; // 0x2A8(0x8)
	struct UImage* IMG_ClanMarkBG; // 0x2B0(0x8)
	struct UImage* IMG_ClanMarkFG; // 0x2B8(0x8)
	struct UPDTextBlock* TB_ClanName; // 0x2C0(0x8)
	struct UPDTextBlock* TB_Nickname; // 0x2C8(0x8)
	struct UWidgetSwitcher* WS_UserInfo; // 0x2D0(0x8)
	struct UPDTextBlock* TB_KD; // 0x2D8(0x8)
	struct UPDTextBlock* TB_ADR; // 0x2E0(0x8)
	struct UWidgetSwitcher* WS_BtnState; // 0x2E8(0x8)
	struct UPDButton* Btn_Recruit; // 0x2F0(0x8)
	struct UHorizontalBox* HB_UserData; // 0x2F8(0x8)
	struct UImage* IMG_Manner; // 0x300(0x8)
	struct UImage* IMG_Medal1; // 0x308(0x8)
	struct UImage* IMG_Medal2; // 0x310(0x8)
	struct UImage* IMG_Medal3; // 0x318(0x8)
	struct UPDTextBlock* TB_Medal1; // 0x320(0x8)
	struct UPDTextBlock* TB_Medal2; // 0x328(0x8)
	struct UPDTextBlock* TB_Medal3; // 0x330(0x8)
	struct UImage* IMG_Ping_01; // 0x338(0x8)
	struct UImage* IMG_Ping_02; // 0x340(0x8)
	struct UImage* IMG_Ping_03; // 0x348(0x8)
	struct UImage* IMG_Ping_04; // 0x350(0x8)
	struct UImage* IMG_Ping_05; // 0x358(0x8)
	struct TArray<struct UImage*> PingImgList; // 0x360(0x10)
	unsigned char UnknownData_370[0x0058]; // 0x370(0x58)

	struct FEventReply OnDoubleClickItem(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ProjectD.PDFindPartyListItem.OnDoubleClickItem // (Final|Native|Private|HasOutParms) // Param Size : 0x160, 0x7FF653C5EDE0
	void OnClickRecruitButton(); // Function ProjectD.PDFindPartyListItem.OnClickRecruitButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C5EC30
};

// Class ProjectD.PDFindPartyPageUI
// Size : 0x2F8 (Inherited : 0x288)
struct UPDFindPartyPageUI : UPDUserWidget {
	struct UPDButton* Btn_FindParty; // 0x288(0x8)
	struct UPDButton* BTN_RegisterMercenary; // 0x290(0x8)
	struct UPDButton* Btn_ResetBrick; // 0x298(0x8)
	struct UWidgetSwitcher* WS_FindParty; // 0x2A0(0x8)
	struct UWidgetSwitcher* WS_RegisterMercenary; // 0x2A8(0x8)
	struct UWidgetSwitcher* WS_Content; // 0x2B0(0x8)
	struct UPDTextBlock* TB_Title; // 0x2B8(0x8)
	struct UTileView* TV_Team; // 0x2C0(0x8)
	struct UTileView* TV_Person; // 0x2C8(0x8)
	struct UHorizontalBox* HB_Alert; // 0x2D0(0x8)
	struct UPDButton* BTN_FindPartyHome; // 0x2D8(0x8)
	struct UCanvasPanel* CP_BackFindParty; // 0x2E0(0x8)
	struct UListView* LV_PartyList; // 0x2E8(0x8)
	struct UListView* LV_RecruitList; // 0x2F0(0x8)

	void OnSelectedTeamBrick(struct UPDBrickListItemData* InListItemData); // Function ProjectD.PDFindPartyPageUI.OnSelectedTeamBrick // (Final|Native|Protected) // Param Size : 0x8, 0x7FF653C5F380
	void OnSelectedPersonBrick(struct UPDBrickListItemData* InListItemData); // Function ProjectD.PDFindPartyPageUI.OnSelectedPersonBrick // (Final|Native|Protected) // Param Size : 0x8, 0x7FF653C5F300
	void OnResetBrickClicked(); // Function ProjectD.PDFindPartyPageUI.OnResetBrickClicked // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5F2C0
	void OnClickRegisterMercenaryButton(); // Function ProjectD.PDFindPartyPageUI.OnClickRegisterMercenaryButton // (Final|Native|Public) // Param Size : 0x0, 0x7FF653C5EC50
	void OnClickFindPartyHomeButton(); // Function ProjectD.PDFindPartyPageUI.OnClickFindPartyHomeButton // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5EBB0
	void OnClickFindPartyButton(); // Function ProjectD.PDFindPartyPageUI.OnClickFindPartyButton // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5EB90
};

// Class ProjectD.PDFireAnimNotify
// Size : 0x48 (Inherited : 0x48)
struct UPDFireAnimNotify : UPDBaseAnimNotify {
};

// Class ProjectD.PDFireRecoilAnimInstance
// Size : 0x600 (Inherited : 0x5F0)
struct UPDFireRecoilAnimInstance : UPDPlayerAnimInstance {
	struct UBlendSpace* CurrentAnim; // 0x5E8(0x8)
	struct UPDFireRecoilLevel* FireRecoilLevel; // 0x5F0(0x8)
};

// Class ProjectD.PDFireRecoilLevelData
// Size : 0x70 (Inherited : 0x30)
struct UPDFireRecoilLevelData : UDataAsset {
	struct UCurveFloat* RecoilCurve; // 0x30(0x8)
	struct UCurveFloat* FractalCurve; // 0x38(0x8)
	float PushingForce; // 0x40(0x4)
	float PushingTime; // 0x44(0x4)
	float RecoveryForce; // 0x48(0x4)
	float RecoveryDelay; // 0x4C(0x4)
	float ZoomRateOnFire; // 0x50(0x4)
	float ZoomDelayOnFire; // 0x54(0x4)
	float ZoomDelayOnReleaseFire; // 0x58(0x4)
	float ZoomInterpTimeOnFire; // 0x5C(0x4)
	float ZoomInterpTimeOnReleaseFire; // 0x60(0x4)
	float MinX; // 0x64(0x4)
	float MaxX; // 0x68(0x4)
	unsigned char UnknownData_6C[0x0004]; // 0x6C(0x4)
};

// Class ProjectD.PDFireRecoilLevel
// Size : 0x60 (Inherited : 0x28)
struct UPDFireRecoilLevel : UObject {
	struct UPDFireRecoilLevelData* RecoilData; // 0x28(0x8)
	struct UPDFireRecoilLevelData* OldRecoilData; // 0x30(0x8)
	struct FVector2D Level; // 0x38(0x8)
	unsigned char UnknownData_40[0x0020]; // 0x40(0x20)
};

// Class ProjectD.PDFPPCamera
// Size : 0x238 (Inherited : 0x220)
struct APDFPPCamera : AActor {
	struct UCameraComponent* Cam; // 0x220(0x8)
	struct USkeletalMeshComponent* CameraMesh; // 0x228(0x8)
	unsigned char UnknownData_230[0x0008]; // 0x230(0x8)
};

// Class ProjectD.PDFPWeapon
// Size : 0x228 (Inherited : 0x220)
struct APDFPWeapon : AActor {
	struct USceneComponent* MoveControlComp; // 0x220(0x8)
};

// Class ProjectD.PDFriendAddItemData
// Size : 0x88 (Inherited : 0x28)
struct UPDFriendAddItemData : UObject {
	unsigned char UnknownData_28[0x0050]; // 0x28(0x50)
	struct TArray<struct UPDFriendAddItemData*> TreeChildren; // 0x78(0x10)
};

// Class ProjectD.PDFriendAddItem
// Size : 0x340 (Inherited : 0x288)
struct UPDFriendAddItem : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UCanvasPanel* CP_User; // 0x290(0x8)
	struct UCanvasPanel* CP_Category; // 0x298(0x8)
	struct UBorder* Background; // 0x2A0(0x8)
	struct UImage* IMG_Face; // 0x2A8(0x8)
	struct UPDTextBlock* TB_Nickname; // 0x2B0(0x8)
	struct UImage* IMG_ClanMarkBG; // 0x2B8(0x8)
	struct UImage* IMG_ClanMarkFG; // 0x2C0(0x8)
	struct UPDTextBlock* TB_ClanName; // 0x2C8(0x8)
	struct UCanvasPanel* CP_ClanMark; // 0x2D0(0x8)
	struct UPDTextBlock* TB_Category; // 0x2D8(0x8)
	struct UPDButton* BTN_Accept; // 0x2E0(0x8)
	struct UPDButton* BTN_Decline; // 0x2E8(0x8)
	unsigned char UnknownData_2F0[0x0050]; // 0x2F0(0x50)

	void OnDeclineClicked(); // Function ProjectD.PDFriendAddItem.OnDeclineClicked // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5EDC0
	void OnAcceptClicked(); // Function ProjectD.PDFriendAddItem.OnAcceptClicked // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5E6B0
};

// Class ProjectD.PDFriendAddPage
// Size : 0x2A0 (Inherited : 0x290)
struct UPDFriendAddPage : UPDCommPage {
	struct UEditableTextBox* ET_NickName; // 0x290(0x8)
	struct UPDButton* BTN_Search; // 0x298(0x8)

	void OnSearchNickClicked(); // Function ProjectD.PDFriendAddPage.OnSearchNickClicked // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C5F2E0
	void OnCommitSearchNick(struct FText Text, enum class ETextCommit CommitMethod); // Function ProjectD.PDFriendAddPage.OnCommitSearchNick // (Final|Native|Protected|HasOutParms) // Param Size : 0x19, 0x7FF653C5EC90
	void OnChangeText(struct FText InText); // Function ProjectD.PDFriendAddPage.OnChangeText // (Final|Native|Protected|HasOutParms) // Param Size : 0x18, 0x7FF653C5EAB0
};

// Class ProjectD.PDFriendClanItemData
// Size : 0x78 (Inherited : 0x28)
struct UPDFriendClanItemData : UObject {
	unsigned char UnknownData_28[0x0040]; // 0x28(0x40)
	struct TArray<struct UPDFriendClanItemData*> TreeChildren; // 0x68(0x10)
};

// Class ProjectD.PDFriendClanItem
// Size : 0x380 (Inherited : 0x288)
struct UPDFriendClanItem : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UCanvasPanel* CP_User; // 0x290(0x8)
	struct UCanvasPanel* CP_Category; // 0x298(0x8)
	struct UBorder* Background; // 0x2A0(0x8)
	struct UImage* IMG_Face; // 0x2A8(0x8)
	struct UImage* IMG_ClanMarkBG; // 0x2B0(0x8)
	struct UImage* IMG_ClanMarkFG; // 0x2B8(0x8)
	struct UPDTextBlock* TB_ClanName; // 0x2C0(0x8)
	struct UPDTextBlock* TB_Nickname; // 0x2C8(0x8)
	struct UPDTextBlock* TB_State; // 0x2D0(0x8)
	struct UPDTextBlock* TB_Category; // 0x2D8(0x8)
	struct UHorizontalBox* HB_UserData; // 0x2E0(0x8)
	struct UImage* IMG_Manner; // 0x2E8(0x8)
	struct UImage* IMG_Medal1; // 0x2F0(0x8)
	struct UImage* IMG_Medal2; // 0x2F8(0x8)
	struct UImage* IMG_Medal3; // 0x300(0x8)
	struct UCanvasPanel* CP_GradeNone; // 0x308(0x8)
	struct UPDButton* BTN_GradeNone; // 0x310(0x8)
	struct UImage* IMG_GradeNone; // 0x318(0x8)
	struct UCanvasPanel* CP_ToolTip; // 0x320(0x8)
	unsigned char UnknownData_328[0x0058]; // 0x328(0x58)

	void OnUnHoveredGradeNoneBtn(); // Function ProjectD.PDFriendClanItem.OnUnHoveredGradeNoneBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C63820
	void OnHoveredGradeNoneBtn(); // Function ProjectD.PDFriendClanItem.OnHoveredGradeNoneBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C63160
};

// Class ProjectD.PDFriendListItemData
// Size : 0xA0 (Inherited : 0x28)
struct UPDFriendListItemData : UObject {
	unsigned char UnknownData_28[0x0068]; // 0x28(0x68)
	struct TArray<struct UPDFriendListItemData*> TreeChildren; // 0x90(0x10)
};

// Class ProjectD.PDFriendListItem
// Size : 0x3A8 (Inherited : 0x288)
struct UPDFriendListItem : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UCanvasPanel* CP_User; // 0x290(0x8)
	struct UCanvasPanel* CP_Category; // 0x298(0x8)
	struct UBorder* Background; // 0x2A0(0x8)
	struct UImage* IMG_Face; // 0x2A8(0x8)
	struct UPDTextBlock* TB_Nickname; // 0x2B0(0x8)
	struct UImage* IMG_ClanMarkBG; // 0x2B8(0x8)
	struct UImage* IMG_ClanMarkFG; // 0x2C0(0x8)
	struct UPDTextBlock* TB_ClanName; // 0x2C8(0x8)
	struct UPDTextBlock* TB_State; // 0x2D0(0x8)
	struct UPDTextBlock* TB_Category; // 0x2D8(0x8)
	struct UHorizontalBox* HB_UserData; // 0x2E0(0x8)
	struct UImage* IMG_Manner; // 0x2E8(0x8)
	struct UImage* IMG_Medal1; // 0x2F0(0x8)
	struct UImage* IMG_Medal2; // 0x2F8(0x8)
	struct UImage* IMG_Medal3; // 0x300(0x8)
	struct UCanvasPanel* CP_GradeNone; // 0x308(0x8)
	struct UPDButton* BTN_GradeNone; // 0x310(0x8)
	struct UImage* IMG_GradeNone; // 0x318(0x8)
	struct UCanvasPanel* CP_ToolTip; // 0x320(0x8)
	unsigned char UnknownData_328[0x0080]; // 0x328(0x80)

	void OnUnHoveredGradeNoneBtn(); // Function ProjectD.PDFriendListItem.OnUnHoveredGradeNoneBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C63820
	void OnHoveredGradeNoneBtn(); // Function ProjectD.PDFriendListItem.OnHoveredGradeNoneBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C63160
};

// Class ProjectD.PDFriendPage
// Size : 0x290 (Inherited : 0x290)
struct UPDFriendPage : UPDCommPage {
};

// Class ProjectD.PDGameBlueprintLibrary
// Size : 0x28 (Inherited : 0x28)
struct UPDGameBlueprintLibrary : UBlueprintFunctionLibrary {

	struct UPDGameInstance* GetPDGameInstance(struct UObject* WorldContextObject); // Function ProjectD.PDGameBlueprintLibrary.GetPDGameInstance // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF653C62D10
	struct APlayerController* GetLocalPlayerController(struct UObject* WorldContextObject); // Function ProjectD.PDGameBlueprintLibrary.GetLocalPlayerController // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF653C62C90
	struct AGameStateBase* GetCoreGameState(struct UObject* WorldContextObject); // Function ProjectD.PDGameBlueprintLibrary.GetCoreGameState // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF653C62C10
	struct AGameModeBase* GetCoreGameMode(struct UObject* WorldContextObject); // Function ProjectD.PDGameBlueprintLibrary.GetCoreGameMode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF653C62B90
};

// Class ProjectD.PDGameInstance
// Size : 0x1B8 (Inherited : 0x198)
struct UPDGameInstance : UGameInstance {
	unsigned char UnknownData_198[0x0020]; // 0x198(0x20)
};

// Class ProjectD.PDGameMapIconModule
// Size : 0x2A0 (Inherited : 0x288)
struct UPDGameMapIconModule : UPDUserWidget {
	struct UImage* IMG_Icon; // 0x288(0x8)
	struct UPDTextBlock* TB_Label; // 0x290(0x8)
	unsigned char UnknownData_298[0x0008]; // 0x298(0x8)
};

// Class ProjectD.PDGameMapIconCamp
// Size : 0x2D0 (Inherited : 0x2A0)
struct UPDGameMapIconCamp : UPDGameMapIconModule {
	struct UImage* IMG_Area; // 0x2A0(0x8)
	struct UImage* IMG_Shop; // 0x2A8(0x8)
	struct UCanvasPanel* CP_Info; // 0x2B0(0x8)
	struct UPDGameMapIconCampDrawer* CampDrawer; // 0x2B8(0x8)
	unsigned char UnknownData_2C0[0x0010]; // 0x2C0(0x10)
};

// Class ProjectD.PDGameMapIconCampDrawer
// Size : 0x340 (Inherited : 0x288)
struct UPDGameMapIconCampDrawer : UPDUserWidget {
	unsigned char UnknownData_288[0x0030]; // 0x288(0x30)
	struct FSlateBrush AreaBrush; // 0x2B8(0x88)
};

// Class ProjectD.PDGameMapIconDemolition
// Size : 0x2E8 (Inherited : 0x2A0)
struct UPDGameMapIconDemolition : UPDGameMapIconModule {
	struct UCanvasPanel* CP_Reply; // 0x2A0(0x8)
	struct UPDPingReplyUI* Reply01; // 0x2A8(0x8)
	struct UPDPingReplyUI* Reply02; // 0x2B0(0x8)
	struct UPDPingReplyUI* Reply03; // 0x2B8(0x8)
	struct UPDPingReplyUI* Reply04; // 0x2C0(0x8)
	struct UPDPingReplyUI* Reply05; // 0x2C8(0x8)
	struct TArray<struct UPDPingReplyUI*> ReplyList; // 0x2D0(0x10)
	unsigned char UnknownData_2E0[0x0008]; // 0x2E0(0x8)
};

// Class ProjectD.PDGameMapIconFireSoundUI
// Size : 0x2A8 (Inherited : 0x2A0)
struct UPDGameMapIconFireSoundUI : UPDGameMapIconModule {
	struct USizeBox* SB_Icon; // 0x2A0(0x8)
};

// Class ProjectD.PDGameMapIconFxUI
// Size : 0x2A0 (Inherited : 0x2A0)
struct UPDGameMapIconFxUI : UPDGameMapIconModule {
};

// Class ProjectD.PDGameMapIconPing
// Size : 0x2F0 (Inherited : 0x2A0)
struct UPDGameMapIconPing : UPDGameMapIconModule {
	struct UCanvasPanel* CP_Normal; // 0x2A0(0x8)
	struct UImage* IMG_IconFx; // 0x2A8(0x8)
	struct UCanvasPanel* CP_Item; // 0x2B0(0x8)
	struct UImage* IMG_Item; // 0x2B8(0x8)
	struct UScaleBox* SB_Weapon; // 0x2C0(0x8)
	struct UImage* IMG_Weapon; // 0x2C8(0x8)
	struct UCanvasPanel* CP_Info; // 0x2D0(0x8)
	struct UBorder* BD_UserColor; // 0x2D8(0x8)
	struct UPDTextBlock* TB_UserNum; // 0x2E0(0x8)
	unsigned char UnknownData_2E8[0x0008]; // 0x2E8(0x8)
};

// Class ProjectD.PDGameMapIconPlayerDrawing
// Size : 0x2C0 (Inherited : 0x2A0)
struct UPDGameMapIconPlayerDrawing : UPDGameMapIconModule {
	unsigned char UnknownData_2A0[0x0020]; // 0x2A0(0x20)
};

// Class ProjectD.PDGameMapIconPlayerUI
// Size : 0x330 (Inherited : 0x2A0)
struct UPDGameMapIconPlayerUI : UPDGameMapIconModule {
	struct UCanvasPanel* CP_Direction; // 0x2A0(0x8)
	struct UCanvasPanel* CP_Normal; // 0x2A8(0x8)
	struct UBorder* BD_Arrow; // 0x2B0(0x8)
	struct UBorder* BD_View; // 0x2B8(0x8)
	struct UWidgetSwitcher* WS_State; // 0x2C0(0x8)
	struct UProgressBar* PB_Groggy; // 0x2C8(0x8)
	struct UPDTextBlock* TB_Name; // 0x2D0(0x8)
	struct UBorder* BD_Fire; // 0x2D8(0x8)
	struct UImage* IMG_Speaking_Normal; // 0x2E0(0x8)
	struct UImage* IMG_Speaking_Groggy; // 0x2E8(0x8)
	struct UImage* IMG_Item; // 0x2F0(0x8)
	struct UImage* IMG_HasSeed; // 0x2F8(0x8)
	struct UPaperSprite* IMG_Rescue; // 0x300(0x8)
	struct UPaperSprite* IMG_ItemUse_Bandage; // 0x308(0x8)
	struct UPaperSprite* IMG_ItemUse_Astrapi; // 0x310(0x8)
	struct UPaperSprite* IMG_ItemUse_ArmorKit; // 0x318(0x8)
	unsigned char UnknownData_320[0x0010]; // 0x320(0x10)
};

// Class ProjectD.PDGameMapIconSafeZoneDrawer
// Size : 0x2C8 (Inherited : 0x288)
struct UPDGameMapIconSafeZoneDrawer : UPDUserWidget {
	enum class ESafeZoneDrawType DrawType; // 0x288(0x1)
	unsigned char UnknownData_289[0x0007]; // 0x289(0x7)
	struct TArray<struct FSafeZoneDrawing> Drawings; // 0x290(0x10)
	bool DrawLineAntialias; // 0x2A0(0x1)
	unsigned char UnknownData_2A1[0x0003]; // 0x2A1(0x3)
	float DrawLineTickness; // 0x2A4(0x4)
	bool bEdgeRounding; // 0x2A8(0x1)
	unsigned char UnknownData_2A9[0x0003]; // 0x2A9(0x3)
	float EdgeRoundingLen; // 0x2AC(0x4)
	int32_t EdgeRoundingSegment; // 0x2B0(0x4)
	unsigned char UnknownData_2B4[0x0014]; // 0x2B4(0x14)
};

// Class ProjectD.PDGameMapIconSafeZoneModule
// Size : 0x2D8 (Inherited : 0x2A0)
struct UPDGameMapIconSafeZoneModule : UPDGameMapIconModule {
	struct URetainerBox* RB_Mask; // 0x2A0(0x8)
	struct UCanvasPanel* CP_Mask; // 0x2A8(0x8)
	struct UImage* IMG_Area; // 0x2B0(0x8)
	struct UPDGameMapIconSafeZoneDrawer* DrawerCurrent; // 0x2B8(0x8)
	struct UPDGameMapIconSafeZoneDrawer* DrawerNext; // 0x2C0(0x8)
	unsigned char UnknownData_2C8[0x0010]; // 0x2C8(0x10)
};

// Class ProjectD.PDGameMapModule
// Size : 0x3C0 (Inherited : 0x288)
struct UPDGameMapModule : UPDUserWidget {
	struct UImage* IMG_Map; // 0x288(0x8)
	struct UCanvasPanel* CP_Map; // 0x290(0x8)
	struct UCanvasPanel* CP_Restriction; // 0x298(0x8)
	enum class EMapShape MapShape; // 0x2A0(0x1)
	enum class EWidgetClipping AreaClipping; // 0x2A1(0x1)
	unsigned char UnknownData_2A2[0x0006]; // 0x2A2(0x6)
	class UPDGameMapIconModule* IconClassDefault; // 0x2A8(0x8)
	struct TMap<enum class EMapObjectType, class UPDGameMapIconModule*> IconClassMap; // 0x2B0(0x50)
	unsigned char UnknownData_300[0x00C0]; // 0x300(0xC0)
};

// Class ProjectD.PDGameModeSelectItemUI
// Size : 0x2B8 (Inherited : 0x288)
struct UPDGameModeSelectItemUI : UPDUserWidget {
	unsigned char UnknownData_288[0x0018]; // 0x288(0x18)
	struct UImage* IMG_Mode; // 0x2A0(0x8)
	struct UPDButton* GameModeButton; // 0x2A8(0x8)
	unsigned char UnknownData_2B0[0x0008]; // 0x2B0(0x8)

	void OnClick(); // Function ProjectD.PDGameModeSelectItemUI.OnClick // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C62E30
};

// Class ProjectD.PDGameModeSelectUI
// Size : 0x298 (Inherited : 0x288)
struct UPDGameModeSelectUI : UPDSceneBaseUI {
	struct UTileView* TV_GameModeList; // 0x288(0x8)
	struct UPDButton* Btn_GotoLobby; // 0x290(0x8)

	void GotoLobby(); // Function ProjectD.PDGameModeSelectUI.GotoLobby // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C532C0
	void GameModeSelect(int32_t SelectModeID); // Function ProjectD.PDGameModeSelectUI.GameModeSelect // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C62B10
};

// Class ProjectD.PDGameplayOptionUI
// Size : 0x378 (Inherited : 0x338)
struct UPDGameplayOptionUI : UPDOptionUIBase {
	struct UScrollBox* SB_Gameplay; // 0x338(0x8)
	struct UPDTabButton* MouseSettingBtn; // 0x340(0x8)
	struct UPDTabButton* UISettingBtn; // 0x348(0x8)
	unsigned char UnknownData_350[0x0028]; // 0x350(0x28)

	void Onx80ZoomScopeChanged(float Value); // Function ProjectD.PDGameplayOptionUI.Onx80ZoomScopeChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C639C0
	void Onx40ZoomScopeChanged(float Value); // Function ProjectD.PDGameplayOptionUI.Onx40ZoomScopeChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C63940
	void Onx20ZoomScopeChanged(float Value); // Function ProjectD.PDGameplayOptionUI.Onx20ZoomScopeChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C638C0
	void Onx160ZoomScopeChanged(float Value); // Function ProjectD.PDGameplayOptionUI.Onx160ZoomScopeChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C63840
	void OnSubtitleUseChanged(bool Value); // Function ProjectD.PDGameplayOptionUI.OnSubtitleUseChanged // (Final|Native|Private) // Param Size : 0x1, 0x7FF653C63790
	void OnSubtitlePlayerNumberUseChanged(bool Value); // Function ProjectD.PDGameplayOptionUI.OnSubtitlePlayerNumberUseChanged // (Final|Native|Private) // Param Size : 0x1, 0x7FF653C63700
	void OnSubtitleBGAlphaChanged(float Value); // Function ProjectD.PDGameplayOptionUI.OnSubtitleBGAlphaChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C63680
	void OnPingAutoHipFire(); // Function ProjectD.PDGameplayOptionUI.OnPingAutoHipFire // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C63660
	void OnPingAutoEnabled(); // Function ProjectD.PDGameplayOptionUI.OnPingAutoEnabled // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C63640
	void OnPingAutoDisabled(); // Function ProjectD.PDGameplayOptionUI.OnPingAutoDisabled // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C63620
	void OnPingAutoAll(); // Function ProjectD.PDGameplayOptionUI.OnPingAutoAll // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C63600
	void OnPingAutoAim(); // Function ProjectD.PDGameplayOptionUI.OnPingAutoAim // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C635E0
	void OnParkourVisibilityChanged(bool Value); // Function ProjectD.PDGameplayOptionUI.OnParkourVisibilityChanged // (Final|Native|Private) // Param Size : 0x1, 0x7FF653C63550
	void OnNormalSensitivityChanged(float Value); // Function ProjectD.PDGameplayOptionUI.OnNormalSensitivityChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C634D0
	void OnMouseSmoothingChanged(bool Value); // Function ProjectD.PDGameplayOptionUI.OnMouseSmoothingChanged // (Final|Native|Private) // Param Size : 0x1, 0x7FF653C63440
	void OnMouseSensitivityYChanged(float Value); // Function ProjectD.PDGameplayOptionUI.OnMouseSensitivityYChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C633C0
	void OnMouseSensitivityXChanged(float Value); // Function ProjectD.PDGameplayOptionUI.OnMouseSensitivityXChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C63340
	void OnMinimapRotationEnabled(); // Function ProjectD.PDGameplayOptionUI.OnMinimapRotationEnabled // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C63320
	void OnMinimapRotationDisabled(); // Function ProjectD.PDGameplayOptionUI.OnMinimapRotationDisabled // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C63300
	void OnIronsightSensitivityChanged(float Value); // Function ProjectD.PDGameplayOptionUI.OnIronsightSensitivityChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C63200
	void OnIngameMapBGAlphaChanged(float Value); // Function ProjectD.PDGameplayOptionUI.OnIngameMapBGAlphaChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C63180
	void OnHUDScaleChanged(float Value); // Function ProjectD.PDGameplayOptionUI.OnHUDScaleChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C63080
	void OnHitIndicatorChangedBoth(); // Function ProjectD.PDGameplayOptionUI.OnHitIndicatorChangedBoth // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C63140
	void OnHitIndicatorChanged3D(); // Function ProjectD.PDGameplayOptionUI.OnHitIndicatorChanged3D // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C63120
	void OnHitIndicatorChanged2D(); // Function ProjectD.PDGameplayOptionUI.OnHitIndicatorChanged2D // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C63100
	void OnDamageSumView(); // Function ProjectD.PDGameplayOptionUI.OnDamageSumView // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C63060
	void OnDamageIndividualView(); // Function ProjectD.PDGameplayOptionUI.OnDamageIndividualView // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C63040
	void OnCrossHairColorChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDGameplayOptionUI.OnCrossHairColorChanged // (Final|Native|Private) // Param Size : 0x11, 0x7FF653C62F10
	void OnClickUISettingButton(); // Function ProjectD.PDGameplayOptionUI.OnClickUISettingButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C62EF0
	void OnClickMouseSettingButton(); // Function ProjectD.PDGameplayOptionUI.OnClickMouseSettingButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C62E70
	void OnAimingSensitivityChanged(float Value); // Function ProjectD.PDGameplayOptionUI.OnAimingSensitivityChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C62D90
};

// Class ProjectD.PDGameResultUI
// Size : 0x618 (Inherited : 0x288)
struct UPDGameResultUI : UPDSceneBaseUI {
	struct UPDTabButtonGroup* MenuCategoryGroup; // 0x288(0x8)
	struct UPDTabButton* TBtn_TabMenu_01; // 0x290(0x8)
	struct UPDTabButton* TBtn_TabMenu_02; // 0x298(0x8)
	struct UPDTabButton* TBtn_TabMenu_03; // 0x2A0(0x8)
	struct UCanvasPanel* CP_Match; // 0x2A8(0x8)
	struct UPDTextBlock* TB_MatchMessage; // 0x2B0(0x8)
	struct UPDTextBlock* TB_MatchMessage_Fx_01; // 0x2B8(0x8)
	struct UPDTextBlock* TB_MatchMessage_Team; // 0x2C0(0x8)
	struct UPDTextBlock* TB_MatchMessage_Result; // 0x2C8(0x8)
	struct UHorizontalBox* HB_MatchRoundRoot; // 0x2D0(0x8)
	struct UCanvasPanel* CP_MatchTeam; // 0x2D8(0x8)
	struct UCanvasPanel* CP_MatchSolo; // 0x2E0(0x8)
	struct UPDTextBlock* TB_MatchScore_Rank; // 0x2E8(0x8)
	float MatchRoundPadding; // 0x2F0(0x4)
	float UserExpDetailPadding; // 0x2F4(0x4)
	struct UWidgetSwitcher* WS_ExpCase; // 0x2F8(0x8)
	struct UWidgetSwitcher* WS_StepType; // 0x300(0x8)
	struct URichTextBlock* RTB_GuideMessage; // 0x308(0x8)
	struct UPDKeyButton* KBtn_Close; // 0x310(0x8)
	struct UPDKeyButton* KBtn_Next; // 0x318(0x8)
	struct UProgressBar* PB_PrevExp; // 0x320(0x8)
	struct UProgressBar* PB_CurrentExp; // 0x328(0x8)
	struct UPDTextBlock* T_Level; // 0x330(0x8)
	struct UPDTextBlock* T_LevelUp; // 0x338(0x8)
	struct UPDTextBlock* T_Personal_CurrentLevel; // 0x340(0x8)
	struct UPDTextBlock* T_Personal_NextLevel; // 0x348(0x8)
	struct UCanvasPanel* CP_CurrentExp; // 0x350(0x8)
	struct UCanvasPanel* CP_PrevExp; // 0x358(0x8)
	struct UPDTextBlock* T_CurrentExp; // 0x360(0x8)
	struct UPDTextBlock* T_MaxExp; // 0x368(0x8)
	struct UPDTextBlock* T_CurrentExp1; // 0x370(0x8)
	struct UHorizontalBox* HB_Exp; // 0x378(0x8)
	struct UPDResultTitleItem* TitleItem0; // 0x380(0x8)
	struct UPDResultTitleItem* TitleItem1; // 0x388(0x8)
	struct UPDResultTitleItem* TitleItem2; // 0x390(0x8)
	struct UPDResultTitleItem* TitleItem3; // 0x398(0x8)
	struct UPDResultTitleItem* TitleItem4; // 0x3A0(0x8)
	struct UPDResultRoundMenuItem* RMI_MenuAll; // 0x3A8(0x8)
	struct UPDResultRoundMenuItem* RMI_Menu1; // 0x3B0(0x8)
	struct UPDResultRoundMenuItem* RMI_Menu2; // 0x3B8(0x8)
	struct UPDResultRoundMenuItem* RMI_Menu3; // 0x3C0(0x8)
	struct UPDResultRoundMenuItem* RMI_Menu4; // 0x3C8(0x8)
	struct UPDResultRoundMenuItem* RMI_Menu5; // 0x3D0(0x8)
	struct UPDResultRoundMenuItem* RMI_Menu6; // 0x3D8(0x8)
	struct UPDResultRoundMenuItem* RMI_Menu7; // 0x3E0(0x8)
	struct UPDResultRoundMenuItem* RMI_Menu8; // 0x3E8(0x8)
	struct UPDResultRoundMenuItem* RMI_Menu9; // 0x3F0(0x8)
	struct UPDResultTeamScore* RTS_List1; // 0x3F8(0x8)
	struct UPDResultTeamScore* RTS_List2; // 0x400(0x8)
	struct UPDResultRankScore* RankScore; // 0x408(0x8)
	struct UPDRoundReplayer* RoundReplayer; // 0x410(0x8)
	struct UWidgetSwitcher* WS_Summary_ResultCase; // 0x418(0x8)
	struct UImage* IMG_ScoreBoard_MatchResult; // 0x420(0x8)
	struct UPDTextBlock* T_MatchInfo_Mode; // 0x428(0x8)
	struct UPDTextBlock* T_MatchInfo_Match; // 0x430(0x8)
	struct UPDTextBlock* T_MatchInfo_Level; // 0x438(0x8)
	struct UPDTextBlock* T_MatchInfo_Time; // 0x440(0x8)
	struct UCanvasPanel* CP_ScoreBoard_MatchTeam; // 0x448(0x8)
	struct UPDTextBlock* T_ScoreBoard_MatchScore_Ally; // 0x450(0x8)
	struct UPDTextBlock* T_ScoreBoard_MatchScore_Enemy; // 0x458(0x8)
	struct UCanvasPanel* CP_ScoreBoard_MatchSolo; // 0x460(0x8)
	struct UPDTextBlock* T_ScoreBoard_MatchScore_Rank; // 0x468(0x8)
	struct UCanvasPanel* CP_ScoreList; // 0x470(0x8)
	struct UPDResultRoundPlayerList* RRP_List1; // 0x478(0x8)
	struct UPDResultRoundPlayerList* RRP_List2; // 0x480(0x8)
	struct UPDResultRewardItem* RRI_Lepton1; // 0x488(0x8)
	struct UPDResultRewardItem* RRI_Lepton2; // 0x490(0x8)
	struct TArray<struct UPDResultRoundMenuItem*> RoundMenuItems; // 0x498(0x10)
	struct TArray<struct UPDResultTitleItem*> TitleItems; // 0x4A8(0x10)
	struct UImage* IMG_FX_TitleBg_Wings; // 0x4B8(0x8)
	struct UImage* IMG_FX_TitleBg_LWing_01; // 0x4C0(0x8)
	struct UImage* IMG_FX_TitleBg_LWing_02; // 0x4C8(0x8)
	struct UImage* IMG_FX_TitleBg_RWing_01; // 0x4D0(0x8)
	struct UImage* IMG_FX_TitleBg_RWing_02; // 0x4D8(0x8)
	struct UPDTextBlock* TB_MatchScore_Ally; // 0x4E0(0x8)
	struct UPDTextBlock* TB_MatchScore_Enemy; // 0x4E8(0x8)
	struct UWidgetSwitcher* WS_ScoreBoard_MatchResult; // 0x4F0(0x8)
	struct UCanvasPanel* CP_ToolTip; // 0x4F8(0x8)
	struct UPDTextBlock* TB_DataName; // 0x500(0x8)
	struct UPDTextBlock* TB_DataValue; // 0x508(0x8)
	unsigned char UnknownData_510[0x0108]; // 0x510(0x108)

	void OnMenuItemClicked(int32_t InMenuIndex); // Function ProjectD.PDGameResultUI.OnMenuItemClicked // (Final|Native|Protected) // Param Size : 0x4, 0x7FF653C63280
	void OnClickTitle(); // Function ProjectD.PDGameResultUI.OnClickTitle // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C62ED0
	void OnClickScoreBoard(); // Function ProjectD.PDGameResultUI.OnClickScoreBoard // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C62EB0
	void OnClickProgress(); // Function ProjectD.PDGameResultUI.OnClickProgress // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C62E90
	void OnClickEsc(); // Function ProjectD.PDGameResultUI.OnClickEsc // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C62E50
	void OnChangeNextStep(); // Function ProjectD.PDGameResultUI.OnChangeNextStep // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C62E10
};

// Class ProjectD.PDGameTimeUI
// Size : 0x308 (Inherited : 0x290)
struct UPDGameTimeUI : UPDIngameModeWidget {
	struct UCanvasPanel* CP_PlayTime; // 0x290(0x8)
	struct UPanelWidget* PW_PlayTimeNum; // 0x298(0x8)
	struct UPDTextBlock* TB_PlayTimeMin; // 0x2A0(0x8)
	struct UPDTextBlock* TB_PlayTimeSec; // 0x2A8(0x8)
	struct UPDTextBlock* TB_PlayTimeComma; // 0x2B0(0x8)
	struct FLinearColor NormalTimeColor; // 0x2B8(0x10)
	struct FLinearColor WarningTimeColor1; // 0x2C8(0x10)
	struct FLinearColor WarningTimeColor2; // 0x2D8(0x10)
	int32_t WarningPlayTime; // 0x2E8(0x4)
	int32_t EmergencyPlayTime; // 0x2EC(0x4)
	unsigned char UnknownData_2F0[0x0018]; // 0x2F0(0x18)
};

// Class ProjectD.PDGameViewportClient
// Size : 0x368 (Inherited : 0x330)
struct UPDGameViewportClient : UGameViewportClient {
	unsigned char UnknownData_330[0x0038]; // 0x330(0x38)
};

// Class ProjectD.PDGBOChildActorComponent
// Size : 0x240 (Inherited : 0x220)
struct UPDGBOChildActorComponent : UChildActorComponent {
	bool RootNode; // 0x220(0x1)
	unsigned char UnknownData_221[0x001F]; // 0x221(0x1F)
};

// Class ProjectD.PDGoRagdollAnimNotify
// Size : 0x48 (Inherited : 0x48)
struct UPDGoRagdollAnimNotify : UPDBaseAnimNotify {
};

// Class ProjectD.PDGoRagdollAnimNotifyState
// Size : 0x30 (Inherited : 0x30)
struct UPDGoRagdollAnimNotifyState : UAnimNotifyState {
};

// Class ProjectD.PDGrenadeIndicatorUI
// Size : 0x2B0 (Inherited : 0x2A0)
struct UPDGrenadeIndicatorUI : UPDHUDIconBaseUI {
	struct UBorder* BD_OutArrow; // 0x2A0(0x8)
	unsigned char UnknownData_2A8[0x0008]; // 0x2A8(0x8)
};

// Class ProjectD.PDGroupBreakableObject
// Size : 0x2B0 (Inherited : 0x220)
struct APDGroupBreakableObject : AActor {
	unsigned char UnknownData_220[0x0010]; // 0x220(0x10)
	struct TArray<struct UPDGBOChildActorComponent*> ChildActorList; // 0x230(0x10)
	struct TArray<struct UStaticMeshComponent*> StepMeshList; // 0x240(0x10)
	enum class GBOStep EditStep; // 0x250(0x1)
	unsigned char UnknownData_251[0x005F]; // 0x251(0x5F)
};

// Class ProjectD.PDGroupBreakableObject10
// Size : 0x2B0 (Inherited : 0x2B0)
struct APDGroupBreakableObject10 : APDGroupBreakableObject {
};

// Class ProjectD.PDGroupBreakableObject2x2
// Size : 0x2B0 (Inherited : 0x2B0)
struct APDGroupBreakableObject2x2 : APDGroupBreakableObject {
};

// Class ProjectD.PDGroupBreakableObject3x3
// Size : 0x2B0 (Inherited : 0x2B0)
struct APDGroupBreakableObject3x3 : APDGroupBreakableObject {
};

// Class ProjectD.PDHideWeaponAnimNotify
// Size : 0x50 (Inherited : 0x48)
struct UPDHideWeaponAnimNotify : UPDBaseAnimNotify {
	enum class EInventorySlot TargetSlot; // 0x48(0x1)
	bool Hidden; // 0x49(0x1)
	unsigned char UnknownData_4A[0x0006]; // 0x4A(0x6)
};

// Class ProjectD.PDHitFeedBackUI
// Size : 0x2F0 (Inherited : 0x288)
struct UPDHitFeedBackUI : UPDUserWidget {
	struct USizeBox* SB_FeedBackIcon; // 0x288(0x8)
	struct UImage* IMG_FeedBackIcon; // 0x290(0x8)
	struct TMap<enum class EPDHitFeedBackType, struct FHitFeedbackIcon> IconMap; // 0x298(0x50)
	unsigned char UnknownData_2E8[0x0008]; // 0x2E8(0x8)
};

// Class ProjectD.PDHitReactionAnimInstance
// Size : 0x2D0 (Inherited : 0x280)
struct UPDHitReactionAnimInstance : UPDAnimInstance {
	enum class EPDAimingState AimingState; // 0x280(0x1)
	enum class EPDStanceState StanceState; // 0x281(0x1)
	enum class EPDLocoType LocoType; // 0x282(0x1)
	bool bOverrideUpper; // 0x283(0x1)
	enum class EPDHitReactionAnimType HitReactionAnimType; // 0x284(0x1)
	unsigned char UnknownData_285[0x0003]; // 0x285(0x3)
	struct FRotator HitReactionRotation; // 0x288(0xC)
	unsigned char UnknownData_294[0x0004]; // 0x294(0x4)
	struct UAnimMontage* CurrentPlayingHitMontage; // 0x298(0x8)
	unsigned char UnknownData_2A0[0x0030]; // 0x2A0(0x30)
};

// Class ProjectD.PDHitReactionNotifyState
// Size : 0x40 (Inherited : 0x30)
struct UPDHitReactionNotifyState : UAnimNotifyState {
	struct FName BeginEventName; // 0x30(0x8)
	struct FName EndEventName; // 0x38(0x8)
};

// Class ProjectD.PDIKAnimInstance
// Size : 0x1070 (Inherited : 0x280)
struct UPDIKAnimInstance : UPDAnimInstance {
	unsigned char UnknownData_280[0x0008]; // 0x280(0x8)
	struct FPDPWUsingInABPAnimDatas PWAnimDatas; // 0x288(0x128)
	bool WStanceIsValid; // 0x3B0(0x1)
	bool SWStanceIsValid; // 0x3B1(0x1)
	unsigned char UnknownData_3B2[0x0006]; // 0x3B2(0x6)
	struct FPDPerSpecificWeaponAnimDatas PSpecificWeaponAnimDatas; // 0x3B8(0xC8)
	bool MirrorFinalPose; // 0x480(0x1)
	unsigned char UnknownData_481[0x0003]; // 0x481(0x3)
	float AimInterpTime; // 0x484(0x4)
	bool bAimingIdleState; // 0x488(0x1)
	unsigned char UnknownData_489[0x0003]; // 0x489(0x3)
	float IKInterpSpeed; // 0x48C(0x4)
	float MaxLookAtDistance; // 0x490(0x4)
	float MinLookAtDistance; // 0x494(0x4)
	enum class ECollisionChannel LookAtTraceChannel; // 0x498(0x1)
	unsigned char UnknownData_499[0x0017]; // 0x499(0x17)
	struct UMeshComponent* WeaponMeshComponent; // 0x4B0(0x8)
	unsigned char UnknownData_4B8[0x0008]; // 0x4B8(0x8)
	struct FPDIKAnimInstanceProxy Proxy; // 0x4C0(0xBA0)
	unsigned char UnknownData_1060[0x0010]; // 0x1060(0x10)
};

// Class ProjectD.PDImage
// Size : 0x218 (Inherited : 0x210)
struct UPDImage : UImage {
	bool bPixelSnapping; // 0x210(0x1)
	unsigned char UnknownData_211[0x0007]; // 0x211(0x7)

	void SetPixelSnapping(bool bInPixelSnapping); // Function ProjectD.PDImage.SetPixelSnapping // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF653C67D30
};

// Class ProjectD.PDImageButton
// Size : 0x2B0 (Inherited : 0x288)
struct UPDImageButton : UPDUserWidget {
	struct UImage* IMG_Button; // 0x288(0x8)
	unsigned char UnknownData_290[0x0020]; // 0x290(0x20)
};

// Class ProjectD.PDIndoorReactor
// Size : 0x28 (Inherited : 0x28)
struct UPDIndoorReactor : UInterface {
};

// Class ProjectD.PDIndoorVolume
// Size : 0x258 (Inherited : 0x258)
struct APDIndoorVolume : ATriggerVolume {
};

// Class ProjectD.PDIngameLaptonPresetTab
// Size : 0x2C0 (Inherited : 0x288)
struct UPDIngameLaptonPresetTab : UPDUserWidget {
	unsigned char UnknownData_288[0x0010]; // 0x288(0x10)
	struct UPDTabButton* Tab_Preset; // 0x298(0x8)
	unsigned char UnknownData_2A0[0x0020]; // 0x2A0(0x20)

	void OnSelectPreset(); // Function ProjectD.PDIngameLaptonPresetTab.OnSelectPreset // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C67C60
};

// Class ProjectD.PDIngameMapModule
// Size : 0x4B8 (Inherited : 0x3C0)
struct UPDIngameMapModule : UPDGameMapModule {
	struct UCanvasPanel* CP_Area; // 0x3C0(0x8)
	struct UCanvasPanel* PaintZone; // 0x3C8(0x8)
	struct UBorder* BD_BackColor; // 0x3D0(0x8)
	struct UImage* IMG_Sight; // 0x3D8(0x8)
	float ZoomStepScale; // 0x3E0(0x4)
	int32_t ZoomStepCount; // 0x3E4(0x4)
	float ZoomInterval; // 0x3E8(0x4)
	float ZoomRate; // 0x3EC(0x4)
	float PlayerIconSightRadius; // 0x3F0(0x4)
	unsigned char UnknownData_3F4[0x00C4]; // 0x3F4(0xC4)
};

// Class ProjectD.PDIngameMapUI
// Size : 0x4A0 (Inherited : 0x290)
struct UPDIngameMapUI : UPDIngameModeWidget {
	struct UPDIngameMapModule* GameMap; // 0x290(0x8)
	struct UCanvasPanel* CP_MapBox; // 0x298(0x8)
	struct UCanvasPanel* CP_Map; // 0x2A0(0x8)
	struct UCanvasPanel* CP_GameMap; // 0x2A8(0x8)
	struct UPDTextBlock* TB_Time; // 0x2B0(0x8)
	struct UPDTextBlock* TB_Coordinates; // 0x2B8(0x8)
	struct UImage* IMG_Weather; // 0x2C0(0x8)
	struct UHorizontalBox* HB_Weather; // 0x2C8(0x8)
	struct UWidgetSwitcher* WS_Menu; // 0x2D0(0x8)
	struct UCanvasPanel* CP_Guide; // 0x2D8(0x8)
	struct UBorder* BD_Menu; // 0x2E0(0x8)
	struct UImage* IMG_MapShadow; // 0x2E8(0x8)
	struct UCanvasPanel* CP_NewBadge; // 0x2F0(0x8)
	struct UCanvasPanel* CP_MouseGuideLine; // 0x2F8(0x8)
	struct UImage* IMG_MouseX; // 0x300(0x8)
	struct UImage* IMG_MouseY; // 0x308(0x8)
	struct UCheckBox* CB_ToggleBoard; // 0x310(0x8)
	struct UPDButton* Btn_DeleteAllLine; // 0x318(0x8)
	struct UPDTextBlock* TB_Key_Scale; // 0x320(0x8)
	struct UPDTextBlock* TB_Key_DeletePing; // 0x328(0x8)
	bool DefaultLarge; // 0x330(0x1)
	unsigned char UnknownData_331[0x0003]; // 0x331(0x3)
	float LargeMapOffset; // 0x334(0x4)
	struct FVector2D NormalMapSize; // 0x338(0x8)
	struct FVector2D NormalGameMapSize; // 0x340(0x8)
	struct FVector2D NormalMapBoxPos; // 0x348(0x8)
	struct FVector2D NormalMenuPos; // 0x350(0x8)
	struct FVector2D NormalMenuSize; // 0x358(0x8)
	struct FVector2D NormalShadowPos; // 0x360(0x8)
	struct FVector2D NormalShadowSize; // 0x368(0x8)
	struct FVector2D MediumMapSize; // 0x370(0x8)
	struct FVector2D MediumGameMapSize; // 0x378(0x8)
	struct FVector2D MediumMapBoxPos; // 0x380(0x8)
	struct FVector2D MediumMenuPos; // 0x388(0x8)
	struct FVector2D MediumMenuSize; // 0x390(0x8)
	struct FVector2D MediumShadowPos; // 0x398(0x8)
	struct FVector2D MediumShadowSize; // 0x3A0(0x8)
	struct FVector2D LargeMapSize; // 0x3A8(0x8)
	struct FVector2D LargeGameMapSize; // 0x3B0(0x8)
	struct FVector2D LargeMapBoxPos; // 0x3B8(0x8)
	struct FVector2D LargeMenuPos; // 0x3C0(0x8)
	struct FVector2D LargeMenuSize; // 0x3C8(0x8)
	struct FVector2D LargeShadowPos; // 0x3D0(0x8)
	struct FVector2D LargeShadowSize; // 0x3D8(0x8)
	struct FPDIngameMapPos StatusBoardPos; // 0x3E0(0x28)
	struct FPDIngameMapPos BasePos; // 0x408(0x28)
	unsigned char UnknownData_430[0x0070]; // 0x430(0x70)

	void OnToggleBoardCheckBoxChanged(bool Val); // Function ProjectD.PDIngameMapUI.OnToggleBoardCheckBoxChanged // (Final|Native|Protected) // Param Size : 0x1, 0x7FF653C67CA0
	void OnClickDeleteAllLines(); // Function ProjectD.PDIngameMapUI.OnClickDeleteAllLines // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C67BC0
};

// Class ProjectD.PDInGameMode
// Size : 0x2C0 (Inherited : 0x2C0)
struct APDInGameMode : AGameModeBase {
};

// Class ProjectD.PDIngameMyCharListItemData
// Size : 0x48 (Inherited : 0x28)
struct UPDIngameMyCharListItemData : UObject {
	unsigned char UnknownData_28[0x0020]; // 0x28(0x20)
};

// Class ProjectD.PDIngameMyCharListItem
// Size : 0x2C8 (Inherited : 0x288)
struct UPDIngameMyCharListItem : UPDUserWidget {
	unsigned char UnknownData_288[0x0018]; // 0x288(0x18)
	struct UPDTabButton* Btn_Select; // 0x2A0(0x8)
	struct UWidgetSwitcher* WS_State; // 0x2A8(0x8)
	struct UImage* IMG_Face; // 0x2B0(0x8)
	struct UImage* IMG_NotOwnedFace; // 0x2B8(0x8)
	unsigned char UnknownData_2C0[0x0008]; // 0x2C0(0x8)

	void OnSelectChar(); // Function ProjectD.PDIngameMyCharListItem.OnSelectChar // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C67C40
};

// Class ProjectD.PDInputBuffer
// Size : 0x100 (Inherited : 0x28)
struct UPDInputBuffer : UObject {
	unsigned char UnknownData_28[0x00D8]; // 0x28(0xD8)
};

// Class ProjectD.PDPlayerController
// Size : 0x570 (Inherited : 0x570)
struct APDPlayerController : APlayerController {
};

// Class ProjectD.PDIngamePlayerController
// Size : 0x638 (Inherited : 0x570)
struct APDIngamePlayerController : APDPlayerController {
	unsigned char UnknownData_570[0x0030]; // 0x570(0x30)
	bool bUseViewTargetWithBlend; // 0x5A0(0x1)
	unsigned char UnknownData_5A1[0x0087]; // 0x5A1(0x87)
	struct UPDInputBuffer* InputBuffer; // 0x628(0x8)
	unsigned char UnknownData_630[0x0008]; // 0x630(0x8)
};

// Class ProjectD.PDIngameStatusBoardUI
// Size : 0x538 (Inherited : 0x290)
struct UPDIngameStatusBoardUI : UPDIngameModeWidget {
	struct UPDKeyButton* KBtn_Close; // 0x290(0x8)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_2; // 0x298(0x8)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_3; // 0x2A0(0x8)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_4; // 0x2A8(0x8)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_5; // 0x2B0(0x8)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_6; // 0x2B8(0x8)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_7; // 0x2C0(0x8)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_8; // 0x2C8(0x8)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_9; // 0x2D0(0x8)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_10; // 0x2D8(0x8)
	struct TArray<struct UPDStatusBoardRoundResultItem*> RoundResultList; // 0x2E0(0x10)
	struct UPDTextBlock* TB_TeamName_Ally; // 0x2F0(0x8)
	struct UPDTextBlock* TB_TeamName_Enemy; // 0x2F8(0x8)
	struct UImage* IMG_InfoBoardBg_Ally; // 0x300(0x8)
	struct UImage* IMG_InfoBoardTLine_Ally; // 0x308(0x8)
	struct UImage* IMG_InfoBoardBLine_Ally; // 0x310(0x8)
	struct UImage* IMG_InfoBoardBg_Enemy; // 0x318(0x8)
	struct UImage* IMG_InfoBoardTLine_Enemy; // 0x320(0x8)
	struct UImage* IMG_InfoBoardBLine_Enemy; // 0x328(0x8)
	struct UPDStatusBoardPlayerInfo_Ally* PlayerInfo_Ally_01; // 0x330(0x8)
	struct UPDStatusBoardPlayerInfo_Ally* PlayerInfo_Ally_02; // 0x338(0x8)
	struct UPDStatusBoardPlayerInfo_Ally* PlayerInfo_Ally_03; // 0x340(0x8)
	struct UPDStatusBoardPlayerInfo_Ally* PlayerInfo_Ally_04; // 0x348(0x8)
	struct UPDStatusBoardPlayerInfo_Ally* PlayerInfo_Ally_05; // 0x350(0x8)
	struct TArray<struct UPDStatusBoardPlayerInfo_Ally*> MyTeamPlayerInfoList; // 0x358(0x10)
	struct UPDStatusBoardPlayerInfo_Enemy* PlayerInfo_Enemy_01; // 0x368(0x8)
	struct UPDStatusBoardPlayerInfo_Enemy* PlayerInfo_Enemy_02; // 0x370(0x8)
	struct UPDStatusBoardPlayerInfo_Enemy* PlayerInfo_Enemy_03; // 0x378(0x8)
	struct UPDStatusBoardPlayerInfo_Enemy* PlayerInfo_Enemy_04; // 0x380(0x8)
	struct UPDStatusBoardPlayerInfo_Enemy* PlayerInfo_Enemy_05; // 0x388(0x8)
	struct TArray<struct UPDStatusBoardPlayerInfo_Enemy*> EnemyTeamPlayerInfoList; // 0x390(0x10)
	struct UPDTextBlock* T_AllyTeamCoin; // 0x3A0(0x8)
	struct UPDTextBlock* T_EnemyTeamCoin; // 0x3A8(0x8)
	struct UPDUnKnownMarketUpgradeSlot* Upgrade_Armory_Ally; // 0x3B0(0x8)
	struct UPDUnKnownMarketUpgradeSlot* Upgrade_Ordnance_Ally; // 0x3B8(0x8)
	struct UPDUnKnownMarketUpgradeSlot* Upgrade_Tactical_Ally; // 0x3C0(0x8)
	unsigned char UnknownData_3C8[0x0050]; // 0x3C8(0x50)
	struct UPDUnKnownMarketUpgradeSlot* Upgrade_Armory_Enemy; // 0x418(0x8)
	struct UPDUnKnownMarketUpgradeSlot* Upgrade_Ordnance_Enemy; // 0x420(0x8)
	struct UPDUnKnownMarketUpgradeSlot* Upgrade_Tactical_Enemy; // 0x428(0x8)
	unsigned char UnknownData_430[0x0050]; // 0x430(0x50)
	struct UPDUnKnownMarketUpgradeTooltip* StatusBoardUpgradeTooltip; // 0x480(0x8)
	struct UPDButton* Btn_Replay; // 0x488(0x8)
	struct UPDButton* Btn_Replay_Close; // 0x490(0x8)
	struct FVector2D AllyUpgradeTooltipPos; // 0x498(0x8)
	struct FVector2D AllyUpgradeTooltipAlignment; // 0x4A0(0x8)
	struct FVector2D EnemyUpgradeTooltipPos; // 0x4A8(0x8)
	struct FVector2D EnemyUpgradeTooltipAlignment; // 0x4B0(0x8)
	unsigned char UnknownData_4B8[0x0080]; // 0x4B8(0x80)

	void OnClickReplayClose(); // Function ProjectD.PDIngameStatusBoardUI.OnClickReplayClose // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C67C00
	void OnClickReplay(); // Function ProjectD.PDIngameStatusBoardUI.OnClickReplay // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C67BE0
	void OnClickCloseBtn(); // Function ProjectD.PDIngameStatusBoardUI.OnClickCloseBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF6533F7E70
};

// Class ProjectD.PDIngameUI
// Size : 0x308 (Inherited : 0x288)
struct UPDIngameUI : UPDSceneBaseUI {
	struct UCanvasPanel* CP_GameMode; // 0x288(0x8)
	struct UPDBaseModeUI* ModeUI; // 0x290(0x8)
	unsigned char UnknownData_298[0x0030]; // 0x298(0x30)
	struct UScaleBox* IngameUIScale; // 0x2C8(0x8)
	unsigned char UnknownData_2D0[0x0008]; // 0x2D0(0x8)
	struct TArray<struct UPDTextBlock*> KeyTextBlockList; // 0x2D8(0x10)
	struct TArray<struct UPDKeyButton*> KeyButtonList; // 0x2E8(0x10)
	struct TArray<struct UScaleBox*> NoneScaleUIList; // 0x2F8(0x10)

	void OnTimerRingCommand(); // Function ProjectD.PDIngameUI.OnTimerRingCommand // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C67C80
};

// Class ProjectD.PDIngameVideoUI
// Size : 0x318 (Inherited : 0x288)
struct UPDIngameVideoUI : UPDUserWidget {
	struct UMediaPlayer* MediaPlayer; // 0x288(0x8)
	struct UMediaPlayer* MediaPlayerDestroy; // 0x290(0x8)
	struct UPDTextBlock* TB_IntroTitle; // 0x298(0x8)
	struct UPDTextBlock* TB_IntroDesc01; // 0x2A0(0x8)
	struct UPDTextBlock* TB_IntroDesc02; // 0x2A8(0x8)
	struct UProgressBar* PB_Skip; // 0x2B0(0x8)
	struct UCanvasPanel* CP_MovieInfo; // 0x2B8(0x8)
	struct UCanvasPanel* CP_Skip; // 0x2C0(0x8)
	struct UImage* IMG_MovieInfo_Divider_01; // 0x2C8(0x8)
	struct UImage* IMG_Movie; // 0x2D0(0x8)
	struct UImage* IMG_Blind; // 0x2D8(0x8)
	float FirstDelay; // 0x2E0(0x4)
	float CharInterval; // 0x2E4(0x4)
	float LineInterval; // 0x2E8(0x4)
	unsigned char UnknownData_2EC[0x002C]; // 0x2EC(0x2C)

	void OnMovieOpened(); // Function ProjectD.PDIngameVideoUI.OnMovieOpened // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF653C67C20
	void OnInitMediaPlayer(); // Function ProjectD.PDIngameVideoUI.OnInitMediaPlayer // (Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
};

// Class ProjectD.PDInputKeySelector
// Size : 0x298 (Inherited : 0x288)
struct UPDInputKeySelector : UPDUserWidget {
	struct UInputKeySelector* IKS_Control; // 0x288(0x8)
	unsigned char IsPressed : 1; // 0x290(0x1)
	unsigned char UnknownData_290_1 : 7; // 0x290(0x1)
	unsigned char UnknownData_291[0x0007]; // 0x291(0x7)

	void OnInputSelectingKeyChanged(); // Function ProjectD.PDInputKeySelector.OnInputSelectingKeyChanged // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C6B280
	void OnInputKeySelected(struct FInputChord InInputChord); // Function ProjectD.PDInputKeySelector.OnInputKeySelected // (Final|Native|Protected) // Param Size : 0x20, 0x7FF653C6B160
};

// Class ProjectD.PDInteractionInfoUI
// Size : 0x388 (Inherited : 0x290)
struct UPDInteractionInfoUI : UPDIngameModeWidget {
	struct UCanvasPanel* CP_Progress; // 0x290(0x8)
	struct UImage* IMG_Icon; // 0x298(0x8)
	struct UPDCircleProgressModule* CPM_Progress; // 0x2A0(0x8)
	struct UCanvasPanel* CP_SeedProgress; // 0x2A8(0x8)
	struct UPDSeedProgressModule* SSM_Progress; // 0x2B0(0x8)
	struct UHorizontalBox* HB_Info; // 0x2B8(0x8)
	struct UPDTextBlock* TB_Key; // 0x2C0(0x8)
	struct UPDTextBlock* TB_Desc; // 0x2C8(0x8)
	struct USizeBox* SB_ItemInfo; // 0x2D0(0x8)
	struct UPDTextBlock* TB_Key_3; // 0x2D8(0x8)
	struct UPDTextBlock* TB_Desc_3; // 0x2E0(0x8)
	struct UImage* IMG_ItemIcon; // 0x2E8(0x8)
	struct USizeBox* SB_ItemCount; // 0x2F0(0x8)
	struct UPDTextBlock* TB_ItemCount; // 0x2F8(0x8)
	struct UPDTextBlock* TB_ItemName; // 0x300(0x8)
	struct UPDTextBlock* TB_ItemType; // 0x308(0x8)
	struct UImage* IMG_BulletType; // 0x310(0x8)
	struct UHorizontalBox* HB_KeyGuide; // 0x318(0x8)
	struct UPDTextBlock* TB_Guide_Key; // 0x320(0x8)
	struct UPDTextBlock* TB_Guide_Desc; // 0x328(0x8)
	struct USizeBox* SB_KeyGuide; // 0x330(0x8)
	struct UImage* IMG_GuideMouseLeft; // 0x338(0x8)
	unsigned char UnknownData_340[0x0008]; // 0x340(0x8)
	struct UHorizontalBox* HB_Mode_Info; // 0x348(0x8)
	struct UPDTextBlock* TB_Mode_Key; // 0x350(0x8)
	struct UPDTextBlock* TB_Mode_Desc; // 0x358(0x8)
	struct UHorizontalBox* HB_Info_2; // 0x360(0x8)
	struct UPDTextBlock* TB_Key_2; // 0x368(0x8)
	struct UPDTextBlock* TB_Desc_2; // 0x370(0x8)
	struct UHorizontalBox* HB_Tip; // 0x378(0x8)
	struct UPDTextBlock* TB_Desc_Tip; // 0x380(0x8)
};

// Class ProjectD.PDIntroUI
// Size : 0x2E8 (Inherited : 0x288)
struct UPDIntroUI : UPDSceneBaseUI {
	struct UBorder* B_MovieBG; // 0x288(0x8)
	struct UWidget* IMG_Movie; // 0x290(0x8)
	struct UProgressBar* PB_Skip; // 0x298(0x8)
	struct UCanvasPanel* CP_Skip; // 0x2A0(0x8)
	struct UMediaPlayer* LoginMediaPlayer; // 0x2A8(0x8)
	bool DoorMoviePlay; // 0x2B0(0x1)
	unsigned char UnknownData_2B1[0x0003]; // 0x2B1(0x3)
	float DelayTime; // 0x2B4(0x4)
	struct FKey HoldKey; // 0x2B8(0x18)
	unsigned char UnknownData_2D0[0x0018]; // 0x2D0(0x18)

	void OnMovieOpened(); // Function ProjectD.PDIntroUI.OnMovieOpened // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF653C6B2C0
	void OnMovieClosed(); // Function ProjectD.PDIntroUI.OnMovieClosed // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF653C6B2A0
	void OnInitMediaPlayer(); // Function ProjectD.PDIntroUI.OnInitMediaPlayer // (Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
};

// Class ProjectD.PDInvenDivide
// Size : 0x2D8 (Inherited : 0x288)
struct UPDInvenDivide : UPDUserWidget {
	struct UPDTextBlock* TB_Title; // 0x288(0x8)
	struct UImage* IMG_BeforeItem; // 0x290(0x8)
	struct UPDTextBlock* TB_BeforeCount; // 0x298(0x8)
	struct UImage* IMG_AfterItem; // 0x2A0(0x8)
	struct UEditableText* ETxt_DividCnt; // 0x2A8(0x8)
	struct USlider* SD_Count; // 0x2B0(0x8)
	struct UPDButton* PDBTN_Split; // 0x2B8(0x8)
	struct UPDButton* PDBTN_Cancel; // 0x2C0(0x8)
	unsigned char UnknownData_2C8[0x0010]; // 0x2C8(0x10)

	void OnDividTextInput(struct FText InText); // Function ProjectD.PDInvenDivide.OnDividTextInput // (Final|Native|Private|HasOutParms) // Param Size : 0x18, 0x7FF653C6B060
	void OnDividTextChanged(struct FText InText, enum class ETextCommit CommitMethod); // Function ProjectD.PDInvenDivide.OnDividTextChanged // (Final|Native|Private|HasOutParms) // Param Size : 0x19, 0x7FF653C6AF30
	void OnClickSplitBtn(); // Function ProjectD.PDInvenDivide.OnClickSplitBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C6AEB0
	void OnClickCancelBtn(); // Function ProjectD.PDInvenDivide.OnClickCancelBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C6AE50
	void ChangeVolume(float InVolume); // Function ProjectD.PDInvenDivide.ChangeVolume // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C6ABE0
};

// Class ProjectD.PDInvenDrag
// Size : 0x2B0 (Inherited : 0x288)
struct UPDInvenDrag : UPDUserWidget {
	struct UImage* IMG_ItemImg; // 0x288(0x8)
	struct UBorder* BD_DivideDesc; // 0x290(0x8)
	struct UTextBlock* TB_DivideDesc; // 0x298(0x8)
	struct UBorder* BD_ItemBg; // 0x2A0(0x8)
	struct UVerticalBox* VB_DragItem; // 0x2A8(0x8)
};

// Class ProjectD.PDInvenListData
// Size : 0x50 (Inherited : 0x28)
struct UPDInvenListData : UObject {
	unsigned char UnknownData_28[0x0028]; // 0x28(0x28)
};

// Class ProjectD.PDInvenListItem
// Size : 0x3D0 (Inherited : 0x288)
struct UPDInvenListItem : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UDragDropOperation* DragDropOperation; // 0x290(0x8)
	struct UWidgetSwitcher* WS_ListItem; // 0x298(0x8)
	struct UImage* IMG_ItemImg; // 0x2A0(0x8)
	struct UPDTextBlock* TB_ItemName; // 0x2A8(0x8)
	struct UPDTextBlock* TB_ItemNum; // 0x2B0(0x8)
	struct UPDTextBlock* TB_Title; // 0x2B8(0x8)
	struct UPDTextBlock* TB_Property; // 0x2C0(0x8)
	struct UCanvasPanel* CP_Progress; // 0x2C8(0x8)
	struct UProgressBar* PB_ItemProgress; // 0x2D0(0x8)
	struct UBorder* BD_ProgressTXT; // 0x2D8(0x8)
	struct UImage* IMG_Unusable; // 0x2E0(0x8)
	struct UImage* IMG_Equipped; // 0x2E8(0x8)
	struct UBorder* BD_Item_Bg; // 0x2F0(0x8)
	struct UCanvasPanel* CP_Dragable; // 0x2F8(0x8)
	struct UCanvasPanel* CP_Refund; // 0x300(0x8)
	struct UPDButton* Btn_Refund; // 0x308(0x8)
	struct UImage* IMG_Highlight_Tutorial; // 0x310(0x8)
	unsigned char UnknownData_318[0x0010]; // 0x318(0x10)
	struct UBorder* BD_TitleBg; // 0x328(0x8)
	struct FLinearColor BasicBGColor; // 0x330(0x10)
	struct FLinearColor HoverBGColor; // 0x340(0x10)
	struct FLinearColor NormalBunchColor; // 0x350(0x10)
	struct FLinearColor MaxBunchColor; // 0x360(0x10)
	unsigned char UnknownData_370[0x0060]; // 0x370(0x60)

	void RefundItem(); // Function ProjectD.PDInvenListItem.RefundItem // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C6B340
};

// Class ProjectD.PDInvenListItemData
// Size : 0x78 (Inherited : 0x28)
struct UPDInvenListItemData : UObject {
	unsigned char UnknownData_28[0x0050]; // 0x28(0x50)
};

// Class ProjectD.PDInvenToolTipModule
// Size : 0x2F0 (Inherited : 0x288)
struct UPDInvenToolTipModule : UPDUserWidget {
	struct UWidgetSwitcher* WS_ToolTip; // 0x288(0x8)
	struct UTextBlock* TB_ItemName; // 0x290(0x8)
	struct UTextBlock* TB_Type; // 0x298(0x8)
	struct UImage* IMG_Type; // 0x2A0(0x8)
	struct UTextBlock* TB_ItemDesc; // 0x2A8(0x8)
	struct UProgressBar* PB_Damage; // 0x2B0(0x8)
	struct UProgressBar* PB_Range; // 0x2B8(0x8)
	struct UProgressBar* PB_Precision; // 0x2C0(0x8)
	struct UProgressBar* PB_Recoil; // 0x2C8(0x8)
	struct UProgressBar* PB_Firearms; // 0x2D0(0x8)
	struct UProgressBar* PB_AimingSpeed; // 0x2D8(0x8)
	struct UTextBlock* TB_Ammo; // 0x2E0(0x8)
	struct UTextBlock* TB_Magazine; // 0x2E8(0x8)
};

// Class ProjectD.PDOKCancelPopupUI
// Size : 0x2F8 (Inherited : 0x2B8)
struct UPDOKCancelPopupUI : UPDPopupBaseUI {
	struct UPDTextBlock* Desc; // 0x2B8(0x8)
	struct UPDTextBlock* Desc2; // 0x2C0(0x8)
	struct UPDButton* OKBtn; // 0x2C8(0x8)
	struct UPDButton* CancelBtn; // 0x2D0(0x8)
	unsigned char UnknownData_2D8[0x0020]; // 0x2D8(0x20)
};

// Class ProjectD.PDInvitePartyPopupUI
// Size : 0x310 (Inherited : 0x2F8)
struct UPDInvitePartyPopupUI : UPDOKCancelPopupUI {
	unsigned char UnknownData_2F8[0x0018]; // 0x2F8(0x18)
};

// Class ProjectD.PDItemModel
// Size : 0x2E0 (Inherited : 0x220)
struct APDItemModel : AActor {
	struct TArray<struct UMaterialInstanceDynamic*> ItemBaseMaterials; // 0x220(0x10)
	unsigned char UnknownData_230[0x0050]; // 0x230(0x50)
	struct USceneComponent* EmptySceneComp; // 0x280(0x8)
	struct UStaticMeshComponent* StaticMeshComp; // 0x288(0x8)
	struct UPDSkeletalMeshComponent* SkeletalMeshComp; // 0x290(0x8)
	unsigned char UnknownData_298[0x0048]; // 0x298(0x48)

	void OnBeginOverlapAssistant(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function ProjectD.PDItemModel.OnBeginOverlapAssistant // (Final|Native|Public|HasOutParms) // Param Size : 0xA8, 0x7FF653C6AC60
};

// Class ProjectD.ModelOwner
// Size : 0x28 (Inherited : 0x28)
struct UModelOwner : UObject {
};

// Class ProjectD.PDKeyButton
// Size : 0xDB8 (Inherited : 0xC50)
struct UPDKeyButton : UPDButton {
	struct UPDTextBlock* T_SubText; // 0xC50(0x8)
	struct USizeBox* SB_Btn; // 0xC58(0x8)
	struct FText ControlName; // 0xC60(0x18)
	struct FText InSubText; // 0xC78(0x18)
	struct FSlateFontInfo SubTextFont; // 0xC90(0x50)
	struct FSlateColor NormalSubTextColor; // 0xCE0(0x28)
	struct FSlateColor HoverSubTextColor; // 0xD08(0x28)
	struct FSlateColor PressSubTextColor; // 0xD30(0x28)
	struct FSlateColor DisableSubTextColor; // 0xD58(0x28)
	struct FMargin SubTextMargin; // 0xD80(0x10)
	unsigned char bOverride_WidthOverride : 1; // 0xD90(0x1)
	unsigned char bOverride_HeightOverride : 1; // 0xD90(0x1)
	unsigned char bOverride_MinDesiredWidth : 1; // 0xD90(0x1)
	unsigned char bOverride_MinDesiredHeight : 1; // 0xD90(0x1)
	unsigned char bOverride_MaxDesiredWidth : 1; // 0xD90(0x1)
	unsigned char bOverride_MaxDesiredHeight : 1; // 0xD90(0x1)
	unsigned char bOverride_MinAspectRatio : 1; // 0xD90(0x1)
	unsigned char bOverride_MaxAspectRatio : 1; // 0xD90(0x1)
	unsigned char UnknownData_D91[0x0003]; // 0xD91(0x3)
	float WidthOverride; // 0xD94(0x4)
	float HeightOverride; // 0xD98(0x4)
	float MinDesiredWidth; // 0xD9C(0x4)
	float MinDesiredHeight; // 0xDA0(0x4)
	float MaxDesiredWidth; // 0xDA4(0x4)
	float MaxDesiredHeight; // 0xDA8(0x4)
	float MinAspectRatio; // 0xDAC(0x4)
	float MaxAspectRatio; // 0xDB0(0x4)
	unsigned char UnknownData_DB4[0x0004]; // 0xDB4(0x4)
};

// Class ProjectD.PDKillLogModule
// Size : 0x318 (Inherited : 0x288)
struct UPDKillLogModule : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UPDTextBlock* TB_Attacker; // 0x290(0x8)
	struct UPDTextBlock* TB_Victim; // 0x298(0x8)
	struct UBorder* BD_Attacker; // 0x2A0(0x8)
	struct UImage* IMG_Attacker; // 0x2A8(0x8)
	struct UImage* IMG_Victim; // 0x2B0(0x8)
	struct UBorder* BD_Victim; // 0x2B8(0x8)
	struct UPDTextBlock* T_Dist; // 0x2C0(0x8)
	struct UImage* IMG_Cause; // 0x2C8(0x8)
	struct USizeBox* SB_Cause; // 0x2D0(0x8)
	struct UImage* IMG_HeadShot; // 0x2D8(0x8)
	struct UImage* IMG_Groggy; // 0x2E0(0x8)
	struct UImage* IMG_Death; // 0x2E8(0x8)
	struct UImage* IMG_Assist; // 0x2F0(0x8)
	struct UBorder* BD_Background; // 0x2F8(0x8)
	struct UBorder* BD_PlayerLine; // 0x300(0x8)
	struct UImage* IMG_MainPlayerBG; // 0x308(0x8)
	unsigned char UnknownData_310[0x0008]; // 0x310(0x8)

	void AdjustCauseRatio(); // Function ProjectD.PDKillLogModule.AdjustCauseRatio // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C6ABC0
};

// Class ProjectD.PDKillLogUI
// Size : 0x2A0 (Inherited : 0x290)
struct UPDKillLogUI : UPDIngameModeWidget {
	struct UVerticalBox* VB_LogList; // 0x290(0x8)
	int32_t MaxLogCount; // 0x298(0x4)
	float LogDuration; // 0x29C(0x4)
};

// Class ProjectD.PDKillMessage
// Size : 0x2F8 (Inherited : 0x290)
struct UPDKillMessage : UPDIngameModeWidget {
	unsigned char UnknownData_290[0x0008]; // 0x290(0x8)
	struct UPDTextBlock* TB_KillType; // 0x298(0x8)
	struct UPDTextBlock* TB_UserName; // 0x2A0(0x8)
	struct UImage* IMG_Portrait; // 0x2A8(0x8)
	struct UBorder* BD_TeamColor; // 0x2B0(0x8)
	struct UImage* IMG_Light_BackTop; // 0x2B8(0x8)
	struct UImage* IMG_Light_BackUnder; // 0x2C0(0x8)
	struct UImage* IMG_Light_Front; // 0x2C8(0x8)
	struct UGridPanel* GP_DoubleKill; // 0x2D0(0x8)
	struct UGridPanel* GP_TripleKill; // 0x2D8(0x8)
	struct UGridPanel* GP_QuadraKill; // 0x2E0(0x8)
	struct UGridPanel* GP_PentaKill; // 0x2E8(0x8)
	float KillDefaultDuration; // 0x2F0(0x4)
	unsigned char UnknownData_2F4[0x0004]; // 0x2F4(0x4)
};

// Class ProjectD.PDLeanAnimInstance
// Size : 0x280 (Inherited : 0x280)
struct UPDLeanAnimInstance : UPDAnimInstance {
};

// Class ProjectD.PDLevelStreamingVolume
// Size : 0x290 (Inherited : 0x258)
struct APDLevelStreamingVolume : AVolume {
	struct TArray<struct FString> HiddenLevelNames; // 0x258(0x10)
	struct TArray<struct FString> BeginOverlapConsoleCommands; // 0x268(0x10)
	struct TArray<struct FString> EndOverlapConsoleCommands; // 0x278(0x10)
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
};

// Class ProjectD.PDLineItemModel
// Size : 0x300 (Inherited : 0x2E0)
struct APDLineItemModel : APDItemModel {
	struct USplineComponent* Spline; // 0x2E0(0x8)
	unsigned char UnknownData_2E8[0x0018]; // 0x2E8(0x18)
};

// Class ProjectD.PDLoadingUI
// Size : 0x290 (Inherited : 0x288)
struct UPDLoadingUI : UPDSceneBaseUI {
	struct UPDTextBlock* Loading_Text; // 0x288(0x8)
};

// Class ProjectD.PDLobbyAnimInstance
// Size : 0x360 (Inherited : 0x280)
struct UPDLobbyAnimInstance : UPDAnimInstance {
	struct FPDLobbyAnimData LobbyAnimData; // 0x280(0xD0)
	enum class EPDLobbyAnimStatus LobbyAnimStatus; // 0x350(0x1)
	unsigned char UnknownData_351[0x0003]; // 0x351(0x3)
	int32_t LobbyAnimPlayIndex; // 0x354(0x4)
	int32_t LobbyIdleAnimIndex; // 0x358(0x4)
	enum class EPDLobbyAnimStatus ReserveLobbyAnimStatus; // 0x35C(0x1)
	unsigned char UnknownData_35D[0x0003]; // 0x35D(0x3)
};

// Class ProjectD.PDLobbyAnimNotify
// Size : 0x50 (Inherited : 0x48)
struct UPDLobbyAnimNotify : UPDBaseAnimNotify {
	enum class EPDLobbyAnimStatus LobbyAnimStatus; // 0x48(0x1)
	bool Hair; // 0x49(0x1)
	bool ChangeIdleAnim; // 0x4A(0x1)
	unsigned char UnknownData_4B[0x0005]; // 0x4B(0x5)
};

// Class ProjectD.PDLobbySceneEventActor
// Size : 0x238 (Inherited : 0x220)
struct APDLobbySceneEventActor : AActor {
	enum class ESceneName TargetSceneName; // 0x220(0x1)
	unsigned char UnknownData_221[0x0003]; // 0x221(0x3)
	int32_t TargetAgentIndex; // 0x224(0x4)
	struct TArray<struct FLobbySceneEventData> EventDataArray; // 0x228(0x10)
};

// Class ProjectD.PDLobbyTimelineActor
// Size : 0x238 (Inherited : 0x220)
struct APDLobbyTimelineActor : AActor {
	struct UPDSplineCameraTimelineComponent* SplineCameraTimeline; // 0x220(0x8)
	int32_t TargetCamSplineID; // 0x228(0x4)
	int32_t TargetAgentIndex; // 0x22C(0x4)
	enum class ESceneName TargetSceneName; // 0x230(0x1)
	enum class EPDLobbyAnimStatus TargetAnimStatus; // 0x231(0x1)
	bool TestMode; // 0x232(0x1)
	unsigned char UnknownData_233[0x0005]; // 0x233(0x5)
};

// Class ProjectD.PDLobbyUI
// Size : 0x390 (Inherited : 0x288)
struct UPDLobbyUI : UPDSceneBaseUI {
	struct UPDButton* Btn_DebugLog; // 0x288(0x8)
	struct UPDTabButton* Btn_StartPlay; // 0x290(0x8)
	struct UPDTextBlock* T_NickName; // 0x298(0x8)
	struct UCanvasPanel* CP_MainMenu; // 0x2A0(0x8)
	struct UPDMatchListUI* MatchIDList; // 0x2A8(0x8)
	struct UBorder* BD_MouseEventCover; // 0x2B0(0x8)
	struct UWidgetSwitcher* WS_PlayMatching; // 0x2B8(0x8)
	struct UWidgetSwitcher* WS_PlayBtn; // 0x2C0(0x8)
	struct UPDButton* Btn_Matching_ForceStart; // 0x2C8(0x8)
	struct UPDButton* Btn_Matching_Cancel; // 0x2D0(0x8)
	struct UCanvasPanel* CP_MatchForceStart; // 0x2D8(0x8)
	struct UPDEquipPerkList* EquipPerkList; // 0x2E0(0x8)
	struct UCanvasPanel* CP_PerkList; // 0x2E8(0x8)
	struct UBorder* BD_PerkEventCover; // 0x2F0(0x8)
	struct UCanvasPanel* CP_AddItemMsg; // 0x2F8(0x8)
	struct UPDTextBlock* TB_AddItem; // 0x300(0x8)
	struct UCanvasPanel* CP_Disabled_Reason; // 0x308(0x8)
	struct UPDTextBlock* TB_PlayDisabled; // 0x310(0x8)
	struct UPDButton* Btn_News; // 0x318(0x8)
	struct UPDButton* Btn_Event; // 0x320(0x8)
	struct UPDTextBlock* T_Desc_Cancel; // 0x328(0x8)
	struct UCanvasPanel* CP_MatchIDList; // 0x330(0x8)
	struct UPDMatchModeList* MatchModeList; // 0x338(0x8)
	struct UPDButton* Btn_Training; // 0x340(0x8)
	struct UPDButton* Btn_GameGuide; // 0x348(0x8)
	struct UWidgetSwitcher* WS_QR; // 0x350(0x8)
	struct UPDButton* Btn_Voice; // 0x358(0x8)
	struct UWidgetSwitcher* WS_VoiceState; // 0x360(0x8)
	unsigned char UnknownData_368[0x0028]; // 0x368(0x28)

	void PlayOpenSurvey(); // Function ProjectD.PDLobbyUI.PlayOpenSurvey // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C6B320
	void OnUnHoveredStartPlayBtn(); // Function ProjectD.PDLobbyUI.OnUnHoveredStartPlayBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C6B300
	void OnPlayerStatsClosed(); // Function ProjectD.PDLobbyUI.OnPlayerStatsClosed // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C6B2E0
	void OnHoveredStartPlayBtn(); // Function ProjectD.PDLobbyUI.OnHoveredStartPlayBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C6B140
	void OnClickVoiceBtn(); // Function ProjectD.PDLobbyUI.OnClickVoiceBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C6AF10
	void OnClickTrainingBtn(); // Function ProjectD.PDLobbyUI.OnClickTrainingBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C6AEF0
	void OnClickStartPlayBtn(); // Function ProjectD.PDLobbyUI.OnClickStartPlayBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C6AED0
	void OnClickPlayerStats(); // Function ProjectD.PDLobbyUI.OnClickPlayerStats // (Final|Native|Private) // Param Size : 0x0, 0x7FF6533F7E70
	void OnClickMachingCancel(); // Function ProjectD.PDLobbyUI.OnClickMachingCancel // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C6AE90
	void OnClickForcePlay(); // Function ProjectD.PDLobbyUI.OnClickForcePlay // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C6AE70
	void OnClickDebugLogBtn(); // Function ProjectD.PDLobbyUI.OnClickDebugLogBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF6533F7E70
};

// Class ProjectD.PDLocoClimbAnimInstance
// Size : 0x5F0 (Inherited : 0x5F0)
struct UPDLocoClimbAnimInstance : UPDPlayerAnimInstance {
};

// Class ProjectD.PDLocoDefaultAnimInstance
// Size : 0x5F0 (Inherited : 0x5F0)
struct UPDLocoDefaultAnimInstance : UPDPlayerAnimInstance {
	enum class EPDStartingType StartingType; // 0x5E8(0x1)
	enum class EPDStoppingType StoppingType; // 0x5E9(0x1)
};

// Class ProjectD.PDLoginUI
// Size : 0x320 (Inherited : 0x288)
struct UPDLoginUI : UPDSceneBaseUI {
	unsigned char UnknownData_288[0x0018]; // 0x288(0x18)
	struct UWidget* IMG_Movie; // 0x2A0(0x8)
	struct UCanvasPanel* CP_LoginUI; // 0x2A8(0x8)
	struct UPDButton* Btn_Login; // 0x2B0(0x8)
	struct UEditableTextBox* ET_ID; // 0x2B8(0x8)
	struct UEditableTextBox* ET_PW; // 0x2C0(0x8)
	struct UPDCheckBox* Check_SaveID; // 0x2C8(0x8)
	struct UImage* IMG_SaveID_Bg; // 0x2D0(0x8)
	struct UBorder* BD_Alert; // 0x2D8(0x8)
	struct UPDTextBlock* TB_Alert; // 0x2E0(0x8)
	struct UWidget* WB_PatchNote; // 0x2E8(0x8)
	struct UImage* IMG_BtnDeco; // 0x2F0(0x8)
	struct UCanvasPanel* CP_SaveID; // 0x2F8(0x8)
	struct UMediaPlayer* LoginMediaPlayer; // 0x300(0x8)
	struct FString BgFilePath; // 0x308(0x10)
	float MediaStartDelay; // 0x318(0x4)
	unsigned char UnknownData_31C[0x0004]; // 0x31C(0x4)

	void OnSplashMovieClosed(); // Function ProjectD.PDLoginUI.OnSplashMovieClosed // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF6533F7E70
	void OnInitMediaPlayer(); // Function ProjectD.PDLoginUI.OnInitMediaPlayer // (Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
	void OnClickGameLoginBtn(); // Function ProjectD.PDLoginUI.OnClickGameLoginBtn // (Final|Native|Public) // Param Size : 0x0, 0x7FF653C6E2D0
};

// Class ProjectD.PDMailBoxListItemData
// Size : 0x30 (Inherited : 0x28)
struct UPDMailBoxListItemData : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// Class ProjectD.PDMailBoxListItemUI
// Size : 0x2B8 (Inherited : 0x288)
struct UPDMailBoxListItemUI : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UPDTextBlock* TB_MailTitle; // 0x290(0x8)
	struct UPDTextBlock* TB_MailContent; // 0x298(0x8)
	struct UPDTextBlock* TB_ReceivedDate; // 0x2A0(0x8)
	struct UImage* IMG_MailIcon; // 0x2A8(0x8)
	unsigned char UnknownData_2B0[0x0008]; // 0x2B0(0x8)
};

// Class ProjectD.PDMailItemListSlotUI
// Size : 0x2A0 (Inherited : 0x288)
struct UPDMailItemListSlotUI : UPDUserWidget {
	struct UPDTextBlock* TB_Name; // 0x288(0x8)
	struct UImage* IMG_Item; // 0x290(0x8)
	struct UPDButton* Btn_ItemSlot; // 0x298(0x8)

	void OnUnhoveredItemSlot(); // Function ProjectD.PDMailItemListSlotUI.OnUnhoveredItemSlot // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C6E5F0
	void OnHoveredItemSlot(); // Function ProjectD.PDMailItemListSlotUI.OnHoveredItemSlot // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C6E450
};

// Class ProjectD.PDMailNotificationSlotUI
// Size : 0x2A0 (Inherited : 0x288)
struct UPDMailNotificationSlotUI : UPDUserWidget {
	struct UPDTextBlock* TB_MailContent; // 0x288(0x8)
	struct UPDButton* Btn_NotificationSlot; // 0x290(0x8)
	unsigned char UnknownData_298[0x0008]; // 0x298(0x8)

	void OnClickNotificationSlot(); // Function ProjectD.PDMailNotificationSlotUI.OnClickNotificationSlot // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C6E390
};

// Class ProjectD.PDMailNotificationUI
// Size : 0x298 (Inherited : 0x288)
struct UPDMailNotificationUI : UPDUserWidget {
	struct UVerticalBox* VB_MailNotificationList; // 0x288(0x8)
	int32_t MaxNotiCount; // 0x290(0x4)
	float NotiDuration; // 0x294(0x4)
};

// Class ProjectD.PDMailPopupUI
// Size : 0x2E8 (Inherited : 0x2B8)
struct UPDMailPopupUI : UPDPopupBaseUI {
	struct UCanvasPanel* CP_MailBox; // 0x2B8(0x8)
	struct UPDButton* Btn_MailBoxClose; // 0x2C0(0x8)
	struct UListView* LV_MailList; // 0x2C8(0x8)
	struct UPDImageButton* IMG_Btn_Bg; // 0x2D0(0x8)
	struct UPDMailUI* MailUI; // 0x2D8(0x8)
	unsigned char UnknownData_2E0[0x0008]; // 0x2E0(0x8)

	void OnSelectedMailListItem(struct UPDMailBoxListItemData* InListDataData); // Function ProjectD.PDMailPopupUI.OnSelectedMailListItem // (Final|Native|Protected) // Param Size : 0x8, 0x7FF653C6E550
	void OnScrolledMailListItem(float ItemOffset, float DistanceRemaining); // Function ProjectD.PDMailPopupUI.OnScrolledMailListItem // (Final|Native|Protected) // Param Size : 0x8, 0x7FF653C6E490
	void OnClickMailBoxCloseBtn(); // Function ProjectD.PDMailPopupUI.OnClickMailBoxCloseBtn // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C6E2F0
};

// Class ProjectD.PDMailUI
// Size : 0x2E8 (Inherited : 0x288)
struct UPDMailUI : UPDUserWidget {
	struct UCanvasPanel* CP_Popup; // 0x288(0x8)
	struct UPDTextBlock* TB_MailTitle; // 0x290(0x8)
	struct UPDTextBlock* TB_MailContent; // 0x298(0x8)
	struct UPDButton* Btn_MailClose; // 0x2A0(0x8)
	struct UPDButton* Btn_ReceiveItem; // 0x2A8(0x8)
	struct UPDButton* Btn_DeleteMail; // 0x2B0(0x8)
	struct UImage* IMG_MailIcon; // 0x2B8(0x8)
	struct UHorizontalBox* HB_MailItemList; // 0x2C0(0x8)
	struct UPDTextBlock* TB_ReceivedDate; // 0x2C8(0x8)
	struct UPDTextBlock* TB_ExpireDate; // 0x2D0(0x8)
	struct UScrollBox* SB_MsgScroll; // 0x2D8(0x8)
	unsigned char UnknownData_2E0[0x0008]; // 0x2E0(0x8)

	void OnClickReceiveItemBtn(); // Function ProjectD.PDMailUI.OnClickReceiveItemBtn // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C6E3B0
	void OnClickMailCloseBtn(); // Function ProjectD.PDMailUI.OnClickMailCloseBtn // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C6E310
	void OnClickDeleteMailBtn(); // Function ProjectD.PDMailUI.OnClickDeleteMailBtn // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C6E2B0
	void DeleteMail(int64_t MailSN); // Function ProjectD.PDMailUI.DeleteMail // (Final|Native|Protected) // Param Size : 0x8, 0x7FF653C6E050
};

// Class ProjectD.PDMainPlayerActionComponent
// Size : 0x138 (Inherited : 0x118)
struct UPDMainPlayerActionComponent : UPDActionComponent {
	unsigned char UnknownData_118[0x0020]; // 0x118(0x20)

	bool TryCanActivateAction(enum class EPDCharacterActionType Action, struct FName Event, int64_t Param, enum class EActionReserveOption ReserveOption); // Function ProjectD.PDMainPlayerActionComponent.TryCanActivateAction // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1A, 0x7FF653C6EB30
	bool TryAction(enum class EPDCharacterActionType Action, struct FName Event, int64_t Param, enum class EActionReserveOption ReserveOption); // Function ProjectD.PDMainPlayerActionComponent.TryAction // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1A, 0x7FF653C6E9E0
	void ReserveAction(struct FPDActionExecutionInfo ExecutionInfo); // Function ProjectD.PDMainPlayerActionComponent.ReserveAction // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x20, 0x7FF653C6E940
	void EndAction(enum class EPDCharacterActionType Action); // Function ProjectD.PDMainPlayerActionComponent.EndAction // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF653C6E0D0
	void CancelAction(enum class EPDCharacterActionType Action, struct FName CancelContext); // Function ProjectD.PDMainPlayerActionComponent.CancelAction // (Final|Native|Public|BlueprintCallable) // Param Size : 0xC, 0x7FF653C6DF90
	bool CanActivateAction(enum class EPDCharacterActionType Action, struct FName Event, int64_t Param, bool bBlokingCheck); // Function ProjectD.PDMainPlayerActionComponent.CanActivateAction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1A, 0x7FF653C6DE40
};

// Class ProjectD.PDPlayerCharacter
// Size : 0xAFE0 (Inherited : 0x7F0)
struct APDPlayerCharacter : APDCharacterEntity {
	unsigned char UnknownData_7F0[0x00C8]; // 0x7F0(0xC8)
	struct FPDPlayerAnimDatas PlayerAnimDatas; // 0x8B8(0x5018)
	struct FPDLobbyCharacterAnimData LobbyCharacterAnimData; // 0x58D0(0xD8)
	struct FPDPlayerAnimDatas JuggernautAnimDatas; // 0x59A8(0x5018)
	struct FPDFacialAnimData FacialAnimData; // 0xA9C0(0x3B0)
	struct UStaticMeshComponent* CullCheckerComponent; // 0xAD70(0x8)
	struct UPDActionComponent* PDActionComponent; // 0xAD78(0x8)
	struct UPDStateComponent* PDStateComponent; // 0xAD80(0x8)
	struct UPDWeaponControlComponent* PDWeaponCtrlComponent; // 0xAD88(0x8)
	struct UPhysicalAnimationComponent* PhysicalAnimation; // 0xAD90(0x8)
	struct UStaticMeshComponent* AttachedPropComponent; // 0xAD98(0x8)
	enum class EPDLobbyAnimStatus LobbyAnimStatus; // 0xADA0(0x1)
	unsigned char UnknownData_ADA1[0x0003]; // 0xADA1(0x3)
	int32_t LobbyIdleAnimIndex; // 0xADA4(0x4)
	unsigned char UnknownData_ADA8[0x0080]; // 0xADA8(0x80)
	struct UPDPlayerAnimInstance* BaseAnimInstance; // 0xAE28(0x8)
	struct UPDLocoClimbAnimInstance* LocoClimbSubAnimInstance; // 0xAE30(0x8)
	struct UCapsuleComponent* Bodyfence; // 0xAE38(0x8)
	float AFKChangeTime; // 0xAE40(0x4)
	unsigned char UnknownData_AE44[0x0024]; // 0xAE44(0x24)
	struct UPDPlayerSpringArmComponent* PDPlayerSpringArmComponent; // 0xAE68(0x8)
	struct UCameraComponent* DefaultCamera; // 0xAE70(0x8)
	bool TEST_NoDeathPhysicalAnimation; // 0xAE78(0x1)
	unsigned char UnknownData_AE79[0x0001]; // 0xAE79(0x1)
	bool TEST_NoGroggy; // 0xAE7A(0x1)
	unsigned char UnknownData_AE7B[0x0005]; // 0xAE7B(0x5)
	struct TArray<struct FPDFootstepInfo> Footsteps; // 0xAE80(0x10)
	unsigned char UnknownData_AE90[0x0128]; // 0xAE90(0x128)
	struct TArray<struct UPDDroneSpringArmComponent*> DroneSpringArmList; // 0xAFB8(0x10)
	unsigned char UnknownData_AFC8[0x0018]; // 0xAFC8(0x18)

	void ToggleRagdoll(); // Function ProjectD.PDPlayerCharacter.ToggleRagdoll // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF6533F7E70
	void PlayHitAnim(); // Function ProjectD.PDPlayerCharacter.PlayHitAnim // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF653C77890
	enum class EPDSpecificWeaponAnimset GetCurrentSpecificWeaponAnimset(); // Function ProjectD.PDPlayerCharacter.GetCurrentSpecificWeaponAnimset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF653C77860
	enum class EPDAnimset GetCurrentAnimset(); // Function ProjectD.PDPlayerCharacter.GetCurrentAnimset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF653C77830
};

// Class ProjectD.PDMainPlayerCharacter
// Size : 0xB2D0 (Inherited : 0xAFE0)
struct APDMainPlayerCharacter : APDPlayerCharacter {
	unsigned char UnknownData_AFE0[0x0008]; // 0xAFE0(0x8)
	struct UPDMainPlayerMovementComponent* PlayerMovementComponent; // 0xAFE8(0x8)
	struct UPDMainPlayerSpringArmComponent* PDMainPlayerSpringArmComponent; // 0xAFF0(0x8)
	struct USpringArmComponent* SpringArmComp; // 0xAFF8(0x8)
	struct UCapsuleComponent* SpringArmCapsule; // 0xB000(0x8)
	struct UPDStoppingPowerComponent* StoppingPowerComponent; // 0xB008(0x8)
	struct USphereComponent* UpsideSphereComponent; // 0xB010(0x8)
	unsigned char UnknownData_B018[0x0169]; // 0xB018(0x169)
	enum class None SuppressionLevel; // 0xB181(0x1)
	unsigned char UnknownData_B182[0x0002]; // 0xB182(0x2)
	float RemainingSuppressionTime; // 0xB184(0x4)
	float LastSuppressionTime; // 0xB188(0x4)
	float SuppressionKeepTime; // 0xB18C(0x4)
	float SuppressionDownTime; // 0xB190(0x4)
	float CamBlendExp; // 0xB194(0x4)
	float DeathCamBlendTime; // 0xB198(0x4)
	float aimPosXOffsetLength; // 0xB19C(0x4)
	float aimPosYOffsetLength; // 0xB1A0(0x4)
	float aimPosZOffsetLength; // 0xB1A4(0x4)
	bool bAccurateAimPitch; // 0xB1A8(0x1)
	unsigned char UnknownData_B1A9[0x0007]; // 0xB1A9(0x7)
	struct TArray<class UCameraShake*> CameraShakeClasses; // 0xB1B0(0x10)
	unsigned char UnknownData_B1C0[0x0088]; // 0xB1C0(0x88)
	struct APDMainPlayerCharacterFP* FPCharacter; // 0xB248(0x8)
	unsigned char UnknownData_B250[0x0080]; // 0xB250(0x80)

	void OnUpsideSphereEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function ProjectD.PDMainPlayerCharacter.OnUpsideSphereEndOverlap // (Final|Native|Protected) // Param Size : 0x1C, 0x7FF653C6E800
	void OnUpsideSphereBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function ProjectD.PDMainPlayerCharacter.OnUpsideSphereBeginOverlap // (Final|Native|Protected|HasOutParms) // Param Size : 0xA8, 0x7FF653C6E610
	void HandMeshLoadingComplete(struct TArray<struct TSoftObjectPtr<struct UObject>> Data, int32_t Index); // Function ProjectD.PDMainPlayerCharacter.HandMeshLoadingComplete // (Final|Native|Public|HasOutParms) // Param Size : 0x14, 0x7FF653C6E150
};

// Class ProjectD.PDMainPlayerCharacterFP
// Size : 0x5A0 (Inherited : 0x4C0)
struct APDMainPlayerCharacterFP : ACharacter {
	struct UAnimMontage* CurrentPlayingDrawMontage; // 0x4B8(0x8)
	unsigned char UnknownData_4C8[0x0008]; // 0x4C8(0x8)
	struct UPDPlayerAnimInstanceFPDummy* FPAnimInstance; // 0x4D0(0x8)
	struct APDMainPlayerCharacter* MainPlayerCharacter; // 0x4D8(0x8)
	struct UPDMainPlayerStateComponent* MainPlayerStateComponent; // 0x4E0(0x8)
	struct APDFPWeapon* FPWeapon; // 0x4E8(0x8)
	unsigned char UnknownData_4F0[0x0028]; // 0x4F0(0x28)
	struct UCurveFloat* FPZoomInCameraLocationCurve; // 0x518(0x8)
	struct UCurveFloat* FPZoomInCameraRotationCurve; // 0x520(0x8)
	unsigned char UnknownData_528[0x0010]; // 0x528(0x10)
	struct ACameraActor* ToggleUsingAimChangeActor; // 0x538(0x8)
	struct UCameraComponent* BeginCamera; // 0x540(0x8)
	struct UCameraComponent* EndCamera; // 0x548(0x8)
	float ToggleChangeMaxTime; // 0x550(0x4)
	unsigned char UnknownData_554[0x000C]; // 0x554(0xC)
	struct FTransform WeaponTransform; // 0x560(0x30)
	enum class EPDAimingState CurrentAimingState; // 0x590(0x1)
	unsigned char UnknownData_591[0x000F]; // 0x591(0xF)
};

// Class ProjectD.PDMainPlayerMovementComponent
// Size : 0x850 (Inherited : 0x610)
struct UPDMainPlayerMovementComponent : UCharacterMovementComponent {
	unsigned char UnknownData_610[0x0018]; // 0x610(0x18)
	float MaxRunSpeedCrouched; // 0x628(0x4)
	float MaxSprintSpeedCrouched; // 0x62C(0x4)
	float MaxRunSpeed; // 0x630(0x4)
	float MaxSprintSpeed; // 0x634(0x4)
	float SprintAllowAngle; // 0x638(0x4)
	float SprintClampAngle; // 0x63C(0x4)
	unsigned char UnknownData_640[0x0130]; // 0x640(0x130)
	struct UPDMainPlayerStateComponent* OwnerPDStateComponent; // 0x770(0x8)
	unsigned char UnknownData_778[0x00D8]; // 0x778(0xD8)
};

// Class ProjectD.PDPlayerSpringArmComponent
// Size : 0x680 (Inherited : 0x280)
struct UPDPlayerSpringArmComponent : USpringArmComponent {
	float CameraHitBlendXY; // 0x280(0x4)
	unsigned char UnknownData_284[0x000C]; // 0x284(0xC)
	struct APDPlayerCharacter* pOwnerCharacter; // 0x290(0x8)
	struct UPDStateComponent* pOwnerStateComponent; // 0x298(0x8)
	unsigned char UnknownData_2A0[0x03E0]; // 0x2A0(0x3E0)
};

// Class ProjectD.PDMainPlayerSpringArmComponent
// Size : 0x6A0 (Inherited : 0x680)
struct UPDMainPlayerSpringArmComponent : UPDPlayerSpringArmComponent {
	float CrouchTargetOffsetLagSpeed; // 0x680(0x4)
	float TargetStartOffset; // 0x684(0x4)
	float TraceDistance; // 0x688(0x4)
	float TraceRadius; // 0x68C(0x4)
	float TraceHeight; // 0x690(0x4)
	unsigned char UnknownData_694[0x000C]; // 0x694(0xC)
};

// Class ProjectD.PDStateComponent
// Size : 0x168 (Inherited : 0xB0)
struct UPDStateComponent : UActorComponent {
	unsigned char UnknownData_B0[0x0008]; // 0xB0(0x8)
	struct UPDMainPlayerMovementComponent* OwnerPDMainPlayMovementComponent; // 0xB8(0x8)
	struct APDPlayerCharacter* OwnerPlayer; // 0xC0(0x8)
	struct UPDPlayerAnimInstance* BaseAnimInstance; // 0xC8(0x8)
	unsigned char UnknownData_D0[0x001C]; // 0xD0(0x1C)
	enum class EPDLocoType LocoType; // 0xEC(0x1)
	enum class EPDLocoState LocoState; // 0xED(0x1)
	enum class EPDMovementState MovementState; // 0xEE(0x1)
	enum class EPDStanceState StanceState; // 0xEF(0x1)
	enum class EPDAimingState AimingState; // 0xF0(0x1)
	enum class EPDGaitsState GaitState; // 0xF1(0x1)
	unsigned char UnknownData_F2[0x0002]; // 0xF2(0x2)
	float GaitValue; // 0xF4(0x4)
	float Direction; // 0xF8(0x4)
	float AimPitch; // 0xFC(0x4)
	float AimYaw; // 0x100(0x4)
	float FreeLookYaw; // 0x104(0x4)
	float LeanFB; // 0x108(0x4)
	float LeanLR; // 0x10C(0x4)
	bool bLeftHandedPose; // 0x110(0x1)
	unsigned char UnknownData_111[0x000F]; // 0x111(0xF)
	enum class EPDClimbStanceState ClimbStanceState; // 0x120(0x1)
	enum class EPDThrowStanceState ThrowStanceState; // 0x121(0x1)
	enum class EPDSlideStanceState SlideStanceState; // 0x122(0x1)
	unsigned char UnknownData_123[0x0004]; // 0x123(0x4)
	enum class EPDLeanState LeanState; // 0x127(0x1)
	struct TArray<class UPDStateBase*> StateClassList; // 0x128(0x10)
	unsigned char UnknownData_138[0x0008]; // 0x138(0x8)
	struct UPDStateBase* CurrentState; // 0x140(0x8)
	struct TArray<struct UPDStateBase*> StateList; // 0x148(0x10)
	unsigned char UnknownData_158[0x0010]; // 0x158(0x10)
};

// Class ProjectD.PDMainPlayerStateComponent
// Size : 0x600 (Inherited : 0x168)
struct UPDMainPlayerStateComponent : UPDStateComponent {
	unsigned char UnknownData_168[0x0290]; // 0x168(0x290)
	struct FVector MoveInputAxis; // 0x3F8(0xC)
	bool bMoveInputPressed; // 0x404(0x1)
	enum class EPDInputMoveType InputState; // 0x405(0x1)
	unsigned char UnknownData_406[0x0032]; // 0x406(0x32)
	float CurSpeed; // 0x438(0x4)
	float PreviousSpeed; // 0x43C(0x4)
	float LastInputMoveSpeed; // 0x440(0x4)
	unsigned char UnknownData_444[0x00CC]; // 0x444(0xCC)
	struct APDCharacterEntity* TargetCharacter; // 0x510(0x8)
	unsigned char UnknownData_518[0x001C]; // 0x518(0x1C)
	float StartingFowardAcceleration; // 0x534(0x4)
	float StartingSideAcceleration; // 0x538(0x4)
	float StartingBackAcceleration; // 0x53C(0x4)
	float StartingFowardAcceleration_Crouch; // 0x540(0x4)
	float StartingSideAcceleration_Crouch; // 0x544(0x4)
	float StartingBackAcceleration_Crouch; // 0x548(0x4)
	float StoppingMaxBrakingDeceleration; // 0x54C(0x4)
	float StoppingMinBrakingDeceleration; // 0x550(0x4)
	float StoppingMaxBrakingDeceleration_Crouch; // 0x554(0x4)
	float StoppingMinBrakingDeceleration_Crouch; // 0x558(0x4)
	float RestoreAccelerationDuration; // 0x55C(0x4)
	float RestoreAccelerationDuration_Crouch; // 0x560(0x4)
	float RestoreBrakingDecelerationDuration; // 0x564(0x4)
	float RestoreBrakingDecelerationDuration_Crouch; // 0x568(0x4)
	float CurrentRestoreBrakingDecelerationDuration; // 0x56C(0x4)
	unsigned char UnknownData_570[0x0048]; // 0x570(0x48)
	float AimingIdleTime; // 0x5B8(0x4)
	float AimingIdleLimitPitchAngle; // 0x5BC(0x4)
	float AimingIdleLimitYawAngle; // 0x5C0(0x4)
	unsigned char UnknownData_5C4[0x0004]; // 0x5C4(0x4)
	struct UCurveBase* AimingIdleMoveCurve; // 0x5C8(0x8)
	unsigned char UnknownData_5D0[0x0004]; // 0x5D0(0x4)
	float AimingIdleHoldingMaxTime; // 0x5D4(0x4)
	struct UCurveFloat* AimingIdleHoldingCurve; // 0x5D8(0x8)
	float AimingIdleDelay; // 0x5E0(0x4)
	unsigned char UnknownData_5E4[0x001C]; // 0x5E4(0x1C)
};

// Class ProjectD.PDMarkerGuide
// Size : 0x328 (Inherited : 0x290)
struct UPDMarkerGuide : UPDIngameModeWidget {
	struct UCanvasPanel* CP_Guide; // 0x290(0x8)
	struct UImage* IMG_Line; // 0x298(0x8)
	struct UCanvasPanel* CP_Info; // 0x2A0(0x8)
	struct UHorizontalBox* HB_Key; // 0x2A8(0x8)
	struct UWidgetSwitcher* WS_Key; // 0x2B0(0x8)
	struct UPDTextBlock* TB_Key; // 0x2B8(0x8)
	struct UPDTextBlock* TB_Desc; // 0x2C0(0x8)
	struct UHorizontalBox* HB_Type; // 0x2C8(0x8)
	struct UPDTextBlock* TB_Type; // 0x2D0(0x8)
	struct UPDTextBlock* TB_Distance; // 0x2D8(0x8)
	struct USizeBox* SB_User; // 0x2E0(0x8)
	struct UImage* IMG_UserCode; // 0x2E8(0x8)
	struct UPDTextBlock* TB_UserNum; // 0x2F0(0x8)
	struct UPDTextBlock* TB_UserName; // 0x2F8(0x8)
	struct USizeBox* SB_User_Item; // 0x300(0x8)
	struct UImage* IMG_UserCode_Item; // 0x308(0x8)
	struct UPDTextBlock* TB_UserNum_Item; // 0x310(0x8)
	struct UPDTextBlock* TB_UserName_Item; // 0x318(0x8)
	unsigned char UnknownData_320[0x0008]; // 0x320(0x8)
};

// Class ProjectD.PDMaskedText
// Size : 0x2B0 (Inherited : 0x288)
struct UPDMaskedText : UPDUserWidget {
	struct UCanvasPanel* CP_Left; // 0x288(0x8)
	struct UPDTextBlock* TB_Left; // 0x290(0x8)
	struct UCanvasPanel* CP_Right; // 0x298(0x8)
	struct UPDTextBlock* TB_Right; // 0x2A0(0x8)
	float Width; // 0x2A8(0x4)
	float Percent; // 0x2AC(0x4)
};

// Class ProjectD.PDMatchingUI
// Size : 0x2B0 (Inherited : 0x288)
struct UPDMatchingUI : UPDUserWidget {
	struct UPDTextBlock* TB_Matching; // 0x288(0x8)
	struct UPDTextBlock* TB_Time; // 0x290(0x8)
	struct UPDTextBlock* TB_Desc; // 0x298(0x8)
	unsigned char UnknownData_2A0[0x0010]; // 0x2A0(0x10)
};

// Class ProjectD.PDMatchListItem
// Size : 0x2A0 (Inherited : 0x288)
struct UPDMatchListItem : UPDUserWidget {
	struct UPDButton* Btn_MatchListItem; // 0x288(0x8)
	unsigned char UnknownData_290[0x0010]; // 0x290(0x10)

	void OnClickMatch(); // Function ProjectD.PDMatchListItem.OnClickMatch // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C6E330
};

// Class ProjectD.PDMatchListUI
// Size : 0x290 (Inherited : 0x288)
struct UPDMatchListUI : UPDUserWidget {
	struct UScrollBox* SB_MatchIDList; // 0x288(0x8)
};

// Class ProjectD.PDMatchModeList
// Size : 0x2F8 (Inherited : 0x288)
struct UPDMatchModeList : UPDUserWidget {
	struct UPDButton* Btn_Matching; // 0x288(0x8)
	struct UHorizontalBox* HB_ModeList_3; // 0x290(0x8)
	struct UPDButton* Btn_Matching_FFA; // 0x298(0x8)
	struct UPDButton* Btn_Trainning_01; // 0x2A0(0x8)
	struct UPDButton* Btn_Trainning_02; // 0x2A8(0x8)
	struct UPDButton* Btn_Trainning_03; // 0x2B0(0x8)
	struct UPDButton* Btn_Trainning_04; // 0x2B8(0x8)
	struct UPDButton* Btn_CreateCustom; // 0x2C0(0x8)
	struct UPDButton* Btn_JoinCustom; // 0x2C8(0x8)
	struct UCanvasPanel* CP_Disabled; // 0x2D0(0x8)
	struct UImage* IMG_CreateCustom; // 0x2D8(0x8)
	struct UImage* IMG_JoinCustom; // 0x2E0(0x8)
	struct UWidgetSwitcher* WS_Matching_Case; // 0x2E8(0x8)
	struct UCanvasPanel* CP_MissionScore; // 0x2F0(0x8)

	void OnUnHoveredMatchBtn(); // Function ProjectD.PDMatchModeList.OnUnHoveredMatchBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C6E5D0
	void OnHoveredMatchBtn(); // Function ProjectD.PDMatchModeList.OnHoveredMatchBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C6E470
	void OnClickTrainningWindfarm(); // Function ProjectD.PDMatchModeList.OnClickTrainningWindfarm // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C6E430
	void OnClickTrainningShipyard(); // Function ProjectD.PDMatchModeList.OnClickTrainningShipyard // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C6E410
	void OnClickTrainningDerail(); // Function ProjectD.PDMatchModeList.OnClickTrainningDerail // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C6E3F0
	void OnClickTrainningBridge(); // Function ProjectD.PDMatchModeList.OnClickTrainningBridge // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C6E3D0
	void OnClickMatchFFABtn(); // Function ProjectD.PDMatchModeList.OnClickMatchFFABtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C6E370
	void OnClickMatchBtn(); // Function ProjectD.PDMatchModeList.OnClickMatchBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C6E350
	void OnClickCustomMatchJoin(); // Function ProjectD.PDMatchModeList.OnClickCustomMatchJoin // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C6E290
	void OnClickCustomMatchCreate(); // Function ProjectD.PDMatchModeList.OnClickCustomMatchCreate // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C6E270
};

// Class ProjectD.PDMatchUI
// Size : 0x2E8 (Inherited : 0x288)
struct UPDMatchUI : UPDSceneBaseUI {
	struct UPDTextBlock* T_Tip; // 0x288(0x8)
	struct UPDTextBlock* T_Level; // 0x290(0x8)
	struct UCanvasPanel* CP_Mode; // 0x298(0x8)
	struct UPDTextBlock* T_Mode; // 0x2A0(0x8)
	struct UPDTextBlock* T_Desc_Mode; // 0x2A8(0x8)
	struct UPDTextBlock* T_Timeout; // 0x2B0(0x8)
	struct UWidgetSwitcher* WS_AnimIndicator; // 0x2B8(0x8)
	struct UWidgetSwitcher* WS_SwicherCase; // 0x2C0(0x8)
	struct UWidgetSwitcher* WS_CharacterCase; // 0x2C8(0x8)
	struct UWidgetSwitcher* WS_MapCase; // 0x2D0(0x8)
	unsigned char UnknownData_2D8[0x0010]; // 0x2D8(0x10)
};

// Class ProjectD.PDMathFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UPDMathFunctionLibrary : UBlueprintFunctionLibrary {

	float NormalizeAngle(float Angle); // Function ProjectD.PDMathFunctionLibrary.NormalizeAngle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x8, 0x7FF653C721D0
	float BP_CalcVectorAngle(struct FVector Vector, struct FRotator BaseRotation); // Function ProjectD.PDMathFunctionLibrary.BP_CalcVectorAngle // (Final|Native|Static|Private|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x1C, 0x7FF653C720F0
	float AngleDistance(float Angle1, float Angle2); // Function ProjectD.PDMathFunctionLibrary.AngleDistance // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0xC, 0x7FF653C72030
};

// Class ProjectD.PDMinimapUI
// Size : 0x300 (Inherited : 0x290)
struct UPDMinimapUI : UPDIngameModeWidget {
	struct UPDGameMapModule* GameMap; // 0x290(0x8)
	struct URetainerBox* RB_Map; // 0x298(0x8)
	struct UCanvasPanel* CP_Map; // 0x2A0(0x8)
	struct UPDTextBlock* TB_Time; // 0x2A8(0x8)
	struct UPDTextBlock* TB_Coordinates; // 0x2B0(0x8)
	struct UImage* IMG_Weather; // 0x2B8(0x8)
	struct UCanvasPanel* CP_NewBadge; // 0x2C0(0x8)
	float ExpandScale; // 0x2C8(0x4)
	float ZoomScaleMax; // 0x2CC(0x4)
	float ZoomScaleMin; // 0x2D0(0x4)
	float ZoomScaleStep; // 0x2D4(0x4)
	unsigned char UnknownData_2D8[0x0028]; // 0x2D8(0x28)
};

// Class ProjectD.PDMissionScoreModeUI
// Size : 0x520 (Inherited : 0x4A0)
struct UPDMissionScoreModeUI : UPDBaseModeUI {
	struct UPDSkyViewUI* SkyView; // 0x4A0(0x8)
	struct UPDMissionScoreRoundInfoUI* RoundInfo; // 0x4A8(0x8)
	struct UPDMissionScoreStatusBoard* IngameStatusBoard; // 0x4B0(0x8)
	struct UPDMissionScoreRoundResult* RoundResult; // 0x4B8(0x8)
	unsigned char UnknownData_4C0[0x0060]; // 0x4C0(0x60)
};

// Class ProjectD.PDMissionScorePlayerEntryItem
// Size : 0x370 (Inherited : 0x288)
struct UPDMissionScorePlayerEntryItem : UPDUserWidget {
	struct UPDTextBlock* TB_PlayerName; // 0x288(0x8)
	struct UImage* IMG_AgentIcon; // 0x290(0x8)
	struct UImage* IMG_PlayerBack; // 0x298(0x8)
	struct UBorder* BD_Score; // 0x2A0(0x8)
	struct UProgressBar* PB_Groggy; // 0x2A8(0x8)
	struct UWidgetSwitcher* WS_State; // 0x2B0(0x8)
	struct UPDTextBlock* TB_Score; // 0x2B8(0x8)
	struct UPDTextBlock* TB_AddScore_2; // 0x2C0(0x8)
	struct UPDTextBlock* TB_AddScore_3; // 0x2C8(0x8)
	struct UPDTextBlock* TB_AddScore_4; // 0x2D0(0x8)
	struct UPDTextBlock* TB_AddScore_5; // 0x2D8(0x8)
	struct UPDTextBlock* TB_AddScore_6; // 0x2E0(0x8)
	struct TArray<struct UPDTextBlock*> TB_AddScoreList; // 0x2E8(0x10)
	struct UCanvasPanel* CP_Item_2; // 0x2F8(0x8)
	struct UImage* IMG_Item_2; // 0x300(0x8)
	struct UCanvasPanel* CP_Item_3; // 0x308(0x8)
	struct UImage* IMG_Item_3; // 0x310(0x8)
	struct UCanvasPanel* CP_Item_4; // 0x318(0x8)
	struct UImage* IMG_Item_4; // 0x320(0x8)
	struct UCanvasPanel* CP_Item_5; // 0x328(0x8)
	struct UImage* IMG_Item_5; // 0x330(0x8)
	struct TArray<struct UCanvasPanel*> MissionItemPanelList; // 0x338(0x10)
	struct TArray<struct UImage*> MissionItemImgList; // 0x348(0x10)
	unsigned char UnknownData_358[0x0018]; // 0x358(0x18)
};

// Class ProjectD.PDMissionScoreRoundInfoUI
// Size : 0x300 (Inherited : 0x290)
struct UPDMissionScoreRoundInfoUI : UPDIngameModeWidget {
	struct UPDTextBlock* TB_Round; // 0x290(0x8)
	struct UHorizontalBox* HB_PlayerEntry; // 0x298(0x8)
	unsigned char UnknownData_2A0[0x0060]; // 0x2A0(0x60)
};

// Class ProjectD.PDMissionScoreRoundResult
// Size : 0x328 (Inherited : 0x290)
struct UPDMissionScoreRoundResult : UPDIngameModeWidget {
	struct UPDTextBlock* TB_RoundTitle; // 0x290(0x8)
	struct UHorizontalBox* HB_TopRankRoot; // 0x298(0x8)
	struct TMap<int32_t, struct UPDMSRoundResultTopRank*> TopRankMap; // 0x2A0(0x50)
	struct UVerticalBox* VB_PlayerInfoRoot; // 0x2F0(0x8)
	struct TArray<struct UPDMSRoundResultPlayerInfo*> PlayerInfoList; // 0x2F8(0x10)
	struct UHorizontalBox* HB_RoundRoot; // 0x308(0x8)
	struct TArray<struct UPDResultRoundItemUI*> RoundItemList; // 0x310(0x10)
	unsigned char UnknownData_320[0x0008]; // 0x320(0x8)
};

// Class ProjectD.PDMissionScoreStatusBoard
// Size : 0x2B0 (Inherited : 0x290)
struct UPDMissionScoreStatusBoard : UPDIngameModeWidget {
	struct UVerticalBox* VB_PlayerList; // 0x290(0x8)
	struct UHorizontalBox* HB_Round; // 0x298(0x8)
	unsigned char UnknownData_2A0[0x0010]; // 0x2A0(0x10)
};

// Class ProjectD.PDModelEntity
// Size : 0x368 (Inherited : 0x220)
struct APDModelEntity : AActor {
	unsigned char UnknownData_220[0x0128]; // 0x220(0x128)
	struct TArray<struct UStaticMeshComponent*> StaticMeshCompList; // 0x348(0x10)
	struct USkeletalMeshComponent* SkeletalMeshComp; // 0x358(0x8)
	unsigned char UnknownData_360[0x0008]; // 0x360(0x8)
};

// Class ProjectD.PDWeaponControlComponent
// Size : 0x108 (Inherited : 0xB0)
struct UPDWeaponControlComponent : UActorComponent {
	unsigned char UnknownData_B0[0x0010]; // 0xB0(0x10)
	struct APDPlayerCharacter* OwnerPlayer; // 0xC0(0x8)
	struct APDTutorialNPC* OwnerTutorialNPC; // 0xC8(0x8)
	struct APDCharacterEntity* OwnerEntity; // 0xD0(0x8)
	struct UPDStateComponent* PlayerStateComponent; // 0xD8(0x8)
	unsigned char UnknownData_E0[0x0028]; // 0xE0(0x28)
};

// Class ProjectD.PDMPWeaponControlComponent
// Size : 0x1B0 (Inherited : 0x108)
struct UPDMPWeaponControlComponent : UPDWeaponControlComponent {
	struct APDMainPlayerCharacter* OwnerMainPlayer; // 0x108(0x8)
	struct UPDMainPlayerStateComponent* MainPlayerStateComponent; // 0x110(0x8)
	unsigned char UnknownData_118[0x0098]; // 0x118(0x98)
};

// Class ProjectD.PDStatusBoardPlayerInfoBase
// Size : 0x398 (Inherited : 0x288)
struct UPDStatusBoardPlayerInfoBase : UPDUserWidget {
	struct UWidgetSwitcher* WS_PlayerState; // 0x288(0x8)
	struct UProgressBar* PB_Groggy; // 0x290(0x8)
	struct UPDTextBlock* T_PlayerName; // 0x298(0x8)
	struct UPDTextBlock* T_KillCount; // 0x2A0(0x8)
	struct UPDTextBlock* T_AssistCount; // 0x2A8(0x8)
	struct UPDTextBlock* T_DefenceCount; // 0x2B0(0x8)
	struct UPDTextBlock* T_AttackCount; // 0x2B8(0x8)
	struct UImage* IMG_Ping_01; // 0x2C0(0x8)
	struct UImage* IMG_Ping_02; // 0x2C8(0x8)
	struct UImage* IMG_Ping_03; // 0x2D0(0x8)
	struct UImage* IMG_Ping_04; // 0x2D8(0x8)
	struct UImage* IMG_Ping_05; // 0x2E0(0x8)
	struct UPDButton* BTN_Report; // 0x2E8(0x8)
	struct TArray<struct UImage*> PingImgList; // 0x2F0(0x10)
	struct UImage* IMG_Clan_BG; // 0x300(0x8)
	struct UImage* IMG_Clan; // 0x308(0x8)
	struct UBorder* B_ToggleChat_Line; // 0x310(0x8)
	struct UCheckBox* CB_ChatBlock; // 0x318(0x8)
	struct UBorder* B_TogglePing_Line; // 0x320(0x8)
	struct UCheckBox* CB_PingBlock; // 0x328(0x8)
	struct FSlateColor NormalTextColor; // 0x330(0x28)
	struct FSlateColor DeathTextColor; // 0x358(0x28)
	unsigned char UnknownData_380[0x0018]; // 0x380(0x18)

	void OnTogglePingBlockChanged(bool Val); // Function ProjectD.PDStatusBoardPlayerInfoBase.OnTogglePingBlockChanged // (Final|Native|Protected) // Param Size : 0x1, 0x7FF653C877C0
	void OnToggleChatBlockChanged(bool Val); // Function ProjectD.PDStatusBoardPlayerInfoBase.OnToggleChatBlockChanged // (Final|Native|Protected) // Param Size : 0x1, 0x7FF653C87730
	void OnClicked_BTN_Report(); // Function ProjectD.PDStatusBoardPlayerInfoBase.OnClicked_BTN_Report // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C87670
};

// Class ProjectD.PDMSStatusBoardPlayerInfo
// Size : 0x3B8 (Inherited : 0x398)
struct UPDMSStatusBoardPlayerInfo : UPDStatusBoardPlayerInfoBase {
	struct UImage* IMG_SlotBg_Me; // 0x398(0x8)
	struct UPDTextBlock* T_PlayerRank; // 0x3A0(0x8)
	struct UPDTextBlock* T_Point; // 0x3A8(0x8)
	struct UPDTextBlock* T_MissionCount; // 0x3B0(0x8)
};

// Class ProjectD.PDMSRoundResultPlayerInfo
// Size : 0x3C8 (Inherited : 0x3B8)
struct UPDMSRoundResultPlayerInfo : UPDMSStatusBoardPlayerInfo {
	struct UWidgetSwitcher* WS_Rank; // 0x3B8(0x8)
	struct UPDTextBlock* T_Point_Get; // 0x3C0(0x8)
};

// Class ProjectD.PDMSRoundResultTopRank
// Size : 0x2E0 (Inherited : 0x288)
struct UPDMSRoundResultTopRank : UPDUserWidget {
	struct USizeBox* SB_CharacterIcon; // 0x288(0x8)
	struct UImage* IMG_Portrait; // 0x290(0x8)
	struct UImage* IMG_MainPlayer; // 0x298(0x8)
	struct UImage* IMG_Background; // 0x2A0(0x8)
	struct UWidgetSwitcher* WS_Rank; // 0x2A8(0x8)
	struct UPDTextBlock* TB_Rank; // 0x2B0(0x8)
	struct UCanvasPanel* CP_Label; // 0x2B8(0x8)
	struct UPDTextBlock* TB_Nickname; // 0x2C0(0x8)
	struct UImage* IMG_ClanMarkBG; // 0x2C8(0x8)
	struct UImage* IMG_ClanMarkFG; // 0x2D0(0x8)
	int32_t RankNumber; // 0x2D8(0x4)
	unsigned char UnknownData_2DC[0x0004]; // 0x2DC(0x4)
};

// Class ProjectD.PDMSStatusBoardRoundItem
// Size : 0x2A0 (Inherited : 0x288)
struct UPDMSStatusBoardRoundItem : UPDUserWidget {
	struct UPDTextBlock* T_RoundInfo; // 0x288(0x8)
	struct UWidgetSwitcher* WS_ResultType; // 0x290(0x8)
	struct UImage* IMG_SLotBg; // 0x298(0x8)
};

// Class ProjectD.PDMultiSplineComponent
// Size : 0x510 (Inherited : 0x500)
struct UPDMultiSplineComponent : USplineComponent {
	struct TArray<float> SpeedRateList; // 0x4F8(0x10)
};

// Class ProjectD.PDNameTagUI
// Size : 0x320 (Inherited : 0x2A0)
struct UPDNameTagUI : UPDHUDIconBaseUI {
	struct FSlateColor MyTeamColor; // 0x2A0(0x28)
	struct FSlateColor EnemyTeamColor; // 0x2C8(0x28)
	struct UPDTextBlock* TB_UserName; // 0x2F0(0x8)
	struct UWidgetSwitcher* WS_UserState; // 0x2F8(0x8)
	struct UProgressBar* PB_Health; // 0x300(0x8)
	struct UPDAttackDamageIndicatorUI* AttackDamageIndicator; // 0x308(0x8)
	unsigned char UnknownData_310[0x0010]; // 0x310(0x10)
};

// Class ProjectD.PDNameTagAllyUI
// Size : 0x410 (Inherited : 0x320)
struct UPDNameTagAllyUI : UPDNameTagUI {
	struct UCanvasPanel* CP_InScreen; // 0x320(0x8)
	struct UCanvasPanel* CP_OutScreen; // 0x328(0x8)
	struct UWidgetSwitcher* WS_UserSubState; // 0x330(0x8)
	struct UImage* IMG_UserCode; // 0x338(0x8)
	struct UImage* IMG_Height; // 0x340(0x8)
	struct UPDTextBlock* TB_UserNum; // 0x348(0x8)
	struct USizeBox* SB_StateItem; // 0x350(0x8)
	struct UImage* IMG_StateItem; // 0x358(0x8)
	struct UImage* IMG_StateItem_FX1; // 0x360(0x8)
	struct UImage* IMG_StateItem_FX2; // 0x368(0x8)
	struct UImage* IMG_Bomb; // 0x370(0x8)
	struct UPDArmorGauge* ArmorGauge; // 0x378(0x8)
	struct UPDCircleProgressModule* CPM_Groggy; // 0x380(0x8)
	struct UProgressBar* PB_Groggy; // 0x388(0x8)
	struct UCanvasPanel* CP_SelfRevivalKit; // 0x390(0x8)
	struct UPDCheerMarkFx* CheerFx; // 0x398(0x8)
	struct UBorder* BD_OutArrow; // 0x3A0(0x8)
	struct UImage* IMG_OutArrow; // 0x3A8(0x8)
	struct UImage* IMG_OutDamage; // 0x3B0(0x8)
	struct UPDCircleProgressModule* CPM_OutGroggy; // 0x3B8(0x8)
	struct UImage* IMG_OutGroggy; // 0x3C0(0x8)
	struct UImage* IMG_OutBomb; // 0x3C8(0x8)
	struct UCanvasPanel* CP_Medal; // 0x3D0(0x8)
	struct UImage* IMG_Medal; // 0x3D8(0x8)
	unsigned char UnknownData_3E0[0x0030]; // 0x3E0(0x30)

	void AdjustStateImageRatio(); // Function ProjectD.PDNameTagAllyUI.AdjustStateImageRatio // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C72010
};

// Class ProjectD.PDNameTagEnemyUI
// Size : 0x350 (Inherited : 0x320)
struct UPDNameTagEnemyUI : UPDNameTagUI {
	struct UCanvasPanel* CP_InScreen; // 0x320(0x8)
	struct UCanvasPanel* CP_OutScreen; // 0x328(0x8)
	struct UCanvasPanel* CP_MissionLeptonOwner; // 0x330(0x8)
	struct UCanvasPanel* CP_MissionTarget; // 0x338(0x8)
	unsigned char UnknownData_340[0x0010]; // 0x340(0x10)
};

// Class ProjectD.PDNeutralObject
// Size : 0x328 (Inherited : 0x220)
struct APDNeutralObject : AActor {
	unsigned char UnknownData_220[0x0010]; // 0x220(0x10)
	struct UPDSkeletalMeshComponent* Mesh; // 0x230(0x8)
	unsigned char UnknownData_238[0x00F0]; // 0x238(0xF0)

	void OnAssetsLoaded(struct TArray<struct TSoftObjectPtr<struct UObject>> InAssets); // Function ProjectD.PDNeutralObject.OnAssetsLoaded // (Final|Native|Protected|HasOutParms) // Param Size : 0x10, 0x7FF653C72250
};

// Class ProjectD.PDNeutralObjectGroup
// Size : 0x300 (Inherited : 0x220)
struct APDNeutralObjectGroup : AActor {
	struct TArray<struct FVector> SpawnPoints; // 0x220(0x10)
	unsigned char UnknownData_230[0x0010]; // 0x230(0x10)
	struct TMap<uint64_t, enum class None> SpawnNumByIndex; // 0x240(0x50)
	float PatrollRadius; // 0x290(0x4)
	float EventHeight; // 0x294(0x4)
	float LandableRadius; // 0x298(0x4)
	bool bAutoActive; // 0x29C(0x1)
	bool bDisablePatroll; // 0x29D(0x1)
	bool bShowDebugLines; // 0x29E(0x1)
	unsigned char UnknownData_29F[0x0061]; // 0x29F(0x61)
};

// Class ProjectD.PDNickNameCreateUI
// Size : 0x2B0 (Inherited : 0x288)
struct UPDNickNameCreateUI : UPDSceneBaseUI {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UPDButton* OKBtn; // 0x290(0x8)
	struct UEditableTextBox* ET_NickName; // 0x298(0x8)
	struct UCanvasPanel* CP_Alert; // 0x2A0(0x8)
	struct UPDTextBlock* TB_Alert; // 0x2A8(0x8)

	void OnClickOKBtn(); // Function ProjectD.PDNickNameCreateUI.OnClickOKBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C72330
	void OnChangeText(struct FText InText); // Function ProjectD.PDNickNameCreateUI.OnChangeText // (Final|Native|Private|HasOutParms) // Param Size : 0x18, 0x7FF653C53050
};

// Class ProjectD.PDNotificationAlert
// Size : 0x2C0 (Inherited : 0x288)
struct UPDNotificationAlert : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UCanvasPanel* CP_Alert; // 0x290(0x8)
	struct UPDTextBlock* TB_Text; // 0x298(0x8)
	struct UProgressBar* PB_Alert; // 0x2A0(0x8)
	struct UBorder* BD_Desc; // 0x2A8(0x8)
	struct UPDTextBlock* TB_Desc; // 0x2B0(0x8)
	unsigned char UnknownData_2B8[0x0008]; // 0x2B8(0x8)
};

// Class ProjectD.PDNpc
// Size : 0x7F0 (Inherited : 0x7F0)
struct APDNpc : APDCharacterEntity {
};

// Class ProjectD.PDNPCAnimInstance
// Size : 0x2E0 (Inherited : 0x270)
struct UPDNPCAnimInstance : UAnimInstance {
	struct APDTutorialNPC* Owner; // 0x268(0x8)
	enum class EPDLocoType LocoType; // 0x270(0x1)
	bool bIsRagdoll; // 0x271(0x1)
	struct UAnimMontage* Groggy_Enter_Random_Hit_Head; // 0x278(0x8)
	struct UAnimMontage* Groggy_Enter_Random_Hit_Chest; // 0x280(0x8)
	struct UAnimMontage* Groggy_Enter_Random_Hit_Abdomen; // 0x288(0x8)
	struct UAnimMontage* Groggy_Enter_Random_Hit_LeftLeg; // 0x290(0x8)
	struct UAnimMontage* Groggy_Enter_Random_Hit_RightLeg; // 0x298(0x8)
	struct UAnimMontage* Groggy_Exit; // 0x2A0(0x8)
	struct UAnimMontage* Death_Random; // 0x2A8(0x8)
	struct UAnimMontage* Death_GROGGY_Random; // 0x2B0(0x8)
	struct UAnimMontage* Hit_A; // 0x2B8(0x8)
	struct UAnimMontage* Hit_B; // 0x2C0(0x8)
	struct UAnimMontage* Hit_C; // 0x2C8(0x8)
	unsigned char UnknownData_2D2[0x000E]; // 0x2D2(0xE)
};

// Class ProjectD.PDScreenMarkerInteractive
// Size : 0x2A8 (Inherited : 0x2A0)
struct UPDScreenMarkerInteractive : UPDHUDIconBaseUI {
	unsigned char UnknownData_2A0[0x0008]; // 0x2A0(0x8)
};

// Class ProjectD.PDObjectTagSiteUI
// Size : 0x318 (Inherited : 0x2A8)
struct UPDObjectTagSiteUI : UPDScreenMarkerInteractive {
	struct UImage* IMG_ObjectIcon; // 0x2A8(0x8)
	struct UPDTextBlock* TB_Distance; // 0x2B0(0x8)
	struct UCanvasPanel* CP_OutArrow; // 0x2B8(0x8)
	struct UPDTextBlock* TB_Tag; // 0x2C0(0x8)
	struct UWidgetSwitcher* WS_Type; // 0x2C8(0x8)
	struct UCanvasPanel* CP_Reply; // 0x2D0(0x8)
	struct UPDPingReplyUI* Reply01; // 0x2D8(0x8)
	struct UPDPingReplyUI* Reply02; // 0x2E0(0x8)
	struct UPDPingReplyUI* Reply03; // 0x2E8(0x8)
	struct UPDPingReplyUI* Reply04; // 0x2F0(0x8)
	struct UPDPingReplyUI* Reply05; // 0x2F8(0x8)
	struct TArray<struct UPDPingReplyUI*> ReplyList; // 0x300(0x10)
	unsigned char UnknownData_310[0x0008]; // 0x310(0x8)
};

// Class ProjectD.PDObjectTagUI
// Size : 0x2D0 (Inherited : 0x2A8)
struct UPDObjectTagUI : UPDScreenMarkerInteractive {
	struct UImage* IMG_ObjectIcon; // 0x2A8(0x8)
	struct UPDTextBlock* TB_Distance; // 0x2B0(0x8)
	struct UCanvasPanel* CP_OutArrow; // 0x2B8(0x8)
	unsigned char UnknownData_2C0[0x0010]; // 0x2C0(0x10)
};

// Class ProjectD.PDOptionContent
// Size : 0x3A0 (Inherited : 0x288)
struct UPDOptionContent : UPDUserWidget {
	unsigned char UnknownData_288[0x0010]; // 0x288(0x10)
	struct USizeBox* SB_OptionContents; // 0x298(0x8)
	struct UHorizontalBox* HB_Contents; // 0x2A0(0x8)
	struct UVerticalBox* VB_Image; // 0x2A8(0x8)
	struct UCanvasPanel* CP_ToolTip; // 0x2B0(0x8)
	struct UCanvasPanel* CP_Overlap; // 0x2B8(0x8)
	struct UPDTextBlock* TB_OverlapToolTip; // 0x2C0(0x8)
	struct UPDImage* IMG_OverlapEnable; // 0x2C8(0x8)
	struct UPDImage* IMG_OverlapWarning; // 0x2D0(0x8)
	struct UPDImage* IMG_OverlapWarningToggle; // 0x2D8(0x8)
	struct UWidgetSwitcher* WS_Contents; // 0x2E0(0x8)
	struct UPDComboBox* ComboBoxCtrl; // 0x2E8(0x8)
	struct UPDSlider* SliderCtrl; // 0x2F0(0x8)
	struct UPDInputKeySelector* NewInputKeySelectorCtrl; // 0x2F8(0x8)
	struct UHorizontalBox* HB_ToggleTabs; // 0x300(0x8)
	struct UPDInputKeySelector* NewToggleInputKeySelectorCtrl; // 0x308(0x8)
	struct UPDCheckBox* CheckBoxCtrl; // 0x310(0x8)
	struct UPDTabButton* BaseTabBtn; // 0x318(0x8)
	struct UPDTextBlock* TB_ContentName; // 0x320(0x8)
	struct UHorizontalBox* HB_Tabs; // 0x328(0x8)
	struct UPDButton* OneBtn; // 0x330(0x8)
	struct UBorder* BD_MainImage; // 0x338(0x8)
	struct UImage* Img_Underline; // 0x340(0x8)
	unsigned char UnknownData_348[0x0010]; // 0x348(0x10)
	struct UPDTabButtonGroup* TabBtnGroup; // 0x358(0x8)
	unsigned char UnknownData_360[0x0040]; // 0x360(0x40)

	void OnInputKeySelected(struct FInputChord InInputChord); // Function ProjectD.PDOptionContent.OnInputKeySelected // (Final|Native|Protected) // Param Size : 0x20, 0x7FF653C72350
};

// Class ProjectD.PDOptionPopupUI
// Size : 0x398 (Inherited : 0x2B8)
struct UPDOptionPopupUI : UPDPopupBaseUI {
	struct UPDButton* DefaultBtn; // 0x2B8(0x8)
	struct UPDButton* TabDefaultBtn; // 0x2C0(0x8)
	struct UPDButton* ConfirmBtn; // 0x2C8(0x8)
	struct UPDButton* CancelBtn; // 0x2D0(0x8)
	struct UPDTabButton* DisplaySettingBtn; // 0x2D8(0x8)
	struct UPDTabButton* SoundSettingBtn; // 0x2E0(0x8)
	struct UPDTabButton* ControlSettingBtn; // 0x2E8(0x8)
	struct UPDTabButton* GameplaySettingBtn; // 0x2F0(0x8)
	struct UPDTabButtonGroup* OptionTabBtnGroup; // 0x2F8(0x8)
	struct UWidgetSwitcher* OptionPageSwitcher; // 0x300(0x8)
	struct UPDDisplayOptionUI* DisplayOption; // 0x308(0x8)
	struct UPDSoundOptionUI* SoundOption; // 0x310(0x8)
	struct UPDControlOptionUI* ControlOption; // 0x318(0x8)
	struct UPDGameplayOptionUI* GamePlayOption; // 0x320(0x8)
	struct UPDTextBlock* TB_DisableTooltip; // 0x328(0x8)
	struct UPDImage* IMG_DisableConfirm; // 0x330(0x8)
	struct UHorizontalBox* HB_Ratings; // 0x338(0x8)
	struct TMap<enum class EOptionType, struct UPDOptionUIBase*> OptionPages; // 0x340(0x50)
	unsigned char UnknownData_390[0x0008]; // 0x390(0x8)

	void OnClickTabDefaultButton(); // Function ProjectD.PDOptionPopupUI.OnClickTabDefaultButton // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C75490
	void OnClickSoundButton(); // Function ProjectD.PDOptionPopupUI.OnClickSoundButton // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C75470
	void OnClickGameplayButton(); // Function ProjectD.PDOptionPopupUI.OnClickGameplayButton // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C75390
	void OnClickDisplayButton(); // Function ProjectD.PDOptionPopupUI.OnClickDisplayButton // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C75350
	void OnClickDefaultButton(); // Function ProjectD.PDOptionPopupUI.OnClickDefaultButton // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C75330
	void OnClickControlsButton(); // Function ProjectD.PDOptionPopupUI.OnClickControlsButton // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C75310
	void OnClickConfirmButton(); // Function ProjectD.PDOptionPopupUI.OnClickConfirmButton // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C752F0
	void OnClickCancelButton(); // Function ProjectD.PDOptionPopupUI.OnClickCancelButton // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C752B0
};

// Class ProjectD.PDOutCheatManager
// Size : 0x78 (Inherited : 0x78)
struct UPDOutCheatManager : UCheatManager {

	void UnlockPerk(int32_t ItemIndex); // Function ProjectD.PDOutCheatManager.UnlockPerk // (Final|Exec|Native|Public) // Param Size : 0x4, 0x7FF653C75920
	void MakePenalty(); // Function ProjectD.PDOutCheatManager.MakePenalty // (Final|Exec|Native|Public) // Param Size : 0x0, 0x7FF653C75270
	void EquipPerk(int32_t ItemIndex); // Function ProjectD.PDOutCheatManager.EquipPerk // (Final|Exec|Native|Public) // Param Size : 0x4, 0x7FF653C75150
	void BuyItem(int32_t ProdIndex); // Function ProjectD.PDOutCheatManager.BuyItem // (Final|Exec|Native|Public) // Param Size : 0x4, 0x7FF653C750D0
};

// Class ProjectD.PDOutGameCameraActor
// Size : 0x7C0 (Inherited : 0x7B0)
struct APDOutGameCameraActor : ACameraActor {
	enum class EOutGameCameraType ECameraType; // 0x7B0(0x1)
	unsigned char UnknownData_7B1[0x000F]; // 0x7B1(0xF)
};

// Class ProjectD.PDOutgameCharacterSpawn
// Size : 0x230 (Inherited : 0x220)
struct APDOutgameCharacterSpawn : AActor {
	struct UStaticMeshComponent* StaticMeshComp; // 0x220(0x8)
	enum class EOutgameCharacterSpawnGroup Grouptype; // 0x228(0x1)
	unsigned char UnknownData_229[0x0003]; // 0x229(0x3)
	int32_t Index; // 0x22C(0x4)
};

// Class ProjectD.PDOutGameMode
// Size : 0x2C0 (Inherited : 0x2C0)
struct APDOutGameMode : AGameModeBase {
};

// Class ProjectD.PDOutgamePlayerController
// Size : 0x570 (Inherited : 0x570)
struct APDOutgamePlayerController : APDPlayerController {
};

// Class ProjectD.PDOutGameTopMenu
// Size : 0x458 (Inherited : 0x288)
struct UPDOutGameTopMenu : UPDUserWidget {
	struct UPDButton* BTN_GoToFindPartyPage; // 0x288(0x8)
	struct UWidgetSwitcher* WS_RegisterMercenary; // 0x290(0x8)
	struct UImage* IMG_NewInvite; // 0x298(0x8)
	struct UCanvasPanel* CP_TopMenu; // 0x2A0(0x8)
	struct UCanvasPanel* CP_InfoMenu; // 0x2A8(0x8)
	struct UCanvasPanel* CP_ContextMenu; // 0x2B0(0x8)
	struct UImage* IMG_New; // 0x2B8(0x8)
	struct UPDButton* Btn_Customize; // 0x2C0(0x8)
	struct UPDButton* Btn_AgentReport; // 0x2C8(0x8)
	struct UPDButton* Btn_Record; // 0x2D0(0x8)
	struct UPDButton* Btn_Clan; // 0x2D8(0x8)
	struct UImage* IMG_BtnActiveBar_Customizing; // 0x2E0(0x8)
	struct UImage* IMG_BtnActiveBar_Training; // 0x2E8(0x8)
	struct UImage* IMG_BtnActiveBar_GameGuide; // 0x2F0(0x8)
	struct UImage* IMG_BtnActiveBar_Clan; // 0x2F8(0x8)
	struct UPDButton* Btn_Community; // 0x300(0x8)
	struct UPDButton* Btn_Option; // 0x308(0x8)
	struct UPDButton* Btn_BattlePass; // 0x310(0x8)
	struct UPDButton* Btn_Tutorial; // 0x318(0x8)
	struct UPDButton* Btn_Setting; // 0x320(0x8)
	struct UPDButton* Btn_Exit; // 0x328(0x8)
	struct USizeBox* SB_BattlePass; // 0x330(0x8)
	struct UImage* IMG_SlotDivider_1; // 0x338(0x8)
	struct UPDTextBlock* TB_Money; // 0x340(0x8)
	struct UPDPartySlotListItemUI* PartySlot_2; // 0x348(0x8)
	struct UPDPartySlotListItemUI* PartySlot_3; // 0x350(0x8)
	struct UPDPartySlotListItemUI* PartySlot_4; // 0x358(0x8)
	struct UPDPartySlotListItemUI* PartySlot_5; // 0x360(0x8)
	struct UPDPartySlotListItemUI* PartySlot_6; // 0x368(0x8)
	struct UCanvasPanel* CP_MainMenu; // 0x370(0x8)
	struct UImage* IMG_ClanMarkBG; // 0x378(0x8)
	struct UImage* IMG_ClanMarkFG; // 0x380(0x8)
	struct UPDTextBlock* TB_Name; // 0x388(0x8)
	struct UPDTextBlock* TB_ClanName; // 0x390(0x8)
	struct UHorizontalBox* HB_ClanInfo; // 0x398(0x8)
	struct UCanvasPanel* CP_ClanImg; // 0x3A0(0x8)
	unsigned char UnknownData_3A8[0x0008]; // 0x3A8(0x8)
	struct UHorizontalBox* HB_UserData; // 0x3B0(0x8)
	struct UImage* IMG_Manner; // 0x3B8(0x8)
	struct UImage* IMG_Medal1; // 0x3C0(0x8)
	struct UImage* IMG_Medal2; // 0x3C8(0x8)
	struct UImage* IMG_Medal3; // 0x3D0(0x8)
	struct UCanvasPanel* CP_ToolTip; // 0x3D8(0x8)
	struct UPDTextBlock* TB_DataName; // 0x3E0(0x8)
	struct UPDTextBlock* TB_DataValue; // 0x3E8(0x8)
	struct UPDButton* Btn_MailBox; // 0x3F0(0x8)
	struct UImage* IMG_NewMail; // 0x3F8(0x8)
	struct UPDMailNotificationUI* MailNotificationUI; // 0x400(0x8)
	struct UPDButton* Btn_LeaveParty; // 0x408(0x8)
	struct UCanvasPanel* CP_MannerToolTip; // 0x410(0x8)
	struct UPDTextBlock* TB_PointLevel; // 0x418(0x8)
	struct TArray<struct UPDPartySlotListItemUI*> PartySlotArray; // 0x420(0x10)
	unsigned char UnknownData_430[0x0028]; // 0x430(0x28)

	void SetNewMailLabelVisible(bool bShow); // Function ProjectD.PDOutGameTopMenu.SetNewMailLabelVisible // (Final|Native|Private) // Param Size : 0x1, 0x7FF653C75890
	void SendPartyInviteInfo(bool bAccept, struct FString PartyID, int64_t USN, struct FString Nickname); // Function ProjectD.PDOutGameTopMenu.SendPartyInviteInfo // (Final|Native|Private) // Param Size : 0x30, 0x7FF653C75680
	void SendCustomRoomInviteInfo(bool bAccept); // Function ProjectD.PDOutGameTopMenu.SendCustomRoomInviteInfo // (Final|Native|Private) // Param Size : 0x1, 0x7FF653C755F0
	void QuitGame(); // Function ProjectD.PDOutGameTopMenu.QuitGame // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C755D0
	void OnUnhoverRecordBtn(); // Function ProjectD.PDOutGameTopMenu.OnUnhoverRecordBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C755B0
	void OnUnhoverClanBtn(); // Function ProjectD.PDOutGameTopMenu.OnUnhoverClanBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C75590
	void OnUnhoverAgentReportBtn(); // Function ProjectD.PDOutGameTopMenu.OnUnhoverAgentReportBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C75570
	void OnUnhoverAgentBtn(); // Function ProjectD.PDOutGameTopMenu.OnUnhoverAgentBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C75550
	void OnHoverRecordBtn(); // Function ProjectD.PDOutGameTopMenu.OnHoverRecordBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C75530
	void OnHoverClanBtn(); // Function ProjectD.PDOutGameTopMenu.OnHoverClanBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C75510
	void OnHoverAgentReportBtn(); // Function ProjectD.PDOutGameTopMenu.OnHoverAgentReportBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C754F0
	void OnHoverAgentBtn(); // Function ProjectD.PDOutGameTopMenu.OnHoverAgentBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C754D0
	void OnGuidePageClosed(); // Function ProjectD.PDOutGameTopMenu.OnGuidePageClosed // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C754B0
	void OnClickSettingBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickSettingBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C75450
	void OnClickRecordBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickRecordBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C75430
	void OnClickOptionBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickOptionBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C75410
	void OnClickMailBoxBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickMailBoxBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C753F0
	void OnClickLeavePartyBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickLeavePartyBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C753D0
	void OnClickGoToFindPartyPageButton(); // Function ProjectD.PDOutGameTopMenu.OnClickGoToFindPartyPageButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C753B0
	void OnClickExitBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickExitBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C75370
	void OnClickCommunityBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickCommunityBtn // (Final|Native|Public) // Param Size : 0x0, 0x7FF653C56AD0
	void OnClickClanBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickClanBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C752D0
	void OnClickBattlePassBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickBattlePassBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C75290
	void OnClickAgentReportBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickAgentReportBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF6533F7E70
	void OnClickAgentBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickAgentBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C56730
	void ExitParty(); // Function ProjectD.PDOutGameTopMenu.ExitParty // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C751D0
};

// Class ProjectD.PDOwnLeptonListItemData
// Size : 0x80 (Inherited : 0x28)
struct UPDOwnLeptonListItemData : UObject {
	unsigned char UnknownData_28[0x0058]; // 0x28(0x58)
};

// Class ProjectD.PDOwnLeptonListItem
// Size : 0x328 (Inherited : 0x288)
struct UPDOwnLeptonListItem : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UImage* IMG_Item; // 0x290(0x8)
	struct UImage* IMG_Lock; // 0x298(0x8)
	struct UImage* IMG_New; // 0x2A0(0x8)
	struct UImage* IMG_PermanentIcon; // 0x2A8(0x8)
	struct UCanvasPanel* CP_Unlock; // 0x2B0(0x8)
	struct UPDTextBlock* TB_Name; // 0x2B8(0x8)
	struct UPDTextBlock* TB_Cost; // 0x2C0(0x8)
	struct UBorder* BD_Outline; // 0x2C8(0x8)
	struct UBorder* BD_EquipOutline; // 0x2D0(0x8)
	struct UDragDropOperation* DragDropOperation; // 0x2D8(0x8)
	unsigned char UnknownData_2E0[0x0048]; // 0x2E0(0x48)
};

// Class ProjectD.PDParticleModule_Collision
// Size : 0x198 (Inherited : 0x190)
struct UPDParticleModule_Collision : UParticleModuleCollision {
	float BounceOffsetWhenStuck; // 0x190(0x4)
	unsigned char UnknownData_194[0x0004]; // 0x194(0x4)
};

// Class ProjectD.PDPartySlotListItemUI
// Size : 0x328 (Inherited : 0x288)
struct UPDPartySlotListItemUI : UPDUserWidget {
	unsigned char UnknownData_288[0x0038]; // 0x288(0x38)
	struct UWidgetSwitcher* WS_Leader; // 0x2C0(0x8)
	struct UWidgetSwitcher* WS_SlotState; // 0x2C8(0x8)
	struct UWidgetSwitcher* WS_Voice; // 0x2D0(0x8)
	struct UImage* IMG_Face; // 0x2D8(0x8)
	struct UPDTextBlock* T_Name; // 0x2E0(0x8)
	struct UPDButton* SlotButton; // 0x2E8(0x8)
	struct UImage* IMG_Hover; // 0x2F0(0x8)
	struct UPDTextBlock* T_InviteName; // 0x2F8(0x8)
	unsigned char UnknownData_300[0x0028]; // 0x300(0x28)

	void OnClickSlot(); // Function ProjectD.PDPartySlotListItemUI.OnClickSlot // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C4ADD0
	void KickPartyMember(int64_t InPartyUSN); // Function ProjectD.PDPartySlotListItemUI.KickPartyMember // (Final|Native|Private) // Param Size : 0x8, 0x7FF653C751F0
};

// Class ProjectD.PDPathMeshActor
// Size : 0x288 (Inherited : 0x220)
struct APDPathMeshActor : AActor {
	unsigned char UnknownData_220[0x0068]; // 0x220(0x68)
};

// Class ProjectD.PDPerkEntryItem
// Size : 0x2F8 (Inherited : 0x288)
struct UPDPerkEntryItem : UPDUserWidget {
	struct UImage* IMG_Icon; // 0x288(0x8)
	struct UPDTextBlock* TB_Name; // 0x290(0x8)
	struct UPDCircleProgress* PDCP_ActiveTime; // 0x298(0x8)
	struct UPDCircleProgress* PDCP_Cooltime; // 0x2A0(0x8)
	struct UBorder* BD_Ready; // 0x2A8(0x8)
	struct UBorder* BD_Stack; // 0x2B0(0x8)
	struct UPDTextBlock* TB_Num; // 0x2B8(0x8)
	struct UBorder* BD_PerkKey; // 0x2C0(0x8)
	struct UPDTextBlock* TB_Key; // 0x2C8(0x8)
	struct UPDTextBlock* TB_CoolTime; // 0x2D0(0x8)
	unsigned char UnknownData_2D8[0x0020]; // 0x2D8(0x20)
};

// Class ProjectD.PDPerkNotifySlot
// Size : 0x2A8 (Inherited : 0x288)
struct UPDPerkNotifySlot : UPDUserWidget {
	struct UPDTextBlock* TB_Message; // 0x288(0x8)
	unsigned char UnknownData_290[0x0018]; // 0x290(0x18)
};

// Class ProjectD.PDPerkNotifyUI
// Size : 0x2C8 (Inherited : 0x290)
struct UPDPerkNotifyUI : UPDIngameModeWidget {
	struct UVerticalBox* HB_PerkNotifyContainer; // 0x290(0x8)
	struct UImage* IMG_Icon; // 0x298(0x8)
	struct FMargin SlotPadding; // 0x2A0(0x10)
	int32_t MaxSlotCount; // 0x2B0(0x4)
	float DefaultDuration; // 0x2B4(0x4)
	unsigned char UnknownData_2B8[0x0010]; // 0x2B8(0x10)
};

// Class ProjectD.PDPerkTooltipItemData
// Size : 0x30 (Inherited : 0x28)
struct UPDPerkTooltipItemData : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// Class ProjectD.PDPerkTooltipItem
// Size : 0x2B8 (Inherited : 0x288)
struct UPDPerkTooltipItem : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UImage* IMG_DescIcon; // 0x290(0x8)
	struct UPDTextBlock* T_PerkName; // 0x298(0x8)
	struct UPDTextBlock* T_PerkDesc; // 0x2A0(0x8)
	struct UCanvasPanel* CP_Empty; // 0x2A8(0x8)
	struct UCanvasPanel* CP_Normal; // 0x2B0(0x8)
};

// Class ProjectD.PDPerkUI
// Size : 0x3E8 (Inherited : 0x290)
struct UPDPerkUI : UPDIngameModeWidget {
	struct UImage* IMG_Icon; // 0x290(0x8)
	struct UPDTextBlock* TB_PerkAlert; // 0x298(0x8)
	struct UPDTextBlock* TB_PerkDesc; // 0x2A0(0x8)
	struct UHorizontalBox* HB_PerkAlert; // 0x2A8(0x8)
	struct UHorizontalBox* HB_PerkContainer; // 0x2B0(0x8)
	float PerkDetailPadding; // 0x2B8(0x4)
	unsigned char UnknownData_2BC[0x0004]; // 0x2BC(0x4)
	struct UHorizontalBox* HB_Signature; // 0x2C0(0x8)
	struct UPDTextBlock* TB_SignatureDesc; // 0x2C8(0x8)
	struct UCanvasPanel* CP_SIG_Key; // 0x2D0(0x8)
	struct UPDTextBlock* TB_SIG_KeyName; // 0x2D8(0x8)
	struct USizeBox* SB_Mouse; // 0x2E0(0x8)
	struct UWidgetSwitcher* WS_Mouse; // 0x2E8(0x8)
	struct UCanvasPanel* CP_Buff01; // 0x2F0(0x8)
	struct UCanvasPanel* CP_Buff02; // 0x2F8(0x8)
	struct UCanvasPanel* CP_Buff03; // 0x300(0x8)
	struct UCanvasPanel* CP_Buff04; // 0x308(0x8)
	struct UCanvasPanel* CP_Buff05; // 0x310(0x8)
	struct UCanvasPanel* CP_Buff06; // 0x318(0x8)
	unsigned char UnknownData_320[0x0010]; // 0x320(0x10)
	struct UImage* IMG_BIcon01; // 0x330(0x8)
	struct UImage* IMG_BIcon02; // 0x338(0x8)
	struct UImage* IMG_BIcon03; // 0x340(0x8)
	struct UImage* IMG_BIcon04; // 0x348(0x8)
	struct UImage* IMG_BIcon05; // 0x350(0x8)
	struct UImage* IMG_BIcon06; // 0x358(0x8)
	struct TArray<struct UImage*> CP_BuffIMGList; // 0x360(0x10)
	unsigned char UnknownData_370[0x0050]; // 0x370(0x50)
	struct TArray<struct UPDPerkEntryItem*> PerkEntryItems; // 0x3C0(0x10)
	unsigned char UnknownData_3D0[0x0018]; // 0x3D0(0x18)
};

// Class ProjectD.PDPersonalMissionModule
// Size : 0x388 (Inherited : 0x288)
struct UPDPersonalMissionModule : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct FSlateColor MissionClearColor; // 0x290(0x28)
	struct FSlateColor MissionFailColor; // 0x2B8(0x28)
	struct FSlateColor MissionErrorColor; // 0x2E0(0x28)
	struct UProgressBar* PB_MissionTimer; // 0x308(0x8)
	struct UCanvasPanel* CP_MissionInfo; // 0x310(0x8)
	struct UPDTextBlock* TB_StateTitle; // 0x318(0x8)
	struct UPDTextBlock* TB_StateDesc; // 0x320(0x8)
	struct UCanvasPanel* CP_StateInfo; // 0x328(0x8)
	struct UPDTextBlock* TB_MissionCount; // 0x330(0x8)
	struct UPDTextBlock* TB_MissionDesc; // 0x338(0x8)
	struct UPDTextBlock* TB_MissionTime; // 0x340(0x8)
	struct UHorizontalBox* HB_RewardItem; // 0x348(0x8)
	unsigned char UnknownData_350[0x0038]; // 0x350(0x38)
};

// Class ProjectD.PDPersonalMissionRewardModule
// Size : 0x2A8 (Inherited : 0x288)
struct UPDPersonalMissionRewardModule : UPDUserWidget {
	struct UCanvasPanel* CP_RewardCoin; // 0x288(0x8)
	struct UCanvasPanel* CP_RewardScore; // 0x290(0x8)
	struct UImage* IMG_RewardItem; // 0x298(0x8)
	struct UPDTextBlock* TB_RewardText; // 0x2A0(0x8)
};

// Class ProjectD.PDPersonalMissionUI
// Size : 0x2B0 (Inherited : 0x290)
struct UPDPersonalMissionUI : UPDIngameModeWidget {
	struct UVerticalBox* VB_MissionList; // 0x290(0x8)
	enum class EHorizontalAlignment MissionHAlign; // 0x298(0x1)
	unsigned char UnknownData_299[0x0003]; // 0x299(0x3)
	struct FMargin MissionPadding; // 0x29C(0x10)
	unsigned char UnknownData_2AC[0x0004]; // 0x2AC(0x4)
};

// Class ProjectD.PDPhysicalAnimationNotifyState
// Size : 0x30 (Inherited : 0x30)
struct UPDPhysicalAnimationNotifyState : UAnimNotifyState {
};

// Class ProjectD.PDPingIndicatorUI
// Size : 0x350 (Inherited : 0x2A8)
struct UPDPingIndicatorUI : UPDScreenMarkerInteractive {
	struct UCanvasPanel* CP_Normal; // 0x2A8(0x8)
	struct UImage* IMG_Icon; // 0x2B0(0x8)
	struct UImage* IMG_IconFx; // 0x2B8(0x8)
	struct UImage* IMG_Pole; // 0x2C0(0x8)
	struct UImage* IMG_Point; // 0x2C8(0x8)
	struct UCanvasPanel* CP_Info; // 0x2D0(0x8)
	struct UCanvasPanel* CP_Item; // 0x2D8(0x8)
	struct UImage* IMG_Item; // 0x2E0(0x8)
	struct UScaleBox* SB_Weapon; // 0x2E8(0x8)
	struct UImage* IMG_Weapon; // 0x2F0(0x8)
	struct USizeBox* SB_ItemFx; // 0x2F8(0x8)
	struct UScaleBox* SB_WeaponFx; // 0x300(0x8)
	struct UImage* IMG_ItemFx; // 0x308(0x8)
	struct UCanvasPanel* CP_OutArrow; // 0x310(0x8)
	struct UBorder* BD_Distance; // 0x318(0x8)
	struct UPDTextBlock* TB_Distance; // 0x320(0x8)
	struct UBorder* BD_UserColor; // 0x328(0x8)
	struct UPDTextBlock* TB_UserNum; // 0x330(0x8)
	unsigned char UnknownData_338[0x0018]; // 0x338(0x18)
};

// Class ProjectD.PDPingLog
// Size : 0x2C8 (Inherited : 0x290)
struct UPDPingLog : UPDIngameModeWidget {
	unsigned char UnknownData_290[0x0008]; // 0x290(0x8)
	struct UVerticalBox* VB_LogList; // 0x298(0x8)
	enum class EHorizontalAlignment LogHAlign; // 0x2A0(0x1)
	unsigned char UnknownData_2A1[0x0003]; // 0x2A1(0x3)
	struct FMargin LogPadding; // 0x2A4(0x10)
	bool InvertToAdd; // 0x2B4(0x1)
	unsigned char UnknownData_2B5[0x0003]; // 0x2B5(0x3)
	int32_t MaxLogCount; // 0x2B8(0x4)
	float DefaultDuration; // 0x2BC(0x4)
	bool AutoRemove; // 0x2C0(0x1)
	unsigned char UnknownData_2C1[0x0007]; // 0x2C1(0x7)
};

// Class ProjectD.PDPingLogItem
// Size : 0x2A0 (Inherited : 0x288)
struct UPDPingLogItem : UPDUserWidget {
	struct URichTextBlock* RTB_Content; // 0x288(0x8)
	struct UBorder* BD_Background; // 0x290(0x8)
	unsigned char UnknownData_298[0x0008]; // 0x298(0x8)
};

// Class ProjectD.PDPingReplyUI
// Size : 0x2A0 (Inherited : 0x288)
struct UPDPingReplyUI : UPDUserWidget {
	struct UImage* IMG_Mark; // 0x288(0x8)
	struct UImage* IMG_Mark_FX; // 0x290(0x8)
	struct UCanvasPanel* CP_Fx; // 0x298(0x8)
};

// Class ProjectD.PDPlayerAnimInstanceFPDummy
// Size : 0x580 (Inherited : 0x270)
struct UPDPlayerAnimInstanceFPDummy : UAnimInstance {
	struct FPDPWUsingInABPAnimDatas PWAnimDatas; // 0x268(0x128)
	struct FPDPCUsingInABPAnimDatas PCAnimDatas; // 0x390(0x60)
	enum class EPDAnimset AnimSet; // 0x3F0(0x1)
	enum class EPDLocoState LocoState; // 0x3F1(0x1)
	enum class EPDMovementState MovementState; // 0x3F2(0x1)
	enum class EPDStanceState StanceState; // 0x3F3(0x1)
	float GaitValue; // 0x3F4(0x4)
	float Direction; // 0x3F8(0x4)
	struct FRotator ControllRotation; // 0x3FC(0xC)
	struct FVector ControllLocation; // 0x408(0xC)
	struct FRotator WeaponRotation; // 0x414(0xC)
	struct FVector WeaponAddOffset; // 0x420(0xC)
	struct FRotator LeanRotationOffset; // 0x42C(0xC)
	struct FRotator CameraLeanRotationOffset; // 0x438(0xC)
	struct FVector R_Translate; // 0x444(0xC)
	float DefaultRBoneYOffset; // 0x450(0x4)
	bool bAimingIdleHolding; // 0x454(0x1)
	struct APDPlayerCharacter* OwnerPlayerCharacter; // 0x458(0x8)
	struct UPDStateComponent* OwnerStateComponent; // 0x460(0x8)
	bool bDrawWeaponMontagePlayed; // 0x468(0x1)
	unsigned char UnknownData_46E[0x0002]; // 0x46E(0x2)
	struct UBlendSpace* FireAnim; // 0x470(0x8)
	struct UPDFireRecoilLevel* FireRecoilLevel; // 0x478(0x8)
	struct UPDFireRecoilLevelData* RecoilData; // 0x480(0x8)
	unsigned char UnknownData_488[0x0008]; // 0x488(0x8)
	float LeanBlendMaxTime; // 0x490(0x4)
	struct FVector LeanOffset; // 0x494(0xC)
	float LeanWeaponAngle; // 0x4A0(0x4)
	float LeanCameraAngle; // 0x4A4(0x4)
	struct UCurveBase* LeanOffsetCurve; // 0x4A8(0x8)
	struct UCurveFloat* LeanWeaponCurve; // 0x4B0(0x8)
	struct UCurveFloat* LeanCameraCurve; // 0x4B8(0x8)
	unsigned char UnknownData_4C0[0x0048]; // 0x4C0(0x48)
	float WeaponRollAtMove_Angle; // 0x508(0x4)
	unsigned char UnknownData_50C[0x0004]; // 0x50C(0x4)
	struct UCurveFloat* WeaponRollAtMove_InCurve; // 0x510(0x8)
	struct UCurveFloat* WeaponRollAtMove_OutCurve; // 0x518(0x8)
	float WeaponRollAtMove_InTime; // 0x520(0x4)
	float WeaponRollAtMove_OutTime; // 0x524(0x4)
	struct UCurveFloat* WeaponRollAtMove_CurrCurve; // 0x528(0x8)
	unsigned char UnknownData_530[0x0018]; // 0x530(0x18)
	struct FVector StoppingPowerLocation; // 0x548(0xC)
	struct FRotator StoppingPowerRotation; // 0x554(0xC)
	struct FRotator StoppingPowerRotationWeapon; // 0x560(0xC)
	unsigned char UnknownData_56C[0x0014]; // 0x56C(0x14)
};

// Class ProjectD.PDPlayerCheer
// Size : 0x320 (Inherited : 0x288)
struct UPDPlayerCheer : UPDUserWidget {
	struct UCanvasPanel* CP_Cheer1; // 0x288(0x8)
	struct UCanvasPanel* CP_Cheer2; // 0x290(0x8)
	struct UCanvasPanel* CP_Cheer3; // 0x298(0x8)
	struct UPDTextBlock* TB_CheerCount1; // 0x2A0(0x8)
	struct UPDTextBlock* TB_CheerCount2; // 0x2A8(0x8)
	struct UPDTextBlock* TB_CheerCount3; // 0x2B0(0x8)
	struct UPDTextBlock* TB_CheerCount1_2; // 0x2B8(0x8)
	struct UPDTextBlock* TB_CheerCount2_2; // 0x2C0(0x8)
	struct UPDTextBlock* TB_CheerCount3_2; // 0x2C8(0x8)
	unsigned char UnknownData_2D0[0x0050]; // 0x2D0(0x50)
};

// Class ProjectD.PDPlayerEntryItemBaseUI
// Size : 0x2C8 (Inherited : 0x288)
struct UPDPlayerEntryItemBaseUI : UPDUserWidget {
	struct UPDTextBlock* TB_PlayerName; // 0x288(0x8)
	struct UImage* IMG_AgentIcon; // 0x290(0x8)
	struct UImage* IMG_PlayerBack; // 0x298(0x8)
	struct UProgressBar* PB_Groggy; // 0x2A0(0x8)
	struct UWidgetSwitcher* WS_State; // 0x2A8(0x8)
	unsigned char UnknownData_2B0[0x0018]; // 0x2B0(0x18)
};

// Class ProjectD.PDPlayerEntryItemAllyUI
// Size : 0x300 (Inherited : 0x2C8)
struct UPDPlayerEntryItemAllyUI : UPDPlayerEntryItemBaseUI {
	struct UPDTextBlock* TB_UserNum; // 0x2C8(0x8)
	struct UProgressBar* PB_Health; // 0x2D0(0x8)
	struct UImage* IMG_State; // 0x2D8(0x8)
	struct UWidgetSwitcher* WS_Voice; // 0x2E0(0x8)
	struct UPDPingIndicatorUI* PingState; // 0x2E8(0x8)
	unsigned char UnknownData_2F0[0x0010]; // 0x2F0(0x10)
};

// Class ProjectD.PDPlayerEntryItemEnemyUI
// Size : 0x2C8 (Inherited : 0x2C8)
struct UPDPlayerEntryItemEnemyUI : UPDPlayerEntryItemBaseUI {
};

// Class ProjectD.PDPlayerEquipmentDetail
// Size : 0x328 (Inherited : 0x288)
struct UPDPlayerEquipmentDetail : UPDUserWidget {
	struct UPDTextBlock* TB_Num_Active; // 0x288(0x8)
	struct UPDTextBlock* TB_ItemName; // 0x290(0x8)
	struct UImage* IMG_Logo; // 0x298(0x8)
	struct UImage* IMG_Icon_ActiveWp; // 0x2A0(0x8)
	struct UImage* IMG_Icon_ActiveMelee; // 0x2A8(0x8)
	struct UImage* IMG_Icon_ActiveSub; // 0x2B0(0x8)
	struct USizeBox* SB_ActiveMain; // 0x2B8(0x8)
	struct USizeBox* SB_ActiveSub; // 0x2C0(0x8)
	struct UPDTextBlock* TB_CurrentCount; // 0x2C8(0x8)
	struct UPDTextBlock* TB_TotalCount; // 0x2D0(0x8)
	struct UPDTextBlock* TB_FireMode; // 0x2D8(0x8)
	struct UHorizontalBox* HB_Count; // 0x2E0(0x8)
	struct UHorizontalBox* HB_FireMode; // 0x2E8(0x8)
	struct UHorizontalBox* HB_Juggernaut; // 0x2F0(0x8)
	struct UPDTextBlock* TB_Num_Active_2; // 0x2F8(0x8)
	struct URetainerBox* RB_Progress; // 0x300(0x8)
	struct UImage* IMG_Progress; // 0x308(0x8)
	unsigned char UnknownData_310[0x0018]; // 0x310(0x18)
};

// Class ProjectD.PDPlayerEquipmentSlotBase
// Size : 0x2F0 (Inherited : 0x288)
struct UPDPlayerEquipmentSlotBase : UPDUserWidget {
	struct UWidgetSwitcher* WS_State; // 0x288(0x8)
	struct UBorder* BD_Interaction; // 0x290(0x8)
	struct UImage* IMG_BasicBack; // 0x298(0x8)
	struct UPDTextBlock* TB_Num_Empty; // 0x2A0(0x8)
	struct UPDTextBlock* TB_Num; // 0x2A8(0x8)
	struct UImage* IMG_Icon_Wp; // 0x2B0(0x8)
	struct UImage* IMG_Icon_Sub; // 0x2B8(0x8)
	struct UHorizontalBox* HB_Count; // 0x2C0(0x8)
	struct UPDTextBlock* TB_Current; // 0x2C8(0x8)
	struct UPDTextBlock* TB_Total; // 0x2D0(0x8)
	struct UPDTextBlock* TB_ItemName; // 0x2D8(0x8)
	unsigned char UnknownData_2E0[0x0010]; // 0x2E0(0x10)
};

// Class ProjectD.PDPlayerEquipmentSlot
// Size : 0x378 (Inherited : 0x2F0)
struct UPDPlayerEquipmentSlot : UPDPlayerEquipmentSlotBase {
	struct UPDTextBlock* TB_Num_Active; // 0x2F0(0x8)
	struct UImage* IMG_Logo; // 0x2F8(0x8)
	struct UImage* IMG_Icon_ActiveWp; // 0x300(0x8)
	struct UImage* IMG_Icon_ActiveMelee; // 0x308(0x8)
	struct UImage* IMG_Icon_ActiveSub; // 0x310(0x8)
	struct USizeBox* SB_ActiveMain; // 0x318(0x8)
	struct USizeBox* SB_ActiveSub; // 0x320(0x8)
	struct UPDTextBlock* TB_CurrentRounds; // 0x328(0x8)
	struct UPDTextBlock* TB_TotalRounds; // 0x330(0x8)
	struct UPDTextBlock* TB_FireMode; // 0x338(0x8)
	struct UPDTextBlock* TB_StackCount; // 0x340(0x8)
	struct UHorizontalBox* HB_FireMode; // 0x348(0x8)
	struct UHorizontalBox* HB_AimMode; // 0x350(0x8)
	struct UProgressBar* PB_Progress_Wp; // 0x358(0x8)
	struct UProgressBar* PB_Progress_Sub; // 0x360(0x8)
	unsigned char UnknownData_368[0x0010]; // 0x368(0x10)
};

// Class ProjectD.PDPlayerEquipmentSlotMulti
// Size : 0x380 (Inherited : 0x2F0)
struct UPDPlayerEquipmentSlotMulti : UPDPlayerEquipmentSlotBase {
	struct UImage* IMG_Icon_Sub2; // 0x2F0(0x8)
	struct UHorizontalBox* HB_Count2; // 0x2F8(0x8)
	struct UPDTextBlock* TB_Current2; // 0x300(0x8)
	struct UPDTextBlock* TB_Total2; // 0x308(0x8)
	struct UCanvasPanel* CP_Equip1; // 0x310(0x8)
	struct UCanvasPanel* CP_Equip2; // 0x318(0x8)
	struct UUniformGridPanel* UGP_Selected1; // 0x320(0x8)
	struct UUniformGridPanel* UGP_Selected2; // 0x328(0x8)
	unsigned char UnknownData_330[0x0050]; // 0x330(0x50)
};

// Class ProjectD.PDPlayerInfoUI
// Size : 0x470 (Inherited : 0x290)
struct UPDPlayerInfoUI : UPDIngameModeWidget {
	struct UCanvasPanel* HPBox; // 0x290(0x8)
	struct UProgressBar* PB_Health; // 0x298(0x8)
	struct UProgressBar* PB_Health_Expect; // 0x2A0(0x8)
	struct UProgressBar* PB_Health_Inc; // 0x2A8(0x8)
	struct UProgressBar* PB_Health_Dec; // 0x2B0(0x8)
	struct UPDTextBlock* TB_Health; // 0x2B8(0x8)
	struct UPDTextBlock* TB_TotalHealth; // 0x2C0(0x8)
	struct UPDTextBlock* TB_Health_w; // 0x2C8(0x8)
	struct UPDTextBlock* TB_TotalHealth_w; // 0x2D0(0x8)
	struct UCanvasPanel* CP_BlackMask; // 0x2D8(0x8)
	struct UCanvasPanel* CP_WhiteMask; // 0x2E0(0x8)
	struct FVector2D HealthSize; // 0x2E8(0x8)
	unsigned char UnknownData_2F0[0x0018]; // 0x2F0(0x18)
	struct UPDPlayerCheer* PlayerCheer; // 0x308(0x8)
	struct USizeBox* SB_DM; // 0x310(0x8)
	struct UImage* IMG_BombIcon; // 0x318(0x8)
	struct UCanvasPanel* CP_Juggernaut; // 0x320(0x8)
	struct UCanvasPanel* CP_ActiveJuggernaut; // 0x328(0x8)
	struct UCanvasPanel* CP_InactiveJuggernaut; // 0x330(0x8)
	struct UImage* IM_Juggernaut; // 0x338(0x8)
	struct UImage* IM_Exosuit; // 0x340(0x8)
	struct UPDTextBlock* TB_ActiveJuggernaut; // 0x348(0x8)
	struct UPDTextBlock* TB_InactiveJuggernaut; // 0x350(0x8)
	struct UPDPlayerEquipmentDetail* EquipmentDetail; // 0x358(0x8)
	struct UPDPlayerEquipmentSlotBase* ES_Slot01; // 0x360(0x8)
	struct UPDPlayerEquipmentSlotBase* ES_Slot02; // 0x368(0x8)
	struct UPDPlayerEquipmentSlotBase* ES_Slot03; // 0x370(0x8)
	struct UPDPlayerEquipmentSlotBase* ES_Slot04; // 0x378(0x8)
	struct UPDPlayerEquipmentSlotBase* ES_Slot05; // 0x380(0x8)
	struct UPDPlayerEquipmentSlotBase* ES_Slot06; // 0x388(0x8)
	struct UPDPlayerEquipmentSlotBase* ES_Slot07; // 0x390(0x8)
	struct UPDPlayerEquipmentSlotBase* ES_Slot08; // 0x398(0x8)
	struct UPDPlayerEquipmentSlotBase* ES_SlotMelee; // 0x3A0(0x8)
	struct UPDPlayerEquipmentSlotBase* ES_SlotThrowable; // 0x3A8(0x8)
	struct UCanvasPanel* CP_EquipmentSlide; // 0x3B0(0x8)
	struct USpacer* SP_EquipLeft; // 0x3B8(0x8)
	struct USpacer* SP_EquipRight; // 0x3C0(0x8)
	unsigned char UnknownData_3C8[0x0058]; // 0x3C8(0x58)
	struct UPDArmorGaugeDetail* ArmorGauge; // 0x420(0x8)
	struct UCanvasPanel* CP_ItemSkillGaugeDurationTime; // 0x428(0x8)
	struct UImage* IMG_ItemSkillIcon; // 0x430(0x8)
	struct UProgressBar* PB_SpeedIncreaseTime; // 0x438(0x8)
	unsigned char UnknownData_440[0x0008]; // 0x440(0x8)
	struct UCanvasPanel* CP_BowCharge; // 0x448(0x8)
	struct UCanvasPanel* CP_ChargeEf; // 0x450(0x8)
	struct UProgressBar* PB_BowCharge; // 0x458(0x8)
	struct UImage* IMG_ChargeFx; // 0x460(0x8)
	unsigned char UnknownData_468[0x0008]; // 0x468(0x8)
};

// Class ProjectD.PDPlayerSettingUI
// Size : 0x4C0 (Inherited : 0x290)
struct UPDPlayerSettingUI : UPDIngameModeWidget {
	struct UPDTextBlock* T_Desc_Mode; // 0x290(0x8)
	struct UPDTextBlock* T_Map; // 0x298(0x8)
	struct UCanvasPanel* CP_TeamMode; // 0x2A0(0x8)
	struct UImage* IMG_TeamMode; // 0x2A8(0x8)
	struct UPDTextBlock* T_TeamMode; // 0x2B0(0x8)
	struct UPaperSprite* AttackImg; // 0x2B8(0x8)
	struct UPaperSprite* DefenceImg; // 0x2C0(0x8)
	struct UCanvasPanel* CP_LoadingChar; // 0x2C8(0x8)
	struct UPDTextBlock* TB_MissionScoreTitle; // 0x2D0(0x8)
	struct UCanvasPanel* CP_TeamChar; // 0x2D8(0x8)
	struct UHorizontalBox* HP_TeamCharList; // 0x2E0(0x8)
	struct UCanvasPanel* CP_Char; // 0x2E8(0x8)
	struct UCanvasPanel* CP_Lepton; // 0x2F0(0x8)
	struct UCanvasPanel* CP_UniqueLeptonInfo; // 0x2F8(0x8)
	struct UImage* IMG_UniqueLepton1; // 0x300(0x8)
	struct UImage* IMG_UniqueLepton2; // 0x308(0x8)
	struct TArray<struct UImage*> IMG_UniqueLepton_List; // 0x310(0x10)
	struct UPDTextBlock* T_UniqueLepton1; // 0x320(0x8)
	struct UPDTextBlock* T_UniqueLepton2; // 0x328(0x8)
	struct TArray<struct UPDTextBlock*> T_UniqueLepton_List; // 0x330(0x10)
	struct UImage* IMG_SelectChar; // 0x340(0x8)
	struct UPDTextBlock* T_Name; // 0x348(0x8)
	struct UImage* IMG_Signature; // 0x350(0x8)
	struct UPDTextBlock* T_Signature; // 0x358(0x8)
	struct UTileView* TV_CharList; // 0x360(0x8)
	struct UPDTabButtonGroup* CharTabBtnGroup; // 0x368(0x8)
	struct UVerticalBox* VB_PresetTabs; // 0x370(0x8)
	struct UPDTextBlock* T_LeptonInfo_Title; // 0x378(0x8)
	struct UWidgetSwitcher* WS_EquipSlot1; // 0x380(0x8)
	struct UImage* IMG_EquipSlot_Perk1; // 0x388(0x8)
	struct UPDTextBlock* T_EquipSlot_PerkName1; // 0x390(0x8)
	struct UWidgetSwitcher* WS_EquipSlot2; // 0x398(0x8)
	struct UImage* IMG_EquipSlot_Perk2; // 0x3A0(0x8)
	struct UPDTextBlock* T_EquipSlot_PerkName2; // 0x3A8(0x8)
	struct UWidgetSwitcher* WS_EquipSlot3; // 0x3B0(0x8)
	struct UImage* IMG_EquipSlot_Perk3; // 0x3B8(0x8)
	struct UPDTextBlock* T_EquipSlot_PerkName3; // 0x3C0(0x8)
	struct UPDTabButtonGroup* PresetTabBtnGroup; // 0x3C8(0x8)
	struct TArray<struct UWidgetSwitcher*> WS_LeptonList; // 0x3D0(0x10)
	struct TArray<struct UImage*> IMG_LeptonIconList; // 0x3E0(0x10)
	struct TArray<struct UPDTextBlock*> TB_LeptonNameList; // 0x3F0(0x10)
	unsigned char UnknownData_400[0x00C0]; // 0x400(0xC0)

	void OnSelectLaptonPreset(int32_t SelectIndex); // Function ProjectD.PDPlayerSettingUI.OnSelectLaptonPreset // (Final|Native|Protected) // Param Size : 0x4, 0x7FF653C7B440
	void OnSelectChar(int32_t SelectAgentIndex); // Function ProjectD.PDPlayerSettingUI.OnSelectChar // (Final|Native|Protected) // Param Size : 0x4, 0x7FF653C7B3C0
};

// Class ProjectD.PDPlayLogListItemData
// Size : 0x68 (Inherited : 0x28)
struct UPDPlayLogListItemData : UObject {
	unsigned char UnknownData_28[0x0040]; // 0x28(0x40)
};

// Class ProjectD.PDPlayLogListItem
// Size : 0x2D0 (Inherited : 0x288)
struct UPDPlayLogListItem : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UPDTextBlock* TB_FileName; // 0x290(0x8)
	struct UPDTextBlock* TB_FileDate; // 0x298(0x8)
	struct UPDTextBlock* TB_Round; // 0x2A0(0x8)
	struct UWidgetSwitcher* WS_PlayLog; // 0x2A8(0x8)
	struct UBorder* BD_Bg; // 0x2B0(0x8)
	struct UAkAudioEvent* HoverSound; // 0x2B8(0x8)
	struct UAkAudioEvent* ClickSound; // 0x2C0(0x8)
	unsigned char UnknownData_2C8[0x0008]; // 0x2C8(0x8)
};

// Class ProjectD.PDPlayLogMapIconPlayerModule
// Size : 0x300 (Inherited : 0x2A0)
struct UPDPlayLogMapIconPlayerModule : UPDGameMapIconModule {
	struct UCanvasPanel* CP_Normal; // 0x2A0(0x8)
	struct UImage* IMG_State_Groggy; // 0x2A8(0x8)
	struct UImage* IMG_State_Death; // 0x2B0(0x8)
	struct UPDPlayLogTrackLine* TrackLine; // 0x2B8(0x8)
	struct UBorder* BD_Direction; // 0x2C0(0x8)
	struct UImage* IMG_TeamColor; // 0x2C8(0x8)
	struct UImage* IMG_UserDirection; // 0x2D0(0x8)
	struct UPDTextBlock* TB_PlayerName; // 0x2D8(0x8)
	struct UWidgetSwitcher* WS_PlayerBack; // 0x2E0(0x8)
	struct UImage* IMG_MVPColor; // 0x2E8(0x8)
	unsigned char UnknownData_2F0[0x0010]; // 0x2F0(0x10)
};

// Class ProjectD.PDPlayLogMapIconSafeZoneDrawer
// Size : 0x2D8 (Inherited : 0x288)
struct UPDPlayLogMapIconSafeZoneDrawer : UPDUserWidget {
	enum class ESafeZoneDrawType DrawType; // 0x288(0x1)
	unsigned char UnknownData_289[0x0007]; // 0x289(0x7)
	struct TArray<struct FSafeZoneDrawing> Drawings; // 0x290(0x10)
	bool DrawLineAntialias; // 0x2A0(0x1)
	unsigned char UnknownData_2A1[0x0003]; // 0x2A1(0x3)
	float DrawLineTickness; // 0x2A4(0x4)
	bool bEdgeRounding; // 0x2A8(0x1)
	unsigned char UnknownData_2A9[0x0003]; // 0x2A9(0x3)
	float EdgeRoundingLen; // 0x2AC(0x4)
	int32_t EdgeRoundingSegment; // 0x2B0(0x4)
	unsigned char UnknownData_2B4[0x0024]; // 0x2B4(0x24)
};

// Class ProjectD.PDPlayLogMapIconSafeZoneModule
// Size : 0x2F8 (Inherited : 0x2A0)
struct UPDPlayLogMapIconSafeZoneModule : UPDGameMapIconModule {
	struct URetainerBox* RB_Mask; // 0x2A0(0x8)
	struct UCanvasPanel* CP_Mask; // 0x2A8(0x8)
	struct UImage* IMG_Area; // 0x2B0(0x8)
	struct UPDPlayLogMapIconSafeZoneDrawer* DrawerCurrent; // 0x2B8(0x8)
	struct UPDPlayLogMapIconSafeZoneDrawer* DrawerNext; // 0x2C0(0x8)
	unsigned char UnknownData_2C8[0x0014]; // 0x2C8(0x14)
	bool RenewalVersion; // 0x2DC(0x1)
	unsigned char UnknownData_2DD[0x001B]; // 0x2DD(0x1B)
};

// Class ProjectD.PDPlayLogMapIconThrownModule
// Size : 0x2C0 (Inherited : 0x2A0)
struct UPDPlayLogMapIconThrownModule : UPDGameMapIconModule {
	struct UImage* IMG_Area; // 0x2A0(0x8)
	struct UCanvasPanel* CP_Replay_Thrown; // 0x2A8(0x8)
	struct USizeBox* SB_Area; // 0x2B0(0x8)
	unsigned char UnknownData_2B8[0x0008]; // 0x2B8(0x8)
};

// Class ProjectD.PDPlayLogMapModule
// Size : 0x3C8 (Inherited : 0x3C0)
struct UPDPlayLogMapModule : UPDGameMapModule {
	unsigned char UnknownData_3C0[0x0008]; // 0x3C0(0x8)
};

// Class ProjectD.PDPlayLogPlayerInfo
// Size : 0x2D0 (Inherited : 0x288)
struct UPDPlayLogPlayerInfo : UPDUserWidget {
	struct UPDPlayLogMapIconPlayerModule* PLMI_Icon; // 0x288(0x8)
	struct UPDTextBlock* TB_Name; // 0x290(0x8)
	struct UImage* IMG_CharacterIcon; // 0x298(0x8)
	struct UBorder* BD_Bg; // 0x2A0(0x8)
	struct UPDTextBlock* TB_Kill; // 0x2A8(0x8)
	struct UPDTextBlock* TB_Death; // 0x2B0(0x8)
	struct UBorder* BD_Outline; // 0x2B8(0x8)
	struct UPDCheckBox* CB_PlayerView; // 0x2C0(0x8)
	unsigned char UnknownData_2C8[0x0008]; // 0x2C8(0x8)

	void OnChangedCheckBox(bool InValue); // Function ProjectD.PDPlayLogPlayerInfo.OnChangedCheckBox // (Final|Native|Protected) // Param Size : 0x1, 0x7FF653C7B290
};

// Class ProjectD.PDPlayLogThrowLineDrawer
// Size : 0x2C8 (Inherited : 0x2A0)
struct UPDPlayLogThrowLineDrawer : UPDGameMapIconModule {
	unsigned char UnknownData_2A0[0x0028]; // 0x2A0(0x28)
};

// Class ProjectD.PDPlayLogTrackLine
// Size : 0x318 (Inherited : 0x288)
struct UPDPlayLogTrackLine : UPDUserWidget {
	struct UImage* IMG_DeathArrow; // 0x288(0x8)
	unsigned char UnknownData_290[0x0088]; // 0x290(0x88)
};

// Class ProjectD.PDPlayLogUI
// Size : 0x458 (Inherited : 0x288)
struct UPDPlayLogUI : UPDSceneBaseUI {
	struct UPDButton* Btn_GotoLobby; // 0x288(0x8)
	struct UPDButton* Btn_DeleteAll; // 0x290(0x8)
	struct UCanvasPanel* CP_Map; // 0x298(0x8)
	struct UPDPlayLogMapModule* PlayLogMap; // 0x2A0(0x8)
	struct UPDSlider* PDSlider; // 0x2A8(0x8)
	struct UPDTextBlock* TB_CurMin; // 0x2B0(0x8)
	struct UPDTextBlock* TB_CurSec; // 0x2B8(0x8)
	struct UPDTextBlock* TB_MaxMin; // 0x2C0(0x8)
	struct UPDTextBlock* TB_MaxSec; // 0x2C8(0x8)
	struct UListView* LV_PlayList; // 0x2D0(0x8)
	struct UListView* LV_RoundList; // 0x2D8(0x8)
	struct UVerticalBox* VB_AllyPlayInfo; // 0x2E0(0x8)
	struct UVerticalBox* VB_EnemyPlayInfo; // 0x2E8(0x8)
	struct UPDTabButton* TBTN_Normal; // 0x2F0(0x8)
	struct UPDTabButton* TBTN_Double; // 0x2F8(0x8)
	struct UPDTabButton* TBTN_Quadruple; // 0x300(0x8)
	struct UPDTabButton* TBTN_Play; // 0x308(0x8)
	struct UPDTabButton* TBTN_Stop; // 0x310(0x8)
	struct UPDTabButton* TBTN_Pause; // 0x318(0x8)
	struct UPDTextBlock* TB_AtWinType; // 0x320(0x8)
	struct UPDTextBlock* TB_DeWinType; // 0x328(0x8)
	struct UBorder* BD_AtWinTypeBg; // 0x330(0x8)
	struct UBorder* BD_DeWinTypeBg; // 0x338(0x8)
	struct UCanvasPanel* CP_Loading; // 0x340(0x8)
	struct UPDTabButtonGroup* SpeedCategoryGroup; // 0x348(0x8)
	struct UPDTabButtonGroup* PlayCategoryGroup; // 0x350(0x8)
	struct UPDKillLogUI* KillLog; // 0x358(0x8)
	struct UPDTextBlock* TB_MapName; // 0x360(0x8)
	struct UPDCheckBox* CB_VisibleTrack; // 0x368(0x8)
	struct UProgressBar* PB_PlayerBar; // 0x370(0x8)
	float ZoomScaleDefault; // 0x378(0x4)
	unsigned char UnknownData_37C[0x0004]; // 0x37C(0x4)
	struct UVerticalBox* VB_LogList; // 0x380(0x8)
	enum class EHorizontalAlignment LogHAlign; // 0x388(0x1)
	unsigned char UnknownData_389[0x0003]; // 0x389(0x3)
	struct FMargin LogPadding; // 0x38C(0x10)
	int32_t MaxLogCount; // 0x39C(0x4)
	float DefaultDuration; // 0x3A0(0x4)
	bool AutoRemove; // 0x3A4(0x1)
	unsigned char UnknownData_3A5[0x00B3]; // 0x3A5(0xB3)

	void PlayLogStop(); // Function ProjectD.PDPlayLogUI.PlayLogStop // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C7B710
	void PlayLogStart(); // Function ProjectD.PDPlayLogUI.PlayLogStart // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C7B6F0
	void PlayLogPause(); // Function ProjectD.PDPlayLogUI.PlayLogPause // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C7B6D0
	void OnVisibleTrackChanged(bool Value); // Function ProjectD.PDPlayLogUI.OnVisibleTrackChanged // (Final|Native|Private) // Param Size : 0x1, 0x7FF653C7B640
	void OnValueChanged(float InValue); // Function ProjectD.PDPlayLogUI.OnValueChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C7B5C0
	void OnSelectedRoundListItem(struct UPDPlayLogListItemData* InListItemData); // Function ProjectD.PDPlayLogUI.OnSelectedRoundListItem // (Final|Native|Private) // Param Size : 0x8, 0x7FF653C7B540
	void OnSelectedListItem(struct UPDPlayLogListItemData* InListItemData); // Function ProjectD.PDPlayLogUI.OnSelectedListItem // (Final|Native|Private) // Param Size : 0x8, 0x7FF653C7B4C0
	void OnQuadrupleSpeed(); // Function ProjectD.PDPlayLogUI.OnQuadrupleSpeed // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C7B3A0
	void OnNormalSpeed(); // Function ProjectD.PDPlayLogUI.OnNormalSpeed // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C7B380
	void OnMouseCaptureBegin(); // Function ProjectD.PDPlayLogUI.OnMouseCaptureBegin // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C7B360
	void OnDoubleSpeed(); // Function ProjectD.PDPlayLogUI.OnDoubleSpeed // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C7B340
	void OnDeleteAllFile(); // Function ProjectD.PDPlayLogUI.OnDeleteAllFile // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C7B320
	void MouseCaptureEnd(); // Function ProjectD.PDPlayLogUI.MouseCaptureEnd // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C7B270
	void GotoLobby(); // Function ProjectD.PDPlayLogUI.GotoLobby // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C7B250
	void DeleteAllFile(); // Function ProjectD.PDPlayLogUI.DeleteAllFile // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C7B230
};

// Class ProjectD.PDPopupEventHandler
// Size : 0x28 (Inherited : 0x28)
struct UPDPopupEventHandler : UObject {
};

// Class ProjectD.PDPostAkEventAnimNotify
// Size : 0x50 (Inherited : 0x48)
struct UPDPostAkEventAnimNotify : UPDBaseAnimNotify {
	struct UAkAudioEvent* EventToPost; // 0x48(0x8)
};

// Class ProjectD.PDFootstepAkAnimNotify
// Size : 0xD0 (Inherited : 0x50)
struct UPDFootstepAkAnimNotify : UPDPostAkEventAnimNotify {
	enum class EHandsAndFeetBone Bone; // 0x50(0x1)
	unsigned char UnknownData_51[0x0003]; // 0x51(0x3)
	enum class EPDTraceChannel TraceType; // 0x54(0x4)
	enum class EPDFootStepNotifyType FootStepNotifyType; // 0x58(0x1)
	unsigned char UnknownData_59[0x0077]; // 0x59(0x77)
};

// Class ProjectD.PDParkourAkAnimNotify
// Size : 0xD0 (Inherited : 0xD0)
struct UPDParkourAkAnimNotify : UPDFootstepAkAnimNotify {
};

// Class ProjectD.PDSlideAkAnimNotify
// Size : 0x128 (Inherited : 0xD0)
struct UPDSlideAkAnimNotify : UPDFootstepAkAnimNotify {
	unsigned char UnknownData_D0[0x0058]; // 0xD0(0x58)
};

// Class ProjectD.PDPracticeModeUI
// Size : 0x4A0 (Inherited : 0x4A0)
struct UPDPracticeModeUI : UPDBaseModeUI {
};

// Class ProjectD.PDProgress
// Size : 0x320 (Inherited : 0x288)
struct UPDProgress : UPDUserWidget {
	struct UImage* IMG_Progress; // 0x288(0x8)
	struct FSlateBrush ProgressMaterial; // 0x290(0x88)
	float Percent; // 0x318(0x4)
	unsigned char UnknownData_31C[0x0004]; // 0x31C(0x4)
};

// Class ProjectD.PDProgressLeptonListItemData
// Size : 0x70 (Inherited : 0x28)
struct UPDProgressLeptonListItemData : UObject {
	unsigned char UnknownData_28[0x0048]; // 0x28(0x48)
};

// Class ProjectD.PDProgressLeptonListItem
// Size : 0x2C0 (Inherited : 0x288)
struct UPDProgressLeptonListItem : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UImage* IMG_Item; // 0x290(0x8)
	struct UPDTextBlock* TB_Name; // 0x298(0x8)
	struct UPDTextBlock* TB_Desc; // 0x2A0(0x8)
	struct UPDTextBlock* TB_Count; // 0x2A8(0x8)
	struct UProgressBar* PB_Per; // 0x2B0(0x8)
	struct UBorder* BD_ItemOutline; // 0x2B8(0x8)
};

// Class ProjectD.PDPropActor
// Size : 0x370 (Inherited : 0x220)
struct APDPropActor : AActor {
	struct TArray<struct FName> TargetNameList; // 0x220(0x10)
	struct UMaterialParameterCollection* Collection; // 0x230(0x8)
	bool UseSineGraph; // 0x238(0x1)
	unsigned char UnknownData_239[0x0003]; // 0x239(0x3)
	float SignGraphRange; // 0x23C(0x4)
	float SignGraphPeriod; // 0x240(0x4)
	float RotatorRoll; // 0x244(0x4)
	float RotatorPitch; // 0x248(0x4)
	float RotatorYaw; // 0x24C(0x4)
	float RotationFactor; // 0x250(0x4)
	bool IsLamp; // 0x254(0x1)
	unsigned char UnknownData_255[0x0003]; // 0x255(0x3)
	struct TArray<struct FName> TargetNameList2; // 0x258(0x10)
	float RotatorRoll2; // 0x268(0x4)
	float RotatorPitch2; // 0x26C(0x4)
	float RotatorYaw2; // 0x270(0x4)
	unsigned char UnknownData_274[0x00FC]; // 0x274(0xFC)
};

// Class ProjectD.PDPulseLight
// Size : 0x238 (Inherited : 0x220)
struct APDPulseLight : AActor {
	struct UPointLightComponent* PointLight; // 0x220(0x8)
	unsigned char UnknownData_228[0x0010]; // 0x228(0x10)
};

// Class ProjectD.PDPurchaseMsg
// Size : 0x318 (Inherited : 0x288)
struct UPDPurchaseMsg : UPDUserWidget {
	struct UBorder* B_MessageBg; // 0x288(0x8)
	struct UPDTextBlock* T_Message; // 0x290(0x8)
	struct FLinearColor SuccessBGColor; // 0x298(0x10)
	struct FLinearColor FailBGColor; // 0x2A8(0x10)
	struct FSlateColor SuccessTextColor; // 0x2B8(0x28)
	struct FSlateColor FailTextColor; // 0x2E0(0x28)
	unsigned char UnknownData_308[0x0010]; // 0x308(0x10)
};

// Class ProjectD.PDRagdollAnimInstance
// Size : 0x290 (Inherited : 0x280)
struct UPDRagdollAnimInstance : UPDAnimInstance {
	bool bIsRagdoll; // 0x280(0x1)
	unsigned char UnknownData_281[0x000F]; // 0x281(0xF)
};

// Class ProjectD.PDReactorToAkEventTrigger
// Size : 0x28 (Inherited : 0x28)
struct UPDReactorToAkEventTrigger : UInterface {
};

// Class ProjectD.PDRecruitListItemData
// Size : 0xC0 (Inherited : 0x28)
struct UPDRecruitListItemData : UObject {
	unsigned char UnknownData_28[0x0098]; // 0x28(0x98)
};

// Class ProjectD.PDRecruitListItem
// Size : 0x330 (Inherited : 0x288)
struct UPDRecruitListItem : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UBorder* BD_Background; // 0x290(0x8)
	struct UWidgetSwitcher* WS_State; // 0x298(0x8)
	struct UImage* IMG_Face; // 0x2A0(0x8)
	struct UCanvasPanel* CP_ClanMarkInfo; // 0x2A8(0x8)
	struct UImage* IMG_ClanMarkBG; // 0x2B0(0x8)
	struct UImage* IMG_ClanMarkFG; // 0x2B8(0x8)
	struct UPDTextBlock* TB_ClanName; // 0x2C0(0x8)
	struct UPDTextBlock* TB_Nickname; // 0x2C8(0x8)
	struct UPDButton* Btn_Ok; // 0x2D0(0x8)
	struct UPDButton* Btn_Cancel; // 0x2D8(0x8)
	struct UBorder* BD_Disable; // 0x2E0(0x8)
	unsigned char UnknownData_2E8[0x0048]; // 0x2E8(0x48)

	void OnOKClicked(); // Function ProjectD.PDRecruitListItem.OnOKClicked // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C7DD30
	void OnCancelClicked(); // Function ProjectD.PDRecruitListItem.OnCancelClicked // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C7DC20
};

// Class ProjectD.PDReloadAnimNotifyState
// Size : 0x50 (Inherited : 0x30)
struct UPDReloadAnimNotifyState : UAnimNotifyState {
	struct FName MagazineAttachedBone; // 0x30(0x8)
	int32_t NotifyType; // 0x38(0x4)
	unsigned char UnknownData_3C[0x0014]; // 0x3C(0x14)
};

// Class ProjectD.PDReportPopupUI
// Size : 0x360 (Inherited : 0x290)
struct UPDReportPopupUI : UPDIngameModeWidget {
	struct UPDTextBlock* T_Name; // 0x290(0x8)
	struct UPDComboBox* CB_Category; // 0x298(0x8)
	struct UPDComboBox* CB_SubCategory; // 0x2A0(0x8)
	struct UMultiLineEditableText* MET_Opinion; // 0x2A8(0x8)
	struct UPDButton* ConfirmBtn; // 0x2B0(0x8)
	struct UPDButton* CancelBtn; // 0x2B8(0x8)
	unsigned char UnknownData_2C0[0x00A0]; // 0x2C0(0xA0)

	void OnTextChanged_MET_Opinion(struct FText Text); // Function ProjectD.PDReportPopupUI.OnTextChanged_MET_Opinion // (Final|Native|Protected|HasOutParms) // Param Size : 0x18, 0x7FF653C7DFB0
	void OnSelectionChanged_CB_SubCategory(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDReportPopupUI.OnSelectionChanged_CB_SubCategory // (Final|Native|Protected) // Param Size : 0x11, 0x7FF653C7DE80
	void OnSelectionChanged_CB_Category(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDReportPopupUI.OnSelectionChanged_CB_Category // (Final|Native|Protected) // Param Size : 0x11, 0x7FF653C7DD50
	void OnReportConfirmed(); // Function ProjectD.PDReportPopupUI.OnReportConfirmed // (Final|Native|Protected) // Param Size : 0x0, 0x7FF6533F7E70
	void OnClick_ConfirmBtn(); // Function ProjectD.PDReportPopupUI.OnClick_ConfirmBtn // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C7DD10
	void OnClick_CancelBtn(); // Function ProjectD.PDReportPopupUI.OnClick_CancelBtn // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C7DCF0
};

// Class ProjectD.PDResultExpItemUI
// Size : 0x2B8 (Inherited : 0x288)
struct UPDResultExpItemUI : UPDUserWidget {
	struct UPDTextBlock* TB_ContentName; // 0x288(0x8)
	struct UPDTextBlock* TB_ContentName_Fx01; // 0x290(0x8)
	struct UPDTextBlock* TB_ContentName_Fx02; // 0x298(0x8)
	struct UPDTextBlock* TB_ExpValue; // 0x2A0(0x8)
	struct UPDTextBlock* TB_ExpValue_Fx01; // 0x2A8(0x8)
	struct UPDTextBlock* TB_ExpValue_Fx02; // 0x2B0(0x8)
};

// Class ProjectD.PDResultMedalItem
// Size : 0x2E0 (Inherited : 0x288)
struct UPDResultMedalItem : UPDUserWidget {
	struct UPDTextBlock* TB_Title; // 0x288(0x8)
	struct UPDTextBlock* TB_Score; // 0x290(0x8)
	struct URetainerBox* RB_Mask; // 0x298(0x8)
	struct UImage* IMG_Medal; // 0x2A0(0x8)
	struct UImage* IMG_Fx_Smoke; // 0x2A8(0x8)
	struct UImage* IMG_Fx; // 0x2B0(0x8)
	struct UTexture* GoldTexture; // 0x2B8(0x8)
	struct UTexture* SilverTexture; // 0x2C0(0x8)
	struct UTexture* BronzeTexture; // 0x2C8(0x8)
	unsigned char UnknownData_2D0[0x0010]; // 0x2D0(0x10)
};

// Class ProjectD.PDResultRankScore
// Size : 0x2C8 (Inherited : 0x288)
struct UPDResultRankScore : UPDUserWidget {
	struct UImage* IMG_ScoreBoard_Line01; // 0x288(0x8)
	struct UImage* IMG_ScoreBoard_Line02; // 0x290(0x8)
	struct UImage* IMG_ScoreBoard_TopBg01; // 0x298(0x8)
	struct UPDTextBlock* TB_TeamName; // 0x2A0(0x8)
	struct UCanvasPanel* CP_PlayerScoreRoot; // 0x2A8(0x8)
	unsigned char UnknownData_2B0[0x0018]; // 0x2B0(0x18)
};

// Class ProjectD.PDResultRankScoreItem
// Size : 0x338 (Inherited : 0x288)
struct UPDResultRankScoreItem : UPDUserWidget {
	struct UImage* IMG_SLotBg; // 0x288(0x8)
	struct UImage* IMG_Agent; // 0x290(0x8)
	struct UImage* IMG_Lepton1; // 0x298(0x8)
	struct UImage* IMG_Lepton2; // 0x2A0(0x8)
	struct UImage* IMG_Lepton3; // 0x2A8(0x8)
	struct UImage* IMG_Lepton4; // 0x2B0(0x8)
	struct UImage* IMG_Lepton5; // 0x2B8(0x8)
	struct UPDTextBlock* TB_Rank; // 0x2C0(0x8)
	struct UPDTextBlock* TB_Name; // 0x2C8(0x8)
	struct UPDTextBlock* TB_Point; // 0x2D0(0x8)
	struct UPDTextBlock* TB_Mission; // 0x2D8(0x8)
	struct UPDTextBlock* TB_Kill; // 0x2E0(0x8)
	struct UPDTextBlock* TB_Death; // 0x2E8(0x8)
	struct UPDTextBlock* TB_AttackDamage; // 0x2F0(0x8)
	struct UPDTextBlock* TB_Damage; // 0x2F8(0x8)
	struct UPDTextBlock* TB_UseCoin; // 0x300(0x8)
	struct UPDTextBlock* TB_Invest; // 0x308(0x8)
	struct UCanvasPanel* CP_ClanMark; // 0x310(0x8)
	struct UImage* IMG_ClanMarkBG; // 0x318(0x8)
	struct UImage* IMG_ClanMark; // 0x320(0x8)
	unsigned char UnknownData_328[0x0010]; // 0x328(0x10)
};

// Class ProjectD.PDResultRewardItem
// Size : 0x2A0 (Inherited : 0x288)
struct UPDResultRewardItem : UPDUserWidget {
	struct UImage* IMG_Lepton; // 0x288(0x8)
	struct UPDTextBlock* T_RewardName; // 0x290(0x8)
	unsigned char UnknownData_298[0x0008]; // 0x298(0x8)
};

// Class ProjectD.PDResultRoundItemUI
// Size : 0x2D8 (Inherited : 0x288)
struct UPDResultRoundItemUI : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UPDTextBlock* TB_Round; // 0x290(0x8)
	struct UPDTextBlock* TB_ModeName; // 0x298(0x8)
	struct UImage* IMG_ModeIcon; // 0x2A0(0x8)
	struct UWidgetSwitcher* WS_ResultType; // 0x2A8(0x8)
	struct UBorder* BD_Win; // 0x2B0(0x8)
	struct UBorder* BD_OWin; // 0x2B8(0x8)
	struct UBorder* BD_Rank; // 0x2C0(0x8)
	struct UPDTextBlock* TB_Rank; // 0x2C8(0x8)
	unsigned char UnknownData_2D0[0x0008]; // 0x2D0(0x8)
};

// Class ProjectD.PDResultRoundMenuItem
// Size : 0x368 (Inherited : 0x288)
struct UPDResultRoundMenuItem : UPDUserWidget {
	unsigned char UnknownData_288[0x0010]; // 0x288(0x10)
	struct UWidgetSwitcher* WS_ResultType; // 0x298(0x8)
	struct UImage* IMG_ModeIcon; // 0x2A0(0x8)
	struct UImage* IMG_SLotBg; // 0x2A8(0x8)
	struct UImage* IMG_SLotBg_Solo; // 0x2B0(0x8)
	struct UImage* IMG_SLotBg_BM; // 0x2B8(0x8)
	struct UCanvasPanel* CP_Result_Selected; // 0x2C0(0x8)
	struct UImage* IMG_Result_SelectedFx_Blue; // 0x2C8(0x8)
	struct UImage* IMG_Result_SelectedFx_Orange; // 0x2D0(0x8)
	struct UImage* IMG_Result_SelectedBar; // 0x2D8(0x8)
	struct UPDTextBlock* T_RoundInfo; // 0x2E0(0x8)
	struct UPDTextBlock* T_Win; // 0x2E8(0x8)
	struct UPDTextBlock* T_Draw; // 0x2F0(0x8)
	struct UPDTextBlock* T_Lose; // 0x2F8(0x8)
	struct UPDTextBlock* T_Rank; // 0x300(0x8)
	struct UBorder* B_Scheduled; // 0x308(0x8)
	struct UBorder* B_ResultCause; // 0x310(0x8)
	struct UImage* IMG_CauseIcon; // 0x318(0x8)
	struct UBorder* B_All; // 0x320(0x8)
	struct UPDButton* BTN_Area; // 0x328(0x8)
	struct UPaperSprite* AttackImg; // 0x330(0x8)
	struct UPaperSprite* DefenceImg; // 0x338(0x8)
	struct UPaperSprite* InstallImg; // 0x340(0x8)
	struct UPaperSprite* DeactiveImg; // 0x348(0x8)
	struct UPaperSprite* KilledImg; // 0x350(0x8)
	struct UPaperSprite* TimeOutImg; // 0x358(0x8)
	unsigned char UnknownData_360[0x0008]; // 0x360(0x8)

	void OnClickMenu(); // Function ProjectD.PDResultRoundMenuItem.OnClickMenu // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C7DCD0
};

// Class ProjectD.PDResultRoundPlayerItem
// Size : 0x2E0 (Inherited : 0x288)
struct UPDResultRoundPlayerItem : UPDUserWidget {
	struct UImage* IMG_SLotBg; // 0x288(0x8)
	struct UImage* IMG_AgnetPic; // 0x290(0x8)
	struct UImage* IMG_ClanMark; // 0x298(0x8)
	struct UImage* IMG_ClanMark_Bg; // 0x2A0(0x8)
	struct UPDTextBlock* TB_Name; // 0x2A8(0x8)
	struct UPDTextBlock* T_PlayerNum; // 0x2B0(0x8)
	struct UPDTextBlock* TB_Kill; // 0x2B8(0x8)
	struct UPDTextBlock* TB_Death; // 0x2C0(0x8)
	struct UPDCheckBox* CB_PlayerView; // 0x2C8(0x8)
	struct UCanvasPanel* CP_ClanMark; // 0x2D0(0x8)
	unsigned char UnknownData_2D8[0x0008]; // 0x2D8(0x8)

	void OnChangedCheckBox(bool InValue); // Function ProjectD.PDResultRoundPlayerItem.OnChangedCheckBox // (Final|Native|Protected) // Param Size : 0x1, 0x7FF653C7DC40
};

// Class ProjectD.PDResultRoundPlayerList
// Size : 0x300 (Inherited : 0x288)
struct UPDResultRoundPlayerList : UPDUserWidget {
	struct UImage* IMG_Attack; // 0x288(0x8)
	struct UImage* IMG_Defense; // 0x290(0x8)
	struct UBorder* BD_ResultBg; // 0x298(0x8)
	struct UPDTextBlock* TB_TeamName; // 0x2A0(0x8)
	struct UPDTextBlock* TB_Result; // 0x2A8(0x8)
	struct UPDResultRoundPlayerItem* RRP_Item1; // 0x2B0(0x8)
	struct UPDResultRoundPlayerItem* RRP_Item2; // 0x2B8(0x8)
	struct UPDResultRoundPlayerItem* RRP_Item3; // 0x2C0(0x8)
	struct UPDResultRoundPlayerItem* RRP_Item4; // 0x2C8(0x8)
	struct UPDResultRoundPlayerItem* RRP_Item5; // 0x2D0(0x8)
	struct TArray<struct UPDResultRoundPlayerItem*> RoundPlayerItems; // 0x2D8(0x10)
	unsigned char UnknownData_2E8[0x0018]; // 0x2E8(0x18)
};

// Class ProjectD.PDResultScoreItem
// Size : 0x2B8 (Inherited : 0x288)
struct UPDResultScoreItem : UPDUserWidget {
	struct UPDTextBlock* T_ScoreName; // 0x288(0x8)
	struct UPDTextBlock* T_Score; // 0x290(0x8)
	unsigned char UnknownData_298[0x0020]; // 0x298(0x20)
};

// Class ProjectD.PDResultTeamMemberUI
// Size : 0x2C0 (Inherited : 0x288)
struct UPDResultTeamMemberUI : UPDUserWidget {
	struct UPDTextBlock* TB_Nickname; // 0x288(0x8)
	struct UImage* IMG_Icon; // 0x290(0x8)
	struct UPDTextBlock* TB_Status; // 0x298(0x8)
	struct UPDTextBlock* TB_Record; // 0x2A0(0x8)
	struct UPDTextBlock* TB_Postfix; // 0x2A8(0x8)
	struct UCanvasPanel* CP_MVP; // 0x2B0(0x8)
	struct UImage* IMG_MVP_FxBg; // 0x2B8(0x8)
};

// Class ProjectD.PDResultTeamScore
// Size : 0x368 (Inherited : 0x288)
struct UPDResultTeamScore : UPDUserWidget {
	struct UImage* IMG_ScoreBoard_Line01; // 0x288(0x8)
	struct UImage* IMG_ScoreBoard_Line02; // 0x290(0x8)
	struct UImage* IMG_ScoreBoard_TopBg01; // 0x298(0x8)
	struct UPDTextBlock* TB_TeamName; // 0x2A0(0x8)
	struct UPDTextBlock* TB_TotalMVP; // 0x2A8(0x8)
	struct UPDTextBlock* TB_TotalKill; // 0x2B0(0x8)
	struct UPDTextBlock* TB_TotalDeath; // 0x2B8(0x8)
	struct UPDTextBlock* TB_TotalAssist; // 0x2C0(0x8)
	struct UPDTextBlock* TB_TotalRescue; // 0x2C8(0x8)
	struct UPDTextBlock* TB_TotalMission; // 0x2D0(0x8)
	struct UPDTextBlock* TB_TotalAlive; // 0x2D8(0x8)
	struct UPDTextBlock* TB_TotalAttackDamage; // 0x2E0(0x8)
	struct UPDTextBlock* TB_TotalDamage; // 0x2E8(0x8)
	struct UPDTextBlock* TB_TotalUseCoin; // 0x2F0(0x8)
	struct UPDTextBlock* TB_TotalInvest; // 0x2F8(0x8)
	struct UPDResultTeamScoreItem* RTSI_List1; // 0x300(0x8)
	struct UPDResultTeamScoreItem* RTSI_List2; // 0x308(0x8)
	struct UPDResultTeamScoreItem* RTSI_List3; // 0x310(0x8)
	struct UPDResultTeamScoreItem* RTSI_List4; // 0x318(0x8)
	struct UPDResultTeamScoreItem* RTSI_List5; // 0x320(0x8)
	struct TArray<struct UPDResultTeamScoreItem*> PlayerScoreItems; // 0x328(0x10)
	unsigned char UnknownData_338[0x0030]; // 0x338(0x30)
};

// Class ProjectD.PDResultTeamScoreItem
// Size : 0x348 (Inherited : 0x288)
struct UPDResultTeamScoreItem : UPDUserWidget {
	struct UImage* IMG_SLotBg; // 0x288(0x8)
	struct UImage* IMG_Agent; // 0x290(0x8)
	struct UImage* IMG_Lepton1; // 0x298(0x8)
	struct UImage* IMG_Lepton2; // 0x2A0(0x8)
	struct UImage* IMG_Lepton3; // 0x2A8(0x8)
	struct UImage* IMG_Lepton4; // 0x2B0(0x8)
	struct UImage* IMG_Lepton5; // 0x2B8(0x8)
	struct UPDTextBlock* TB_Name; // 0x2C0(0x8)
	struct UPDTextBlock* TB_MVP; // 0x2C8(0x8)
	struct UPDTextBlock* TB_Kill; // 0x2D0(0x8)
	struct UPDTextBlock* TB_Death; // 0x2D8(0x8)
	struct UPDTextBlock* TB_Assist; // 0x2E0(0x8)
	struct UPDTextBlock* TB_Rescue; // 0x2E8(0x8)
	struct UPDTextBlock* TB_Mission; // 0x2F0(0x8)
	struct UPDTextBlock* TB_Alive; // 0x2F8(0x8)
	struct UPDTextBlock* TB_AttackDamage; // 0x300(0x8)
	struct UPDTextBlock* TB_Damage; // 0x308(0x8)
	struct UPDTextBlock* TB_UseCoin; // 0x310(0x8)
	struct UPDTextBlock* TB_Invest; // 0x318(0x8)
	struct UCanvasPanel* CP_ClanMark; // 0x320(0x8)
	struct UImage* IMG_ClanMarkBG; // 0x328(0x8)
	struct UImage* IMG_ClanMark; // 0x330(0x8)
	unsigned char UnknownData_338[0x0010]; // 0x338(0x10)
};

// Class ProjectD.PDResultTitleAchieveItem
// Size : 0x2C0 (Inherited : 0x288)
struct UPDResultTitleAchieveItem : UPDUserWidget {
	struct UPDTextBlock* T_Achieve_Title; // 0x288(0x8)
	struct UPDTextBlock* T_Achieve_Desc; // 0x290(0x8)
	struct UPDTextBlock* T_Achieve_DescInfo; // 0x298(0x8)
	struct UPDTextBlock* T_Achieve_RecordName; // 0x2A0(0x8)
	struct UPDTextBlock* T_Achieve_Record; // 0x2A8(0x8)
	struct UImage* IMG_TopBg; // 0x2B0(0x8)
	struct UImage* IMG_BottomBg; // 0x2B8(0x8)
};

// Class ProjectD.PDResultTitleAgentNameItem
// Size : 0x2D0 (Inherited : 0x288)
struct UPDResultTitleAgentNameItem : UPDUserWidget {
	struct UPDTextBlock* T_UserName; // 0x288(0x8)
	struct UPDTextBlock* T_ClanName; // 0x290(0x8)
	struct UImage* IMG_Medal_01; // 0x298(0x8)
	struct UImage* IMG_Medal_02; // 0x2A0(0x8)
	struct UImage* IMG_Medal_03; // 0x2A8(0x8)
	struct UImage* IMG_Medal_04; // 0x2B0(0x8)
	struct UImage* IMG_Medal_05; // 0x2B8(0x8)
	struct UBorder* B_ClanMark_Bg; // 0x2C0(0x8)
	struct UImage* IMG_ClanMark; // 0x2C8(0x8)
};

// Class ProjectD.PDResultTitleItem
// Size : 0x308 (Inherited : 0x288)
struct UPDResultTitleItem : UPDUserWidget {
	struct UPDResultTitleAgentNameItem* RTANI_Agent; // 0x288(0x8)
	struct UPDResultTitleAchieveItem* RTAI_Title; // 0x290(0x8)
	struct UCanvasPanel* CP_RankNumber; // 0x298(0x8)
	struct UCanvasPanel* CP_RankRecord; // 0x2A0(0x8)
	struct UImage* IMG_RankRecordBg; // 0x2A8(0x8)
	struct UPDTextBlock* TB_RankRecordPoint; // 0x2B0(0x8)
	struct UWidgetSwitcher* WS_Rank; // 0x2B8(0x8)
	struct UHorizontalBox* HB_UserData; // 0x2C0(0x8)
	struct UImage* IMG_Medal1; // 0x2C8(0x8)
	struct UImage* IMG_Medal2; // 0x2D0(0x8)
	struct UImage* IMG_Medal3; // 0x2D8(0x8)
	unsigned char UnknownData_2E0[0x0028]; // 0x2E0(0x28)
};

// Class ProjectD.PDRingCommandUI
// Size : 0x4C0 (Inherited : 0x290)
struct UPDRingCommandUI : UPDIngameModeWidget {
	struct UCanvasPanel* CP_Category; // 0x290(0x8)
	struct UCanvasPanel* CP_Menu; // 0x298(0x8)
	struct URetainerBox* RB_Menu; // 0x2A0(0x8)
	struct UCanvasPanel* CP_Inner; // 0x2A8(0x8)
	struct UBorder* W_DirectionRing; // 0x2B0(0x8)
	struct UCanvasPanel* CP_Ring1; // 0x2B8(0x8)
	struct UCanvasPanel* CP_Ring2; // 0x2C0(0x8)
	struct UCanvasPanel* CP_Ring3; // 0x2C8(0x8)
	struct UCanvasPanel* CP_Ring6; // 0x2D0(0x8)
	struct UImage* IMG_Hovered1; // 0x2D8(0x8)
	struct UImage* IMG_Hovered2_1; // 0x2E0(0x8)
	struct UImage* IMG_Hovered2_2; // 0x2E8(0x8)
	struct UImage* IMG_Hovered3_1; // 0x2F0(0x8)
	struct UImage* IMG_Hovered3_2; // 0x2F8(0x8)
	struct UImage* IMG_Hovered3_3; // 0x300(0x8)
	struct UImage* IMG_Hovered6_1; // 0x308(0x8)
	struct UImage* IMG_Hovered6_2; // 0x310(0x8)
	struct UImage* IMG_Hovered6_3; // 0x318(0x8)
	struct UImage* IMG_Hovered6_4; // 0x320(0x8)
	struct UImage* IMG_Hovered6_5; // 0x328(0x8)
	struct UImage* IMG_Hovered6_6; // 0x330(0x8)
	struct UImage* IMG_Icon0; // 0x338(0x8)
	struct UImage* IMG_Icon1; // 0x340(0x8)
	struct UImage* IMG_Icon2; // 0x348(0x8)
	struct UImage* IMG_Icon3; // 0x350(0x8)
	struct UImage* IMG_Icon4; // 0x358(0x8)
	struct UImage* IMG_Icon5; // 0x360(0x8)
	struct UPDTextBlock* TB_Text0; // 0x368(0x8)
	struct UPDTextBlock* TB_Text1; // 0x370(0x8)
	struct UPDTextBlock* TB_Text2; // 0x378(0x8)
	struct UPDTextBlock* TB_Text3; // 0x380(0x8)
	struct UPDTextBlock* TB_Text4; // 0x388(0x8)
	struct UPDTextBlock* TB_Text5; // 0x390(0x8)
	struct USizeBox* SB_Key0; // 0x398(0x8)
	struct USizeBox* SB_Key1; // 0x3A0(0x8)
	struct USizeBox* SB_Key2; // 0x3A8(0x8)
	struct USizeBox* SB_Key3; // 0x3B0(0x8)
	struct USizeBox* SB_Key4; // 0x3B8(0x8)
	struct USizeBox* SB_Key5; // 0x3C0(0x8)
	struct UPDTextBlock* TB_Key0; // 0x3C8(0x8)
	struct UPDTextBlock* TB_Key1; // 0x3D0(0x8)
	struct UPDTextBlock* TB_Key2; // 0x3D8(0x8)
	struct UPDTextBlock* TB_Key3; // 0x3E0(0x8)
	struct UPDTextBlock* TB_Key4; // 0x3E8(0x8)
	struct UPDTextBlock* TB_Key5; // 0x3F0(0x8)
	struct UBorder* BD_Category1; // 0x3F8(0x8)
	struct UBorder* BD_Category2; // 0x400(0x8)
	struct UBorder* BD_Category3; // 0x408(0x8)
	struct UBorder* BD_Category4; // 0x410(0x8)
	struct UBorder* BD_Category5; // 0x418(0x8)
	struct TArray<struct UBorder*> CategoryList; // 0x420(0x10)
	float GlitchIntensity; // 0x430(0x4)
	float GlitchDuration; // 0x434(0x4)
	unsigned char UnknownData_438[0x0088]; // 0x438(0x88)
};

// Class ProjectD.PDRoadActor
// Size : 0x298 (Inherited : 0x220)
struct APDRoadActor : AActor {
	enum class EGuideType GuideType; // 0x220(0x1)
	unsigned char UnknownData_221[0x0007]; // 0x221(0x7)
	struct UArrowComponent* StartArrow; // 0x228(0x8)
	struct UPDSplineComponent* MainSpline; // 0x230(0x8)
	struct APDRoadActor* Parent; // 0x238(0x8)
	unsigned char UnknownData_240[0x0058]; // 0x240(0x58)
};

// Class ProjectD.PDRoundInfoUI
// Size : 0x3B8 (Inherited : 0x290)
struct UPDRoundInfoUI : UPDIngameModeWidget {
	struct UCanvasPanel* CP_PlayTimeBomb; // 0x290(0x8)
	struct UCanvasPanel* CP_RoundScore; // 0x298(0x8)
	struct UImage* IMG_Defuse; // 0x2A0(0x8)
	struct UPDTextBlock* TB_ShopNoti; // 0x2A8(0x8)
	struct UPDTextBlock* TB_Round; // 0x2B0(0x8)
	struct UPanelWidget* PW_ShopGuide; // 0x2B8(0x8)
	struct UPDTextBlock* T_ShopKey; // 0x2C0(0x8)
	struct UHorizontalBox* HB_EntryA; // 0x2C8(0x8)
	struct UHorizontalBox* HB_EntryB; // 0x2D0(0x8)
	struct UPDTextBlock* TB_ScoreA; // 0x2D8(0x8)
	struct UPDTextBlock* TB_ScoreB; // 0x2E0(0x8)
	struct UImage* IMG_TeamStateA; // 0x2E8(0x8)
	struct UImage* IMG_TeamStateB; // 0x2F0(0x8)
	struct UBorder* BD_ScoreBackL; // 0x2F8(0x8)
	struct UBorder* BD_ScoreBackR; // 0x300(0x8)
	struct UPDSeedProgressModule* SSM_SeedProgress; // 0x308(0x8)
	struct UImage* IMG_Highlight_Tutorial; // 0x310(0x8)
	int32_t WarningShopTime; // 0x318(0x4)
	struct FMargin EntryPadding; // 0x31C(0x10)
	unsigned char UnknownData_32C[0x008C]; // 0x32C(0x8C)
};

// Class ProjectD.PDRoundRecord
// Size : 0x2F8 (Inherited : 0x288)
struct UPDRoundRecord : UPDUserWidget {
	struct UImage* IMG_MVPBack; // 0x288(0x8)
	struct UImage* IMG_MVP; // 0x290(0x8)
	struct UImage* IMG_GlowFx; // 0x298(0x8)
	struct UImage* IMG_ClanMarkBG; // 0x2A0(0x8)
	struct UImage* IMG_ClanMarkFG; // 0x2A8(0x8)
	struct UPDTextBlock* TB_Character; // 0x2B0(0x8)
	struct UPDTextBlock* TB_Player; // 0x2B8(0x8)
	struct UPDRoundRecordItem* MVPRecord01; // 0x2C0(0x8)
	struct UPDRoundRecordItem* MVPRecord02; // 0x2C8(0x8)
	struct UPDRoundRecordItem* MVPRecord03; // 0x2D0(0x8)
	struct UPDRoundRecordItem* MVPRecord04; // 0x2D8(0x8)
	struct UPDRoundRecordItem* MVPRecord05; // 0x2E0(0x8)
	struct TArray<struct UPDRoundRecordItem*> MVPRecords; // 0x2E8(0x10)
};

// Class ProjectD.PDRoundRecordItem
// Size : 0x2B0 (Inherited : 0x288)
struct UPDRoundRecordItem : UPDUserWidget {
	struct UPDTextBlock* TB_Title; // 0x288(0x8)
	struct UPDTextBlock* TB_Content; // 0x290(0x8)
	struct UImage* IMG_Coin; // 0x298(0x8)
	bool VisibleCoinIcon; // 0x2A0(0x1)
	unsigned char UnknownData_2A1[0x0007]; // 0x2A1(0x7)
	struct UImage* IMG_Glow; // 0x2A8(0x8)
};

// Class ProjectD.PDRoundReplayer
// Size : 0x3D8 (Inherited : 0x290)
struct UPDRoundReplayer : UPDIngameModeWidget {
	struct UPDKillLogUI* KillLog; // 0x290(0x8)
	struct UPDPlayLogMapModule* ReplayGameMap; // 0x298(0x8)
	struct UPDTabButton* Btn_Play; // 0x2A0(0x8)
	struct UPDTabButton* Btn_Stop; // 0x2A8(0x8)
	struct UPDTabButton* Btn_Pause; // 0x2B0(0x8)
	struct UPDTextBlock* TB_CurMin; // 0x2B8(0x8)
	struct UPDTextBlock* TB_CurSec; // 0x2C0(0x8)
	struct UPDTextBlock* TB_MaxMin; // 0x2C8(0x8)
	struct UPDTextBlock* TB_MaxSec; // 0x2D0(0x8)
	struct UPDTextBlock* T_Replay; // 0x2D8(0x8)
	struct UPDSlider* S_TimePicker; // 0x2E0(0x8)
	struct UPDTabButton* Btn_Normal; // 0x2E8(0x8)
	struct UPDTabButton* Btn_Double; // 0x2F0(0x8)
	struct UPDTabButton* Btn_Quadruple; // 0x2F8(0x8)
	struct UPDButton* Btn_Round; // 0x300(0x8)
	struct UBorder* BD_PlayerBarCover; // 0x308(0x8)
	struct UPDTextBlock* T_Dropdown_Round; // 0x310(0x8)
	struct UPDTextBlock* T_Dropdown_Match; // 0x318(0x8)
	struct UPDTextBlock* T_Dropdown_Time; // 0x320(0x8)
	struct UImage* IMG_Dropdown_Arrow; // 0x328(0x8)
	struct UPDStatusBoardRoundList* StatusBoardRoundList; // 0x330(0x8)
	struct UCanvasPanel* CP_ReplayerScreen; // 0x338(0x8)
	struct UProgressBar* PB_PlayerBar; // 0x340(0x8)
	struct UCanvasPanel* CP_ReplayMenu; // 0x348(0x8)
	struct UPDButton* Btn_Replay_Close; // 0x350(0x8)
	struct UCanvasPanel* CP_PlaySpeedView; // 0x358(0x8)
	struct UPDTextBlock* TB_PlayerSpeed; // 0x360(0x8)
	struct UPDTabButtonGroup* SpeedCategoryGroup; // 0x368(0x8)
	struct UPDTabButtonGroup* PlayCategoryGroup; // 0x370(0x8)
	unsigned char UnknownData_378[0x0060]; // 0x378(0x60)

	void OnValueChanged(float InValue); // Function ProjectD.PDRoundReplayer.OnValueChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C81000
	void OnMouseCaptureBegin(); // Function ProjectD.PDRoundReplayer.OnMouseCaptureBegin // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C7B360
	void OnClickQuadrupleSpeed(); // Function ProjectD.PDRoundReplayer.OnClickQuadrupleSpeed // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C80FE0
	void OnClickPlayLogStop(); // Function ProjectD.PDRoundReplayer.OnClickPlayLogStop // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C80FC0
	void OnClickPlayLogStart(); // Function ProjectD.PDRoundReplayer.OnClickPlayLogStart // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C80FA0
	void OnClickPlayLogPause(); // Function ProjectD.PDRoundReplayer.OnClickPlayLogPause // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C80F80
	void OnClickNormalSpeed(); // Function ProjectD.PDRoundReplayer.OnClickNormalSpeed // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C80F60
	void OnClickDoubleSpeed(); // Function ProjectD.PDRoundReplayer.OnClickDoubleSpeed // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C80F40
	void MouseCaptureEnd(); // Function ProjectD.PDRoundReplayer.MouseCaptureEnd // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C80F20
};

// Class ProjectD.PDRoundResult
// Size : 0x338 (Inherited : 0x290)
struct UPDRoundResult : UPDIngameModeWidget {
	struct UBorder* BD_ResultContent02; // 0x290(0x8)
	struct UImage* IMG_RR_TitleColorR_4; // 0x298(0x8)
	struct UPDTextBlock* TB_ResultText00; // 0x2A0(0x8)
	struct UPDTextBlock* TB_ResultText01; // 0x2A8(0x8)
	struct UPDTextBlock* TB_Count; // 0x2B0(0x8)
	struct UImage* IMG_TitleBack00; // 0x2B8(0x8)
	struct UImage* IMG_TitleBack01; // 0x2C0(0x8)
	struct UImage* IMG_TitleBack02; // 0x2C8(0x8)
	struct UImage* IMG_TitleReusltColor; // 0x2D0(0x8)
	struct UImage* IMG_Dot01; // 0x2D8(0x8)
	struct UPDTextBlock* TB_EndRound; // 0x2E0(0x8)
	struct UImage* IMG_RR_LeftTeamBack; // 0x2E8(0x8)
	struct UPDTextBlock* TB_LeftTeam; // 0x2F0(0x8)
	struct UImage* IMG_RightTeamBack; // 0x2F8(0x8)
	struct UPDTextBlock* TB_FoeName; // 0x300(0x8)
	struct UHorizontalBox* HB_RoundRoot; // 0x308(0x8)
	struct TArray<struct UPDResultRoundItemUI*> RoundItems; // 0x310(0x10)
	struct UPDRoundReview* Review; // 0x320(0x8)
	unsigned char UnknownData_328[0x0010]; // 0x328(0x10)
};

// Class ProjectD.PDRoundReview
// Size : 0x390 (Inherited : 0x288)
struct UPDRoundReview : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UImage* IMG_MVP_Text; // 0x290(0x8)
	struct UImage* IMG_Fx; // 0x298(0x8)
	struct UImage* IMG_GlowFx; // 0x2A0(0x8)
	struct UImage* IMG_KEY; // 0x2A8(0x8)
	struct UImage* IMG_Rating; // 0x2B0(0x8)
	struct UImage* IMG_ClanMarkBG_Ally; // 0x2B8(0x8)
	struct UImage* IMG_ClanMarkFG_Ally; // 0x2C0(0x8)
	struct UPDTextBlock* TB_UserName; // 0x2C8(0x8)
	struct UPDRoundRecordItem* AllyRecord01; // 0x2D0(0x8)
	struct UPDRoundRecordItem* AllyRecord02; // 0x2D8(0x8)
	struct UPDRoundRecordItem* AllyRecord03; // 0x2E0(0x8)
	struct UPDRoundRecordItem* AllyRecord04; // 0x2E8(0x8)
	struct UPDRoundRecordItem* AllyRecord05; // 0x2F0(0x8)
	struct UPDRoundRecordItem* AllyRecord06; // 0x2F8(0x8)
	struct TArray<struct UPDRoundRecordItem*> AllyKeyRecords; // 0x300(0x10)
	struct UImage* IMG_FX_Foe; // 0x310(0x8)
	struct UImage* IMG_GlowFx_Foe; // 0x318(0x8)
	struct UImage* IMG_KEY_foe; // 0x320(0x8)
	struct UImage* IMG_Rating_Foe; // 0x328(0x8)
	struct UImage* IMG_ClanMarkBG_Enemy; // 0x330(0x8)
	struct UImage* IMG_ClanMarkFG_Enemy; // 0x338(0x8)
	struct UPDTextBlock* TB_UserName_Foe; // 0x340(0x8)
	struct UPDRoundRecordItem* EnemyRecord01; // 0x348(0x8)
	struct UPDRoundRecordItem* EnemyRecord02; // 0x350(0x8)
	struct UPDRoundRecordItem* EnemyRecord03; // 0x358(0x8)
	struct UPDRoundRecordItem* EnemyRecord04; // 0x360(0x8)
	struct UPDRoundRecordItem* EnemyRecord05; // 0x368(0x8)
	struct UPDRoundRecordItem* EnemyRecord06; // 0x370(0x8)
	struct UPDRoundReplayer* RoundReplayer; // 0x378(0x8)
	struct TArray<struct UPDRoundRecordItem*> EnemyKeyRecords; // 0x380(0x10)
};

// Class ProjectD.PDRoundWaitUI
// Size : 0x298 (Inherited : 0x290)
struct UPDRoundWaitUI : UPDIngameModeWidget {
	struct UPDTextBlock* TB_Desc; // 0x290(0x8)
};

// Class ProjectD.PDScreenMarkerLoot
// Size : 0x2B8 (Inherited : 0x2A0)
struct UPDScreenMarkerLoot : UPDHUDIconBaseUI {
	struct UCanvasPanel* CP_Root; // 0x2A0(0x8)
	struct UPDCircleProgressModule* PB_LootTime; // 0x2A8(0x8)
	unsigned char UnknownData_2B0[0x0008]; // 0x2B0(0x8)
};

// Class ProjectD.PDScreenToGIF
// Size : 0xB0 (Inherited : 0x28)
struct UPDScreenToGIF : UObject {
	unsigned char UnknownData_28[0x0088]; // 0x28(0x88)

	void TimerFunc_FrameTick(); // Function ProjectD.PDScreenToGIF.TimerFunc_FrameTick // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C81080
};

// Class ProjectD.PDSeedProgressModule
// Size : 0x2D8 (Inherited : 0x288)
struct UPDSeedProgressModule : UPDUserWidget {
	struct FDelegate GetProgressPerDelegate; // 0x288(0x10)
	struct UPDTextBlock* TB_SeedDesc; // 0x298(0x8)
	struct UPDTextBlock* TB_PerText; // 0x2A0(0x8)
	struct UProgressBar* PRG_SeedSet; // 0x2A8(0x8)
	struct UImage* IMG_Icon; // 0x2B0(0x8)
	struct UImage* IMG_GaugeLight; // 0x2B8(0x8)
	struct UCanvasPanel* CP_Gauge; // 0x2C0(0x8)
	unsigned char UnknownData_2C8[0x0010]; // 0x2C8(0x10)
};

// Class ProjectD.PDShowBowStringNotify
// Size : 0x50 (Inherited : 0x48)
struct UPDShowBowStringNotify : UPDBaseAnimNotify {
	enum class EBowStringAction Action; // 0x48(0x1)
	unsigned char UnknownData_49[0x0007]; // 0x49(0x7)
};

// Class ProjectD.PDSkeletalMeshComponent
// Size : 0xB20 (Inherited : 0xAD0)
struct UPDSkeletalMeshComponent : USkeletalMeshComponent {
	unsigned char bEnableLag : 1; // 0xAC8(0x1)
	float LagSpeed; // 0xACC(0x4)
	float LagMaxTimeStep; // 0xAD0(0x4)
	float DistanceThreashold; // 0xAD4(0x4)
	unsigned char m_bEnableSystemLag : 1; // 0xAD8(0x1)
	unsigned char m_bEnableLag : 1; // 0xAD8(0x1)
	unsigned char m_bUpdateLag : 1; // 0xAD8(0x1)
	unsigned char UnknownData_ADC_4 : 4; // 0xADC(0x1)
	unsigned char UnknownData_ADD[0x0007]; // 0xADD(0x7)
	float m_OrgRelativeLocationZ; // 0xAE4(0x4)
	struct FVector PreviousDesiredLoc; // 0xAE8(0xC)
	struct FVector CurrentCharacterLoc; // 0xAF4(0xC)
	float m_fCurrentRelativeZOffset; // 0xB00(0x4)
	struct FVector RelativeSocketLocation; // 0xB04(0xC)
	struct ACharacter* m_pOwnerCharacter; // 0xB10(0x8)
	struct USkeletalMeshComponent* m_pTargetSkeletalMesh; // 0xB18(0x8)
};

// Class ProjectD.PDSkeletalMeshLibrary
// Size : 0x28 (Inherited : 0x28)
struct UPDSkeletalMeshLibrary : UBlueprintFunctionLibrary {

	struct USkeletalMesh* MergeMeshes(struct FSkeletalMeshMergeParams Params); // Function ProjectD.PDSkeletalMeshLibrary.MergeMeshes // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x50, 0x7FF653C80E00
};

// Class ProjectD.PDSkyViewUI
// Size : 0x358 (Inherited : 0x288)
struct UPDSkyViewUI : UPDUserWidget {
	struct UCanvasPanel* CP_Map; // 0x288(0x8)
	struct UCanvasPanel* CP_DefuseBomb; // 0x290(0x8)
	struct UCanvasPanel* CP_MissionScore; // 0x298(0x8)
	struct UWidgetSwitcher* WS_BattleStyle; // 0x2A0(0x8)
	struct URichTextBlock* RTB_SeedAlert; // 0x2A8(0x8)
	struct UPDTextBlock* TB_AtkStr; // 0x2B0(0x8)
	struct UPDTextBlock* TB_DefStr; // 0x2B8(0x8)
	struct UPDGameMapModule* GameMap; // 0x2C0(0x8)
	struct UImage* IMG_Agent; // 0x2C8(0x8)
	struct UImage* IMG_PlayerNum; // 0x2D0(0x8)
	struct UTexture* PlayerTextureNum01; // 0x2D8(0x8)
	struct UTexture* PlayerTextureNum02; // 0x2E0(0x8)
	struct UTexture* PlayerTextureNum03; // 0x2E8(0x8)
	struct UTexture* PlayerTextureNum04; // 0x2F0(0x8)
	struct UTexture* PlayerTextureNum05; // 0x2F8(0x8)
	struct UCanvasPanel* CP_Recently01; // 0x300(0x8)
	struct UCanvasPanel* CP_Recently02; // 0x308(0x8)
	struct UImage* IMG_DamageAgent; // 0x310(0x8)
	struct UImage* IMG_FundAgent; // 0x318(0x8)
	struct UImage* IMG_PlayerNum01; // 0x320(0x8)
	struct UImage* IMG_PlayerNum02; // 0x328(0x8)
	struct UPDTextBlock* TB_DamageAgent; // 0x330(0x8)
	struct UPDTextBlock* TB_FundAgent; // 0x338(0x8)
	unsigned char UnknownData_340[0x0018]; // 0x340(0x18)
};

// Class ProjectD.PDSlidableActor
// Size : 0x248 (Inherited : 0x220)
struct APDSlidableActor : AActor {
	unsigned char UnknownData_220[0x0010]; // 0x220(0x10)
	enum class EPDSlidableType SlidableType; // 0x230(0x1)
	unsigned char UnknownData_231[0x0003]; // 0x231(0x3)
	float ArrowDegree; // 0x234(0x4)
	struct UBoxComponent* Box; // 0x238(0x8)
	unsigned char UnknownData_240[0x0008]; // 0x240(0x8)
};

// Class ProjectD.PDSlider
// Size : 0x680 (Inherited : 0x288)
struct UPDSlider : UPDUserWidget {
	struct UPDCustomSlider* Slider; // 0x288(0x8)
	struct UPDTextBlock* Value; // 0x290(0x8)
	struct UEditableText* EB_Value; // 0x298(0x8)
	struct FSlateFontInfo Font; // 0x2A0(0x50)
	struct FLinearColor BarColor; // 0x2F0(0x10)
	struct FSlateColor TextColor; // 0x300(0x28)
	struct FSliderStyle SliderStyle; // 0x328(0x340)
	float StepSize; // 0x668(0x4)
	unsigned char UnknownData_66C[0x0014]; // 0x66C(0x14)

	void OnSliderTextCommitted(struct FText InText, enum class ETextCommit CommitMethod); // Function ProjectD.PDSlider.OnSliderTextCommitted // (Final|Native|Protected|HasOutParms) // Param Size : 0x19, 0x7FF653C83B30
	void OnSliderTextChanged(struct FText InText); // Function ProjectD.PDSlider.OnSliderTextChanged // (Final|Native|Protected|HasOutParms) // Param Size : 0x18, 0x7FF653C83A50
};

// Class ProjectD.PDSoloModeComponent
// Size : 0x4E0 (Inherited : 0x4A0)
struct UPDSoloModeComponent : UStaticMeshComponent {
	struct FActiveRangeInfo ArraySpawnInfo; // 0x498(0x24)
	unsigned char UnknownData_4C4[0x001C]; // 0x4C4(0x1C)
};

// Class ProjectD.PDSoundOptionUI
// Size : 0x360 (Inherited : 0x338)
struct UPDSoundOptionUI : UPDOptionUIBase {
	struct UPDTabButton* SoundSettingBtn; // 0x338(0x8)
	struct UPDTabButton* VoiceSettingBtn; // 0x340(0x8)
	struct UScrollBox* SB_Sounds; // 0x348(0x8)
	unsigned char UnknownData_350[0x0010]; // 0x350(0x10)

	void OnVoiceChatTeamPushToTalk(); // Function ProjectD.PDSoundOptionUI.OnVoiceChatTeamPushToTalk // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C840D0
	void OnVoiceChatTeamOpenMic(); // Function ProjectD.PDSoundOptionUI.OnVoiceChatTeamOpenMic // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C840B0
	void OnVoiceChatSensitiveChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnVoiceChatSensitiveChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C84030
	void OnVoiceChatOutputVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnVoiceChatOutputVolumeChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C83FB0
	void OnVoiceChatNoiseFloorChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnVoiceChatNoiseFloorChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C83F30
	void OnVoiceChatInputVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnVoiceChatInputVolumeChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C83EB0
	void OnVoiceChatEnableChanged(bool Value); // Function ProjectD.PDSoundOptionUI.OnVoiceChatEnableChanged // (Final|Native|Private) // Param Size : 0x1, 0x7FF653C83E20
	void OnSpatialChanged(bool Value); // Function ProjectD.PDSoundOptionUI.OnSpatialChanged // (Final|Native|Private) // Param Size : 0x1, 0x7FF653C83D90
	void OnSoundPresetChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDSoundOptionUI.OnSoundPresetChanged // (Final|Native|Private) // Param Size : 0x11, 0x7FF653C83C60
	void OnSfxVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnSfxVolumeChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C839D0
	void OnOperatorVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnOperatorVolumeChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C83950
	void OnMasterVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnMasterVolumeChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C838D0
	void OnLobbySfxVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnLobbySfxVolumeChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C83850
	void OnLobbyBgmVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnLobbyBgmVolumeChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C837D0
	void OnInputKeySelected(struct UPDOptionContent* Content); // Function ProjectD.PDSoundOptionUI.OnInputKeySelected // (Final|Native|Private) // Param Size : 0x8, 0x7FF653C83750
	void OnHRTFChanged(bool Value); // Function ProjectD.PDSoundOptionUI.OnHRTFChanged // (Final|Native|Private) // Param Size : 0x1, 0x7FF653C836C0
	void OnClickVoiceSettingButton(); // Function ProjectD.PDSoundOptionUI.OnClickVoiceSettingButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C53420
	void OnClickSoundSettingButton(); // Function ProjectD.PDSoundOptionUI.OnClickSoundSettingButton // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C535A0
	void OnCharacterVoiceVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnCharacterVoiceVolumeChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C83640
	void OnBgmVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnBgmVolumeChanged // (Final|Native|Private) // Param Size : 0x4, 0x7FF653C835C0
	void OnBackGroundVolumePlayChanged(bool Value); // Function ProjectD.PDSoundOptionUI.OnBackGroundVolumePlayChanged // (Final|Native|Private) // Param Size : 0x1, 0x7FF653C83530
};

// Class ProjectD.PDSpectatorPlayerEntry
// Size : 0x498 (Inherited : 0x288)
struct UPDSpectatorPlayerEntry : UPDUserWidget {
	struct UImage* IMG_PlayerPic; // 0x288(0x8)
	struct UImage* IMG_PlayerPic_Dead; // 0x290(0x8)
	struct UPDTextBlock* T_PlayerName; // 0x298(0x8)
	struct UBorder* B_PlayerCode; // 0x2A0(0x8)
	struct UPDTextBlock* T_PlayerNum; // 0x2A8(0x8)
	struct UWidgetSwitcher* WS_PlayerState; // 0x2B0(0x8)
	struct UWidgetSwitcher* WS_IconState; // 0x2B8(0x8)
	struct UProgressBar* PB_HP; // 0x2C0(0x8)
	struct UProgressBar* PB_Groggy; // 0x2C8(0x8)
	struct UWidgetSwitcher* WS_Weapon_01; // 0x2D0(0x8)
	struct UImage* IMG_Weapon_01; // 0x2D8(0x8)
	struct UWidgetSwitcher* WS_Weapon_02; // 0x2E0(0x8)
	struct UImage* IMG_Weapon_02; // 0x2E8(0x8)
	struct UWidgetSwitcher* WS_Weapon_03; // 0x2F0(0x8)
	struct UImage* IMG_Weapon_03; // 0x2F8(0x8)
	struct UWidgetSwitcher* WS_Weapon_Melee; // 0x300(0x8)
	struct UImage* IMG_Weapon_Melee; // 0x308(0x8)
	struct UImage* IMG_SlotBG01; // 0x310(0x8)
	struct UImage* IMG_SlotBG02; // 0x318(0x8)
	struct UImage* IMG_SlotBG03; // 0x320(0x8)
	struct UImage* IMG_SlotBGMelee; // 0x328(0x8)
	unsigned char UnknownData_330[0x0158]; // 0x330(0x158)
	struct TArray<struct UImage*> IMG_BGList; // 0x488(0x10)
};

// Class ProjectD.PDSpectatorEntryAlly
// Size : 0x5A0 (Inherited : 0x498)
struct UPDSpectatorEntryAlly : UPDSpectatorPlayerEntry {
	struct UImage* IMG_PlayerState; // 0x498(0x8)
	struct UPDArmorGauge* ArmorGauge; // 0x4A0(0x8)
	struct UWidgetSwitcher* WS_Weapon_04; // 0x4A8(0x8)
	struct UWidgetSwitcher* WS_Weapon_Th1; // 0x4B0(0x8)
	struct UImage* IMG_Weapon_Th1; // 0x4B8(0x8)
	struct UPDTextBlock* TB_Weapon_Th1; // 0x4C0(0x8)
	struct UWidgetSwitcher* WS_Weapon_Th2; // 0x4C8(0x8)
	struct UImage* IMG_Weapon_Th2; // 0x4D0(0x8)
	struct UPDTextBlock* TB_Weapon_Th2; // 0x4D8(0x8)
	struct UWidgetSwitcher* WS_Weapon_05; // 0x4E0(0x8)
	struct UImage* IMG_Weapon_05; // 0x4E8(0x8)
	struct UPDTextBlock* TB_Weapon_05; // 0x4F0(0x8)
	struct UWidgetSwitcher* WS_Weapon_06; // 0x4F8(0x8)
	struct UImage* IMG_Weapon_06; // 0x500(0x8)
	struct UPDTextBlock* TB_Weapon_06; // 0x508(0x8)
	struct UWidgetSwitcher* WS_Weapon_07; // 0x510(0x8)
	struct UImage* IMG_Weapon_07; // 0x518(0x8)
	struct UPDTextBlock* TB_Weapon_07; // 0x520(0x8)
	struct UImage* IMG_ModeItem; // 0x528(0x8)
	struct UPDTextBlock* TB_ModeItem_Empty; // 0x530(0x8)
	struct UImage* IMG_PowerArmor; // 0x538(0x8)
	struct UPDTextBlock* TB_PowerArmor_Empty; // 0x540(0x8)
	struct UImage* IMG_RevivalKit; // 0x548(0x8)
	struct UPDTextBlock* TB_RevivalKit_Empty; // 0x550(0x8)
	struct UImage* IMG_Outline_Self; // 0x558(0x8)
	struct UImage* IMG_Outline_Target; // 0x560(0x8)
	struct UImage* IMG_SlotBG04; // 0x568(0x8)
	struct UImage* IMG_SlotBG05; // 0x570(0x8)
	struct UImage* IMG_SlotBG06; // 0x578(0x8)
	struct UImage* IMG_SlotBG07; // 0x580(0x8)
	struct UImage* IMG_SlotBGSeed; // 0x588(0x8)
	struct UImage* IMG_SlotBGRevival; // 0x590(0x8)
	struct UImage* IMG_SlotBGAgent; // 0x598(0x8)
};

// Class ProjectD.PDSpectatorTargetInfo
// Size : 0x4E8 (Inherited : 0x288)
struct UPDSpectatorTargetInfo : UPDUserWidget {
	struct UCanvasPanel* CP_Health; // 0x288(0x8)
	struct UProgressBar* PB_Health; // 0x290(0x8)
	struct UProgressBar* PB_Health_Expect; // 0x298(0x8)
	struct UProgressBar* PB_Health_Inc; // 0x2A0(0x8)
	struct UProgressBar* PB_Health_Dec; // 0x2A8(0x8)
	struct UPDTextBlock* TB_Health; // 0x2B0(0x8)
	struct UPDTextBlock* TB_TotalHealth; // 0x2B8(0x8)
	struct UPDTextBlock* TB_Health_w; // 0x2C0(0x8)
	struct UPDTextBlock* TB_TotalHealth_w; // 0x2C8(0x8)
	struct UCanvasPanel* CP_BlackMask; // 0x2D0(0x8)
	struct UCanvasPanel* CP_WhiteMask; // 0x2D8(0x8)
	struct FVector2D HealthSize; // 0x2E0(0x8)
	unsigned char UnknownData_2E8[0x0018]; // 0x2E8(0x18)
	struct UCanvasPanel* CP_GroggyHP; // 0x300(0x8)
	struct UProgressBar* PB_GroggyHP; // 0x308(0x8)
	struct UPDArmorGaugeDetail* ArmorGauge; // 0x310(0x8)
	struct UPDPlayerEquipmentDetail* EquipmentDetail; // 0x318(0x8)
	struct UImage* IMG_KeyFill_Q; // 0x320(0x8)
	struct UImage* IMG_KeyFill_W; // 0x328(0x8)
	struct UImage* IMG_KeyFill_E; // 0x330(0x8)
	struct UImage* IMG_KeyFill_R; // 0x338(0x8)
	struct UImage* IMG_KeyFill_A; // 0x340(0x8)
	struct UImage* IMG_KeyFill_S; // 0x348(0x8)
	struct UImage* IMG_KeyFill_D; // 0x350(0x8)
	struct UImage* IMG_KeyFill_F; // 0x358(0x8)
	struct UImage* IMG_KeyFill_Z; // 0x360(0x8)
	struct UImage* IMG_KeyFill_X; // 0x368(0x8)
	struct UImage* IMG_KeyFill_C; // 0x370(0x8)
	struct UImage* IMG_KeyFill_V; // 0x378(0x8)
	struct UImage* IMG_KeyFill_LShift; // 0x380(0x8)
	struct UImage* IMG_KeyFill_LCtrl; // 0x388(0x8)
	struct UImage* IMG_KeyFill_Space; // 0x390(0x8)
	struct UImage* IMG_KeyFill_MLB; // 0x398(0x8)
	struct UImage* IMG_KeyFill_MRB; // 0x3A0(0x8)
	struct UImage* IMG_KeyFill_MMB; // 0x3A8(0x8)
	struct UImage* IMG_KeyFill_MWU; // 0x3B0(0x8)
	struct UImage* IMG_KeyFill_MWD; // 0x3B8(0x8)
	struct UPDTextBlock* TB_Key_Q; // 0x3C0(0x8)
	struct UPDTextBlock* TB_Key_W; // 0x3C8(0x8)
	struct UPDTextBlock* TB_Key_E; // 0x3D0(0x8)
	struct UPDTextBlock* TB_Key_R; // 0x3D8(0x8)
	struct UPDTextBlock* TB_Key_A; // 0x3E0(0x8)
	struct UPDTextBlock* TB_Key_S; // 0x3E8(0x8)
	struct UPDTextBlock* TB_Key_D; // 0x3F0(0x8)
	struct UPDTextBlock* TB_Key_F; // 0x3F8(0x8)
	struct UPDTextBlock* TB_Key_Z; // 0x400(0x8)
	struct UPDTextBlock* TB_Key_X; // 0x408(0x8)
	struct UPDTextBlock* TB_Key_C; // 0x410(0x8)
	struct UPDTextBlock* TB_Key_V; // 0x418(0x8)
	struct UPDTextBlock* TB_Key_LShift; // 0x420(0x8)
	struct UPDTextBlock* TB_Key_LCtrl; // 0x428(0x8)
	struct UPDTextBlock* TB_Key_Space; // 0x430(0x8)
	unsigned char UnknownData_438[0x00B0]; // 0x438(0xB0)
};

// Class ProjectD.PDSpectatorUI
// Size : 0x320 (Inherited : 0x290)
struct UPDSpectatorUI : UPDIngameModeWidget {
	struct UPDTextBlock* TB_Name; // 0x290(0x8)
	struct UPDSpectatorTargetInfo* TargetInfo; // 0x298(0x8)
	struct UVerticalBox* VB_AllyTeam; // 0x2A0(0x8)
	struct UVerticalBox* VB_EnemyTeam; // 0x2A8(0x8)
	struct UPanelWidget* PW_CheerList; // 0x2B0(0x8)
	struct UCanvasPanel* CP_CheerTarget; // 0x2B8(0x8)
	struct UHorizontalBox* HB_UserData; // 0x2C0(0x8)
	struct UImage* IMG_Medal1; // 0x2C8(0x8)
	struct UImage* IMG_Medal2; // 0x2D0(0x8)
	struct UImage* IMG_Medal3; // 0x2D8(0x8)
	struct TArray<struct UPDSpectatorPlayerEntry*> AllyPlayers; // 0x2E0(0x10)
	struct TArray<struct UPDSpectatorPlayerEntry*> EnemyPlayers; // 0x2F0(0x10)
	struct TArray<struct UWidget*> Cheers; // 0x300(0x10)
	unsigned char UnknownData_310[0x0010]; // 0x310(0x10)
};

// Class ProjectD.PDSplineCamera
// Size : 0x7E0 (Inherited : 0x7B0)
struct APDSplineCamera : ACameraActor {
	struct USplineComponent* SplineComp; // 0x7B0(0x8)
	struct UStaticMeshComponent* OriginComp; // 0x7B8(0x8)
	float PlayingTime; // 0x7C0(0x4)
	float TotalTime; // 0x7C4(0x4)
	bool IsLoop; // 0x7C8(0x1)
	bool IsPlaying; // 0x7C9(0x1)
	enum class ESplineRotation RotationType; // 0x7CA(0x1)
	unsigned char UnknownData_7CB[0x0005]; // 0x7CB(0x5)
	struct AActor* LookAtTarget; // 0x7D0(0x8)
	enum class ESplineTrace TraceMode; // 0x7D8(0x1)
	unsigned char UnknownData_7D9[0x0007]; // 0x7D9(0x7)
};

// Class ProjectD.PDSplineCameraTimelineComponent
// Size : 0x108 (Inherited : 0xB0)
struct UPDSplineCameraTimelineComponent : UPDTimelineBaseComponent {
	struct TArray<struct FEventData> EventDataArray; // 0xB0(0x10)
	unsigned char UnknownData_C0[0x0048]; // 0xC0(0x48)
};

// Class ProjectD.PDSplineComponent
// Size : 0x510 (Inherited : 0x500)
struct UPDSplineComponent : USplineComponent {
	struct TArray<struct FRuntimeFloatCurve> TimelineCurveList; // 0x4F8(0x10)
};

// Class ProjectD.PDSplitObject
// Size : 0x270 (Inherited : 0x220)
struct APDSplitObject : AActor {
	unsigned char UnknownData_220[0x0010]; // 0x220(0x10)
	struct TArray<struct UPDSplitObjectComponent*> SplitObjectCompList; // 0x230(0x10)
	struct TArray<enum class EDamageType> EffectiveDamages; // 0x240(0x10)
	struct FString DestructSound; // 0x250(0x10)
	unsigned char UnknownData_260[0x0010]; // 0x260(0x10)
};

// Class ProjectD.PDSplitObject2x2
// Size : 0x270 (Inherited : 0x270)
struct APDSplitObject2x2 : APDSplitObject {
};

// Class ProjectD.PDSplitObject3x3
// Size : 0x270 (Inherited : 0x270)
struct APDSplitObject3x3 : APDSplitObject {
};

// Class ProjectD.PDSplitObjectComponent
// Size : 0x4C0 (Inherited : 0x4A0)
struct UPDSplitObjectComponent : UStaticMeshComponent {
	bool RootNode; // 0x498(0x1)
	int32_t HP; // 0x49C(0x4)
	int32_t DestructEffectID; // 0x4A0(0x4)
	unsigned char UnknownData_4A9[0x0017]; // 0x4A9(0x17)
};

// Class ProjectD.PDStartUI
// Size : 0x2C0 (Inherited : 0x288)
struct UPDStartUI : UPDSceneBaseUI {
	struct UCanvasPanel* CP_Ratings; // 0x288(0x8)
	struct UBorder* B_MovieBG; // 0x290(0x8)
	struct UWidget* IMG_Movie; // 0x298(0x8)
	struct UMediaPlayer* SplashMediaPlayer; // 0x2A0(0x8)
	struct FString SplashFilePath; // 0x2A8(0x10)
	unsigned char UnknownData_2B8[0x0008]; // 0x2B8(0x8)

	void OnSplashMovieOpened(); // Function ProjectD.PDStartUI.OnSplashMovieOpened // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF653C87710
	void OnSplashMovieClosed(); // Function ProjectD.PDStartUI.OnSplashMovieClosed // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF653C876F0
	void OnInitMediaPlayer(); // Function ProjectD.PDStartUI.OnInitMediaPlayer // (Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
};

// Class ProjectD.PDStateBase
// Size : 0x40 (Inherited : 0x28)
struct UPDStateBase : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	struct UPDStateComponent* OwnerStateComponent; // 0x30(0x8)
	struct APDPlayerCharacter* OwnerPlayerCharacter; // 0x38(0x8)
};

// Class ProjectD.PDStateClimb
// Size : 0x40 (Inherited : 0x40)
struct UPDStateClimb : UPDStateBase {
};

// Class ProjectD.PDStateDefault
// Size : 0x40 (Inherited : 0x40)
struct UPDStateDefault : UPDStateBase {
};

// Class ProjectD.PDStateGaugeUI
// Size : 0x2B0 (Inherited : 0x290)
struct UPDStateGaugeUI : UPDIngameModeWidget {
	struct UCanvasPanel* CP_GroggyHP; // 0x290(0x8)
	struct UProgressBar* PB_GroggyHP; // 0x298(0x8)
	struct UCanvasPanel* CP_StaminaGauge; // 0x2A0(0x8)
	struct UProgressBar* PB_StaminaGauge; // 0x2A8(0x8)
};

// Class ProjectD.PDStateGroggy
// Size : 0x48 (Inherited : 0x40)
struct UPDStateGroggy : UPDStateBase {
	unsigned char UnknownData_40[0x0008]; // 0x40(0x8)
};

// Class ProjectD.PDStateSlide
// Size : 0x50 (Inherited : 0x40)
struct UPDStateSlide : UPDStateBase {
	unsigned char UnknownData_40[0x0010]; // 0x40(0x10)
};

// Class ProjectD.PDStateZipline
// Size : 0x40 (Inherited : 0x40)
struct UPDStateZipline : UPDStateBase {
};

// Class ProjectD.PDStaticActorEntity
// Size : 0x230 (Inherited : 0x220)
struct APDStaticActorEntity : AActor {
	unsigned char UnknownData_220[0x0010]; // 0x220(0x10)
};

// Class ProjectD.PDStatusBoardGameMap
// Size : 0x450 (Inherited : 0x3C0)
struct UPDStatusBoardGameMap : UPDGameMapModule {
	struct UCanvasPanel* PaintZone; // 0x3C0(0x8)
	unsigned char UnknownData_3C8[0x0088]; // 0x3C8(0x88)
};

// Class ProjectD.PDStatusBoardPlayerInfo_Ally
// Size : 0x3F8 (Inherited : 0x398)
struct UPDStatusBoardPlayerInfo_Ally : UPDStatusBoardPlayerInfoBase {
	struct UPDTextBlock* T_PlayerNum; // 0x398(0x8)
	struct UImage* IMG_SlotBg_Me; // 0x3A0(0x8)
	struct UCanvasPanel* CP_Voice; // 0x3A8(0x8)
	struct UPDButton* Btn_Voice_Active; // 0x3B0(0x8)
	struct UPDButton* Btn_Voice_Mute; // 0x3B8(0x8)
	struct UWidgetSwitcher* WS_VoiceState; // 0x3C0(0x8)
	struct UWidgetSwitcher* WS_VolumeState; // 0x3C8(0x8)
	struct USlider* Sd_Volume_Active; // 0x3D0(0x8)
	struct UPDTextBlock* T_Volume_Active; // 0x3D8(0x8)
	struct USlider* Sd_Volume_Muted; // 0x3E0(0x8)
	struct UPDTextBlock* T_Volume_Muted; // 0x3E8(0x8)
	unsigned char UnknownData_3F0[0x0008]; // 0x3F0(0x8)

	void OnVoiceVolumeChanged(float Value); // Function ProjectD.PDStatusBoardPlayerInfo_Ally.OnVoiceVolumeChanged // (Final|Native|Protected) // Param Size : 0x4, 0x7FF653C87850
	void OnClickVoiceMute(); // Function ProjectD.PDStatusBoardPlayerInfo_Ally.OnClickVoiceMute // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C87650
	void OnClickVoiceAvtive(); // Function ProjectD.PDStatusBoardPlayerInfo_Ally.OnClickVoiceAvtive // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C87630
};

// Class ProjectD.PDStatusBoardPlayerInfo_Enemy
// Size : 0x398 (Inherited : 0x398)
struct UPDStatusBoardPlayerInfo_Enemy : UPDStatusBoardPlayerInfoBase {
};

// Class ProjectD.PDStatusBoardRoundList
// Size : 0x290 (Inherited : 0x288)
struct UPDStatusBoardRoundList : UPDUserWidget {
	struct UVerticalBox* VB_Container; // 0x288(0x8)
};

// Class ProjectD.PDStatusBoardRoundListItem
// Size : 0x2C0 (Inherited : 0x288)
struct UPDStatusBoardRoundListItem : UPDUserWidget {
	struct UPDButton* BTN_Slot; // 0x288(0x8)
	struct UPDTextBlock* T_Round; // 0x290(0x8)
	struct UPDTextBlock* T_Match; // 0x298(0x8)
	struct UPDTextBlock* T_Time; // 0x2A0(0x8)
	unsigned char UnknownData_2A8[0x0018]; // 0x2A8(0x18)

	void OnClickRoundListItem(); // Function ProjectD.PDStatusBoardRoundListItem.OnClickRoundListItem // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C87610
};

// Class ProjectD.PDStatusBoardRoundResultItem
// Size : 0x300 (Inherited : 0x288)
struct UPDStatusBoardRoundResultItem : UPDUserWidget {
	struct UWidgetSwitcher* WS_ResultType; // 0x288(0x8)
	struct UImage* IMG_ModeIcon; // 0x290(0x8)
	struct UImage* IMG_SLotBg; // 0x298(0x8)
	struct UPDTextBlock* T_RoundInfo; // 0x2A0(0x8)
	struct UPDTextBlock* T_Win; // 0x2A8(0x8)
	struct UImage* IMG_CauseIcon; // 0x2B0(0x8)
	struct UHorizontalBox* HB_ModePlayer; // 0x2B8(0x8)
	struct UPDTextBlock* T_PlayerName; // 0x2C0(0x8)
	struct UPDTextBlock* T_Desc; // 0x2C8(0x8)
	struct UPaperSprite* AttackImg; // 0x2D0(0x8)
	struct UPaperSprite* DefenceImg; // 0x2D8(0x8)
	struct UPaperSprite* InstallImg; // 0x2E0(0x8)
	struct UPaperSprite* DeactiveImg; // 0x2E8(0x8)
	struct UPaperSprite* KilledImg; // 0x2F0(0x8)
	struct UPaperSprite* TimeOutImg; // 0x2F8(0x8)
};

// Class ProjectD.PDStatusBoardSeedSlot
// Size : 0x2D8 (Inherited : 0x288)
struct UPDStatusBoardSeedSlot : UPDUserWidget {
	struct UImage* IMG_SEED; // 0x288(0x8)
	struct UBorder* B_SEED; // 0x290(0x8)
	struct FLinearColor MouseNormalColor; // 0x298(0x10)
	struct FLinearColor MouseOverColor; // 0x2A8(0x10)
	struct UDragDropOperation* DragDropOperation; // 0x2B8(0x8)
	struct UPDInvenDrag* InvenDrag; // 0x2C0(0x8)
	unsigned char UnknownData_2C8[0x0010]; // 0x2C8(0x10)
};

// Class ProjectD.PDStatusBoardUpgradeSlot
// Size : 0x338 (Inherited : 0x288)
struct UPDStatusBoardUpgradeSlot : UPDUserWidget {
	struct UPDTextBlock* T_Level; // 0x288(0x8)
	struct UPDTextBlock* T_Name; // 0x290(0x8)
	struct UImage* IMG_SlotShadow; // 0x298(0x8)
	struct UImage* IMG_SLotBg; // 0x2A0(0x8)
	struct UImage* IMG_SlotOutline; // 0x2A8(0x8)
	struct UProgressBar* PB_Upgrade_01; // 0x2B0(0x8)
	struct UProgressBar* PB_Upgrade_02; // 0x2B8(0x8)
	struct UProgressBar* PB_Upgrade_03; // 0x2C0(0x8)
	struct UProgressBar* PB_Upgrade_04; // 0x2C8(0x8)
	struct UProgressBar* PB_Upgrade_05; // 0x2D0(0x8)
	struct TArray<struct UProgressBar*> GaugeList; // 0x2D8(0x10)
	struct FLinearColor GaugeColor; // 0x2E8(0x10)
	struct FText UpgradeGroup; // 0x2F8(0x18)
	struct FText UpgradeGroupName; // 0x310(0x18)
	bool IsEnemy; // 0x328(0x1)
	unsigned char UnknownData_329[0x000F]; // 0x329(0xF)
};

// Class ProjectD.PDStoppingPowerComponent
// Size : 0x240 (Inherited : 0x1F0)
struct UPDStoppingPowerComponent : USceneComponent {
	struct UAnimSequence* SP_HitFrontAnim; // 0x1F0(0x8)
	struct UAnimSequence* SP_HitBackAnim; // 0x1F8(0x8)
	struct UAnimSequence* SP_HitLeftAnim; // 0x200(0x8)
	struct UAnimSequence* SP_HitRightAnim; // 0x208(0x8)
	unsigned char UnknownData_210[0x0030]; // 0x210(0x30)
};

// Class ProjectD.PDSubtitleUI
// Size : 0x2B8 (Inherited : 0x288)
struct UPDSubtitleUI : UPDUserWidget {
	struct UVerticalBox* VB_Subtitle; // 0x288(0x8)
	struct UPDTextBlock* TB_CopyTextBlock; // 0x290(0x8)
	struct UImage* IMG_SubtitleBG; // 0x298(0x8)
	int32_t MaxSubtitleNum; // 0x2A0(0x4)
	float SubtitleDestroyTime; // 0x2A4(0x4)
	unsigned char UnknownData_2A8[0x0010]; // 0x2A8(0x10)
};

// Class ProjectD.PDSystemMessageUI
// Size : 0x2B8 (Inherited : 0x288)
struct UPDSystemMessageUI : UPDUserWidget {
	struct UCanvasPanel* CP_SysMsg; // 0x288(0x8)
	struct UPDTextBlock* TB_Text; // 0x290(0x8)
	float DefaultDuration; // 0x298(0x4)
	float RollInterval; // 0x29C(0x4)
	float RollSpeed; // 0x2A0(0x4)
	float StartOffset; // 0x2A4(0x4)
	unsigned char UnknownData_2A8[0x0010]; // 0x2A8(0x10)
};

// Class ProjectD.PDTabButton
// Size : 0xE20 (Inherited : 0xC50)
struct UPDTabButton : UPDButton {
	unsigned char UnknownData_C50[0x0020]; // 0xC50(0x20)
	struct UWidgetSwitcher* TabBtnStateSwitcher; // 0xC70(0x8)
	struct UBorder* SelectBG; // 0xC78(0x8)
	struct UPDTextBlock* SelectText; // 0xC80(0x8)
	struct UBorder* Selected_Outline; // 0xC88(0x8)
	struct FSlateBrush SelectedBGStyle; // 0xC90(0x88)
	struct FSlateColor SelectedTextColor; // 0xD18(0x28)
	bool UseSelectedOutline; // 0xD40(0x1)
	unsigned char UnknownData_D41[0x0007]; // 0xD41(0x7)
	struct FPDButtonOutLine SelectedOutLineStyle; // 0xD48(0xC8)
	unsigned char UnknownData_E10[0x0008]; // 0xE10(0x8)
	struct UPDTabButtonGroup* Parent; // 0xE18(0x8)
};

// Class ProjectD.PDTabButtonGroup
// Size : 0x38 (Inherited : 0x28)
struct UPDTabButtonGroup : UObject {
	struct TArray<struct UPDTabButton*> TabButtons; // 0x28(0x10)
};

// Class ProjectD.PDTargetScreenUI
// Size : 0x340 (Inherited : 0x290)
struct UPDTargetScreenUI : UPDIngameModeWidget {
	struct UCanvasPanel* CP_Root; // 0x290(0x8)
	struct TMap<int32_t, struct UPDHUDIconBaseUI*> MarkerMap; // 0x298(0x50)
	unsigned char UnknownData_2E8[0x0058]; // 0x2E8(0x58)
};

// Class ProjectD.PDTeamCharListItem
// Size : 0x2A0 (Inherited : 0x288)
struct UPDTeamCharListItem : UPDUserWidget {
	struct UPDTextBlock* T_PlayerName; // 0x288(0x8)
	struct UImage* IMG_Face; // 0x290(0x8)
	unsigned char UnknownData_298[0x0008]; // 0x298(0x8)
};

// Class ProjectD.PDTextBlock
// Size : 0x2D0 (Inherited : 0x2A0)
struct UPDTextBlock : UTextBlock {
	struct FMargin TextMargin; // 0x2A0(0x10)
	bool IsKeyButton; // 0x2B0(0x1)
	unsigned char UnknownData_2B1[0x0007]; // 0x2B1(0x7)
	struct FText ControlName; // 0x2B8(0x18)
};

// Class ProjectD.PDTutorialModeUI
// Size : 0x4A0 (Inherited : 0x4A0)
struct UPDTutorialModeUI : UPDBaseModeUI {
};

// Class ProjectD.PDTutorialNPC
// Size : 0x840 (Inherited : 0x7F0)
struct APDTutorialNPC : APDNpc {
	unsigned char UnknownData_7F0[0x0018]; // 0x7F0(0x18)
	struct UPDWeaponControlComponent* PDWeaponCtrlComponent; // 0x808(0x8)
	struct UPhysicalAnimationComponent* PhysicalAnimation; // 0x810(0x8)
	unsigned char UnknownData_818[0x0028]; // 0x818(0x28)
};

// Class ProjectD.PDTutorialPopupUI
// Size : 0x350 (Inherited : 0x2F8)
struct UPDTutorialPopupUI : UPDOKCancelPopupUI {
	struct UWidgetSwitcher* WS_Title; // 0x2F8(0x8)
	struct URichTextBlock* RT_Desc; // 0x300(0x8)
	struct UWidgetSwitcher* WS_Reward_01; // 0x308(0x8)
	struct UImage* IMG_Reward_01; // 0x310(0x8)
	struct UPDTextBlock* T_Reward_01; // 0x318(0x8)
	struct UPDTextBlock* T_Desc_Reward_01; // 0x320(0x8)
	struct UWidgetSwitcher* WS_Reward_02; // 0x328(0x8)
	struct UImage* IMG_Reward_02; // 0x330(0x8)
	struct UPDTextBlock* T_Reward_02; // 0x338(0x8)
	struct UPDTextBlock* T_Desc_Reward_02; // 0x340(0x8)
	unsigned char UnknownData_348[0x0008]; // 0x348(0x8)
};

// Class ProjectD.PDTutorialQuestItemData
// Size : 0x70 (Inherited : 0x28)
struct UPDTutorialQuestItemData : UObject {
	unsigned char UnknownData_28[0x0048]; // 0x28(0x48)
};

// Class ProjectD.PDTutorialQuestItem
// Size : 0x308 (Inherited : 0x288)
struct UPDTutorialQuestItem : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UVerticalBox* VB_OptionContents; // 0x290(0x8)
	struct UBorder* BD_TutoList; // 0x298(0x8)
	struct UImage* IMG_CHK; // 0x2A0(0x8)
	struct UPDTextBlock* TB_ContentName; // 0x2A8(0x8)
	struct UHorizontalBox* HB_Keys; // 0x2B0(0x8)
	struct UWidgetSwitcher* WS_KeyBase; // 0x2B8(0x8)
	struct UWidgetSwitcher* WS_PressType; // 0x2C0(0x8)
	struct USizeBox* SB_CommaBase; // 0x2C8(0x8)
	struct UPDImage* ScanLine; // 0x2D0(0x8)
	struct UWidgetAnimation* WA_Complete; // 0x2D8(0x8)
	struct UWidgetAnimation* WA_Initialize; // 0x2E0(0x8)
	unsigned char UnknownData_2E8[0x0020]; // 0x2E8(0x20)

	void OnInitializeAnimationFinished(); // Function ProjectD.PDTutorialQuestItem.OnInitializeAnimationFinished // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C876B0
	void OnCompleteAnimationFinished(); // Function ProjectD.PDTutorialQuestItem.OnCompleteAnimationFinished // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C87690
};

// Class ProjectD.PDTutorialQuestListUI
// Size : 0x2E0 (Inherited : 0x290)
struct UPDTutorialQuestListUI : UPDIngameModeWidget {
	struct UVerticalBox* VB_List; // 0x290(0x8)
	struct UPDTextBlock* TB_QuestList; // 0x298(0x8)
	struct UPDTextBlock* TB_CurrentPhase; // 0x2A0(0x8)
	struct UPDTextBlock* TB_TotalPhase; // 0x2A8(0x8)
	struct UListView* LV_Quest; // 0x2B0(0x8)
	struct UWidgetAnimation* WA_Intro; // 0x2B8(0x8)
	unsigned char UnknownData_2C0[0x0020]; // 0x2C0(0x20)

	void ShowNextQuestListItem(); // Function ProjectD.PDTutorialQuestListUI.ShowNextQuestListItem // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C878D0
	void OnIntroAnimationFinished(); // Function ProjectD.PDTutorialQuestListUI.OnIntroAnimationFinished // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C876D0
};

// Class ProjectD.PDUniqueLeptonListItemData
// Size : 0x58 (Inherited : 0x28)
struct UPDUniqueLeptonListItemData : UObject {
	unsigned char UnknownData_28[0x0030]; // 0x28(0x30)
};

// Class ProjectD.PDUniqueLeptonListItem
// Size : 0x2A8 (Inherited : 0x288)
struct UPDUniqueLeptonListItem : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UImage* IMG_Item; // 0x290(0x8)
	struct UPDTextBlock* TB_Name; // 0x298(0x8)
	struct UPDTextBlock* TB_Desc; // 0x2A0(0x8)
};

// Class ProjectD.PDUnKnowMarketCoinSlot
// Size : 0x338 (Inherited : 0x288)
struct UPDUnKnowMarketCoinSlot : UPDUserWidget {
	struct UDragDropOperation* DragDropOperation; // 0x288(0x8)
	struct UPDTextBlock* TB_Name; // 0x290(0x8)
	struct UImage* IMG_Item; // 0x298(0x8)
	struct UPDTextBlock* TB_CurNum; // 0x2A0(0x8)
	struct UPDTextBlock* TB_GetCoin; // 0x2A8(0x8)
	struct UPDTextBlock* TB_GetCoin_Fx; // 0x2B0(0x8)
	struct UImage* IMG_Empty; // 0x2B8(0x8)
	struct UBorder* BD_Bg; // 0x2C0(0x8)
	struct UPaperSprite* EmptyPaperSprite; // 0x2C8(0x8)
	struct UCanvasPanel* CP_Dragable; // 0x2D0(0x8)
	struct FLinearColor MouseNormalColor; // 0x2D8(0x10)
	struct FLinearColor MouseOverColor; // 0x2E8(0x10)
	unsigned char UnknownData_2F8[0x0040]; // 0x2F8(0x40)

	void OnSynchronizeProperties(); // Function ProjectD.PDUnKnowMarketCoinSlot.OnSynchronizeProperties // (Native|Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF653C4E340
};

// Class ProjectD.PDUnKnowMarketModeSlot
// Size : 0x328 (Inherited : 0x288)
struct UPDUnKnowMarketModeSlot : UPDUserWidget {
	struct UDragDropOperation* DragDropOperation; // 0x288(0x8)
	struct UPDTextBlock* TB_Name; // 0x290(0x8)
	struct UImage* IMG_Item; // 0x298(0x8)
	struct UPDTextBlock* TB_CurNum; // 0x2A0(0x8)
	struct UImage* IMG_Empty; // 0x2A8(0x8)
	struct UBorder* BD_Bg; // 0x2B0(0x8)
	struct UPaperSprite* EmptyPaperSprite; // 0x2B8(0x8)
	struct FLinearColor MouseNormalColor; // 0x2C0(0x10)
	struct FLinearColor MouseOverColor; // 0x2D0(0x10)
	struct UCanvasPanel* CP_Dragable; // 0x2E0(0x8)
	unsigned char UnknownData_2E8[0x0040]; // 0x2E8(0x40)

	void OnSynchronizeProperties(); // Function ProjectD.PDUnKnowMarketModeSlot.OnSynchronizeProperties // (Native|Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF653C4E340
};

// Class ProjectD.PDUnKnownMarket
// Size : 0x818 (Inherited : 0x290)
struct UPDUnKnownMarket : UPDIngameModeWidget {
	struct UCanvasPanel* CP_InvenArea; // 0x290(0x8)
	struct UListView* LV_PickupList; // 0x298(0x8)
	struct UCanvasPanel* CP_PickupListArea; // 0x2A0(0x8)
	struct UPDInvenListItem* InvenListTitle; // 0x2A8(0x8)
	struct UListView* LV_InvenList; // 0x2B0(0x8)
	struct UCanvasPanel* CP_InvenListArea; // 0x2B8(0x8)
	struct UPDUnKnownMarketEquipSlot* Main1EquipSlot; // 0x2C0(0x8)
	struct UPDUnKnownMarketEquipSlot* Main2EquipSlot; // 0x2C8(0x8)
	struct UPDUnKnownMarketEquipSlot* SubEquipSlot; // 0x2D0(0x8)
	struct USizeBox* SB_Throw_2; // 0x2D8(0x8)
	struct UPDUnKnownMarketItemSlot* ThrowSlot1; // 0x2E0(0x8)
	struct USizeBox* SB_Throw_3; // 0x2E8(0x8)
	struct UPDUnKnownMarketItemSlot* ThrowSlot2; // 0x2F0(0x8)
	struct USizeBox* SB_Recover_2; // 0x2F8(0x8)
	struct UPDUnKnownMarketItemSlot* RecoverSlot1; // 0x300(0x8)
	struct USizeBox* SB_Recover_3; // 0x308(0x8)
	struct UPDUnKnownMarketItemSlot* RecoverSlot2; // 0x310(0x8)
	struct USizeBox* SB_Recover_4; // 0x318(0x8)
	struct UPDUnKnownMarketItemSlot* RecoverSlot3; // 0x320(0x8)
	struct UPDUnKnowMarketModeSlot* ModeSlot; // 0x328(0x8)
	struct UPDUnKnowMarketCoinSlot* CoinSlot; // 0x330(0x8)
	struct UPDInvenDivide* InvenDivide; // 0x338(0x8)
	struct UPDTextBlock* T_Coin; // 0x340(0x8)
	struct UPDTextBlock* TB_GetCoin; // 0x348(0x8)
	struct UPDTextBlock* TB_GetCoin_Fx; // 0x350(0x8)
	struct UPDTextBlock* T_TeamCoinTitle; // 0x358(0x8)
	struct UHorizontalBox* HB_TeamCoinNum; // 0x360(0x8)
	struct UPDTextBlock* T_TeamCoin; // 0x368(0x8)
	struct UCanvasPanel* CP_CoinTooltip; // 0x370(0x8)
	struct UPDTextBlock* T_TooltipCoin; // 0x378(0x8)
	struct UPDTextBlock* T_InvenRemain; // 0x380(0x8)
	struct UPDTextBlock* T_InvenRemain_Slash; // 0x388(0x8)
	struct UPDTextBlock* T_InvenRemain_Max; // 0x390(0x8)
	struct UScrollBox* SB_InvenList; // 0x398(0x8)
	struct UVerticalBox* VB_MissionItem; // 0x3A0(0x8)
	struct UListView* LV_MissionItemList; // 0x3A8(0x8)
	struct UPDInvenListItem* AmmoListTitle; // 0x3B0(0x8)
	struct UListView* LV_AmmoList; // 0x3B8(0x8)
	unsigned char UnknownData_3C0[0x0010]; // 0x3C0(0x10)
	struct TArray<struct UPDUnKnownMarketEquipSlot*> WeaponSlots; // 0x3D0(0x10)
	unsigned char UnknownData_3E0[0x0050]; // 0x3E0(0x50)
	struct TArray<struct UObject*> ItemStorageList; // 0x430(0x10)
	unsigned char UnknownData_440[0x0088]; // 0x440(0x88)
	struct UGridPanel* CP_Market; // 0x4C8(0x8)
	struct UCanvasPanel* CP_Upgrade; // 0x4D0(0x8)
	struct UPDUnKnownMarketWeaponCategory* Tab_All; // 0x4D8(0x8)
	struct UPDUnKnownMarketWeaponCategory* Tab_Pistol; // 0x4E0(0x8)
	struct UPDUnKnownMarketWeaponCategory* Tab_SMG; // 0x4E8(0x8)
	struct UPDUnKnownMarketWeaponCategory* Tab_SG; // 0x4F0(0x8)
	struct UPDUnKnownMarketWeaponCategory* Tab_AR; // 0x4F8(0x8)
	struct UPDUnKnownMarketWeaponCategory* Tab_LMG; // 0x500(0x8)
	struct UPDUnKnownMarketWeaponCategory* Tab_SR; // 0x508(0x8)
	unsigned char UnknownData_510[0x0008]; // 0x510(0x8)
	struct UPDTabButtonGroup* WeaponCategoryGroup; // 0x518(0x8)
	struct UPDUnKnownMarketUpgradeSlot* UpgradeSlot_ARMORY; // 0x520(0x8)
	struct UPDUnKnownMarketUpgradeSlot* UpgradeSlot_ORDNANCE; // 0x528(0x8)
	struct UPDUnKnownMarketUpgradeSlot* UpgradeSlot_TACTICAL; // 0x530(0x8)
	struct UPDUnKnownMarketUpgradeSlot* UpgradeSlot_DEFENCE; // 0x538(0x8)
	unsigned char UnknownData_540[0x0050]; // 0x540(0x50)
	struct UPDUnKnownMarketFundingTooltip* FundingTooltip; // 0x590(0x8)
	struct UCanvasPanel* CP_Reward; // 0x598(0x8)
	struct UPDUnKnownMarketFundingProgress* FundingReward_01; // 0x5A0(0x8)
	struct UPDUnKnownMarketFundingProgress* FundingReward_02; // 0x5A8(0x8)
	struct UPDUnKnownMarketFundingProgress* FundingReward_03; // 0x5B0(0x8)
	unsigned char UnknownData_5B8[0x0010]; // 0x5B8(0x10)
	struct UCanvasPanel* CP_UpgradeTooltip; // 0x5C8(0x8)
	struct UPDUnKnownMarketUpgradeTooltip* UpgradeTooltip; // 0x5D0(0x8)
	struct UTileView* TV_WeaponList; // 0x5D8(0x8)
	struct UTileView* TV_ThrowItem; // 0x5E0(0x8)
	struct UTileView* TV_RecoverItem; // 0x5E8(0x8)
	struct UTileView* TV_TacticalItem; // 0x5F0(0x8)
	struct UTileView* TV_AmmoItem; // 0x5F8(0x8)
	struct UPDUnKnownMarketTooltip* MarketTooltip; // 0x600(0x8)
	struct UCanvasPanel* CP_InvenListDragable; // 0x608(0x8)
	struct UCanvasPanel* CP_PickupListDragable; // 0x610(0x8)
	struct UPDKeyButton* KBtn_Close; // 0x618(0x8)
	struct UHorizontalBox* HB_RespawnGuide; // 0x620(0x8)
	struct URichTextBlock* RTB_GuideMessage; // 0x628(0x8)
	struct UProgressBar* PB_Skip; // 0x630(0x8)
	struct UPDKeyButton* KBtn_Respawn; // 0x638(0x8)
	unsigned char UnknownData_640[0x01A0]; // 0x640(0x1A0)
	struct TArray<struct UPDUnKnownMarketListItemData*> ListItemDataList; // 0x7E0(0x10)
	struct TArray<struct UPDUnKnownMarketListItemData*> EmptyListItemData; // 0x7F0(0x10)
	unsigned char UnknownData_800[0x0018]; // 0x800(0x18)

	void SelectWeaponCategory(int32_t ItemProp); // Function ProjectD.PDUnKnownMarket.SelectWeaponCategory // (Final|Native|Protected) // Param Size : 0x4, 0x7FF653C89D20
	void OnClickRespawnBtn(); // Function ProjectD.PDUnKnownMarket.OnClickRespawnBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF6533F7E70
	void OnClickCloseBtn(); // Function ProjectD.PDUnKnownMarket.OnClickCloseBtn // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C89BA0
	void DivideBgMouseDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ProjectD.PDUnKnownMarket.DivideBgMouseDown // (Final|Native|Private|HasOutParms) // Param Size : 0xA8, 0x7FF653C899C0
};

// Class ProjectD.PDUnKnownMarketEquipSlot
// Size : 0x6B8 (Inherited : 0x288)
struct UPDUnKnownMarketEquipSlot : UPDUserWidget {
	struct UDragDropOperation* DragDropOperation; // 0x288(0x8)
	struct UCanvasPanel* CP_TooltipArea; // 0x290(0x8)
	struct URetainerBox* RT_EquipSlot; // 0x298(0x8)
	struct UCanvasPanel* CP_EquipState; // 0x2A0(0x8)
	struct UCanvasPanel* CP_EmptyState; // 0x2A8(0x8)
	unsigned char UnknownData_2B0[0x0050]; // 0x2B0(0x50)
	struct UPDTextBlock* T_EmptySlotTitle; // 0x300(0x8)
	struct UPDTextBlock* TB_EmptyName; // 0x308(0x8)
	struct UPDTextBlock* TB_Name; // 0x310(0x8)
	struct UPDTextBlock* T_BulletAmount; // 0x318(0x8)
	struct UPDTextBlock* T_InvenBulletAmount; // 0x320(0x8)
	struct UImage* IMG_Item; // 0x328(0x8)
	struct UImage* IMG_Empty; // 0x330(0x8)
	struct UImage* IMG_Bullet; // 0x338(0x8)
	struct UPDTextBlock* T_BulletInfo; // 0x340(0x8)
	struct UImage* IMG_SLotBg; // 0x348(0x8)
	struct UWidgetSwitcher* WS_SellState; // 0x350(0x8)
	struct UPDTextBlock* T_ResellPrice; // 0x358(0x8)
	struct UCanvasPanel* CP_Parts; // 0x360(0x8)
	struct UCanvasPanel* CP_Dragable; // 0x368(0x8)
	struct UCanvasPanel* CP_Equipped; // 0x370(0x8)
	struct UPDUnKnownMarketWeaponPartSlot* PartSlot_Muzzle; // 0x378(0x8)
	struct UPDUnKnownMarketWeaponPartSlot* PartSlot_Barrel; // 0x380(0x8)
	struct UPDUnKnownMarketWeaponPartSlot* PartSlot_Laser; // 0x388(0x8)
	struct UPDUnKnownMarketWeaponPartSlot* PartSlot_UnderBarrel; // 0x390(0x8)
	struct UPDUnKnownMarketWeaponPartSlot* PartSlot_Scope; // 0x398(0x8)
	struct UPDUnKnownMarketWeaponPartSlot* PartSlot_Magazine; // 0x3A0(0x8)
	struct UPDUnKnownMarketWeaponPartSlot* PartSlot_Grip; // 0x3A8(0x8)
	struct UPDUnKnownMarketWeaponPartSlot* PartSlot_Stock; // 0x3B0(0x8)
	unsigned char UnknownData_3B8[0x0050]; // 0x3B8(0x50)
	struct UHorizontalBox* HB_Loadout; // 0x408(0x8)
	struct UPDTextBlock* T_LoadoutTitle; // 0x410(0x8)
	struct USizeBox* SB_Loadout_A; // 0x418(0x8)
	struct UPDTabButton* Tab_LoadoutA; // 0x420(0x8)
	struct USizeBox* SB_Loadout_B; // 0x428(0x8)
	struct UPDTabButton* Tab_LoadoutB; // 0x430(0x8)
	struct USizeBox* SB_Loadout_C; // 0x438(0x8)
	struct UPDTabButton* Tab_LoadoutC; // 0x440(0x8)
	struct UPDTabButtonGroup* LoadoutTabGroup; // 0x448(0x8)
	struct UPDButton* Btn_Refund; // 0x450(0x8)
	struct UPDButton* Btn_Sell; // 0x458(0x8)
	struct UImage* IMG_LoadoutHighlight_Tutorial; // 0x460(0x8)
	struct TArray<struct USizeBox*> LoadoutUIList; // 0x468(0x10)
	struct FText InSlotNumber; // 0x478(0x18)
	struct FText InSlotEmptyTitle; // 0x490(0x18)
	struct FText InWeaponClass; // 0x4A8(0x18)
	struct FSlateBrush InEmptyIconBrush; // 0x4C0(0x88)
	struct FLinearColor MouseNormalColor; // 0x548(0x10)
	struct FLinearColor MouseOverColor; // 0x558(0x10)
	struct FVector2D PartSlotStartPos; // 0x568(0x8)
	struct FVector2D PartSlotPadding; // 0x570(0x8)
	struct FVector2D PartSlotSize; // 0x578(0x8)
	unsigned char UnknownData_580[0x0138]; // 0x580(0x138)

	void ResellItem(); // Function ProjectD.PDUnKnownMarketEquipSlot.ResellItem // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C89D00
	void RefundItem(); // Function ProjectD.PDUnKnownMarketEquipSlot.RefundItem // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C89CC0
	void OnUnHoverLoadout(); // Function ProjectD.PDUnKnownMarketEquipSlot.OnUnHoverLoadout // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C89CA0
	void OnHoverLoadoutC(); // Function ProjectD.PDUnKnownMarketEquipSlot.OnHoverLoadoutC // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C89C80
	void OnHoverLoadoutB(); // Function ProjectD.PDUnKnownMarketEquipSlot.OnHoverLoadoutB // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C89C60
	void OnHoverLoadoutA(); // Function ProjectD.PDUnKnownMarketEquipSlot.OnHoverLoadoutA // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C89C40
	void OnClickLoadoutC(); // Function ProjectD.PDUnKnownMarketEquipSlot.OnClickLoadoutC // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C89C00
	void OnClickLoadoutB(); // Function ProjectD.PDUnKnownMarketEquipSlot.OnClickLoadoutB // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C89BE0
	void OnClickLoadoutA(); // Function ProjectD.PDUnKnownMarketEquipSlot.OnClickLoadoutA // (Final|Native|Private) // Param Size : 0x0, 0x7FF653C89BC0
};

// Class ProjectD.PDUnKnownMarketFundingProgress
// Size : 0x298 (Inherited : 0x288)
struct UPDUnKnownMarketFundingProgress : UPDUserWidget {
	struct UProgressBar* PB_Reward; // 0x288(0x8)
	struct UPDTextBlock* T_RewardCoin; // 0x290(0x8)
};

// Class ProjectD.PDUnKnownMarketFundingTooltip
// Size : 0x348 (Inherited : 0x288)
struct UPDUnKnownMarketFundingTooltip : UPDUserWidget {
	struct UBorder* B_Title_01; // 0x288(0x8)
	struct UBorder* B_Title_02; // 0x290(0x8)
	struct UBorder* B_Title_03; // 0x298(0x8)
	struct TArray<struct UBorder*> B_Title_List; // 0x2A0(0x10)
	struct UPDTextBlock* T_Desc_01; // 0x2B0(0x8)
	struct UPDTextBlock* T_Desc_02; // 0x2B8(0x8)
	struct UPDTextBlock* T_Desc_03; // 0x2C0(0x8)
	struct TArray<struct UPDTextBlock*> T_Desc_List; // 0x2C8(0x10)
	struct UImage* IMG_Icon_01; // 0x2D8(0x8)
	struct UImage* IMG_Icon_02; // 0x2E0(0x8)
	struct UImage* IMG_Icon_03; // 0x2E8(0x8)
	struct TArray<struct UImage*> IMG_Icon_List; // 0x2F0(0x10)
	struct UPDTextBlock* T_Lv_01; // 0x300(0x8)
	struct UPDTextBlock* T_Lv_02; // 0x308(0x8)
	struct UPDTextBlock* T_Lv_03; // 0x310(0x8)
	struct TArray<struct UPDTextBlock*> T_Lv_List; // 0x318(0x10)
	unsigned char UnknownData_328[0x0020]; // 0x328(0x20)
};

// Class ProjectD.PDUnKnownMarketItemSlot
// Size : 0x498 (Inherited : 0x288)
struct UPDUnKnownMarketItemSlot : UPDUserWidget {
	struct UDragDropOperation* DragDropOperation; // 0x288(0x8)
	struct UCanvasPanel* CP_EmptyState; // 0x290(0x8)
	struct UCanvasPanel* CP_EquipState; // 0x298(0x8)
	unsigned char UnknownData_2A0[0x0050]; // 0x2A0(0x50)
	struct UPDTextBlock* TB_Name; // 0x2F0(0x8)
	struct UPDTextBlock* TB_EmptyName; // 0x2F8(0x8)
	struct UImage* IMG_Item; // 0x300(0x8)
	struct UImage* IMG_SLotBg; // 0x308(0x8)
	struct UPDTextBlock* T_Amount; // 0x310(0x8)
	struct UCanvasPanel* CP_Dragable; // 0x318(0x8)
	struct UCanvasPanel* CP_Refund; // 0x320(0x8)
	struct UPDButton* Btn_Refund; // 0x328(0x8)
	struct FText InSlotNumber; // 0x330(0x18)
	struct FText InSlotName; // 0x348(0x18)
	struct FSlateBrush InEmptyIconBrush; // 0x360(0x88)
	struct FLinearColor MouseNormalColor; // 0x3E8(0x10)
	struct FLinearColor MouseOverColor; // 0x3F8(0x10)
	struct FLinearColor NormalBunchColor; // 0x408(0x10)
	struct FLinearColor MaxBunchColor; // 0x418(0x10)
	struct UProgressBar* PB_ItemProgress; // 0x428(0x8)
	unsigned char UnknownData_430[0x0068]; // 0x430(0x68)

	void RefundItem(); // Function ProjectD.PDUnKnownMarketItemSlot.RefundItem // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C89CE0
};

// Class ProjectD.PDUnKnownMarketListItemData
// Size : 0xA0 (Inherited : 0x28)
struct UPDUnKnownMarketListItemData : UObject {
	unsigned char UnknownData_28[0x0078]; // 0x28(0x78)
};

// Class ProjectD.PDUnKnownMarketListItem
// Size : 0x4E8 (Inherited : 0x288)
struct UPDUnKnownMarketListItem : UPDUserWidget {
	unsigned char UnknownData_288[0x0008]; // 0x288(0x8)
	struct UCanvasPanel* CP_Empty; // 0x290(0x8)
	struct UCanvasPanel* CP_Sell; // 0x298(0x8)
	struct UCanvasPanel* CP_SoldOut; // 0x2A0(0x8)
	struct UCanvasPanel* CP_Lock; // 0x2A8(0x8)
	struct UCanvasPanel* CP_Owned; // 0x2B0(0x8)
	struct UCanvasPanel* CP_EventArea; // 0x2B8(0x8)
	unsigned char UnknownData_2C0[0x0050]; // 0x2C0(0x50)
	struct UImage* IMG_Item; // 0x310(0x8)
	struct UImage* IMG_HoverClick; // 0x318(0x8)
	struct UHorizontalBox* HB_Price; // 0x320(0x8)
	struct UPDTextBlock* T_Price; // 0x328(0x8)
	struct UPDTextBlock* T_Price_Shortage; // 0x330(0x8)
	struct UPDTextBlock* T_Price_Sale; // 0x338(0x8)
	struct UPDTextBlock* T_UnLock_Level; // 0x340(0x8)
	struct UImage* IMG_Lock_Icon; // 0x348(0x8)
	struct USizeBox* SB_EquippedSlot_01; // 0x350(0x8)
	struct USizeBox* SB_EquippedSlot_02; // 0x358(0x8)
	struct USizeBox* SB_EquippedSlot_03; // 0x360(0x8)
	unsigned char UnknownData_368[0x0050]; // 0x368(0x50)
	struct UBorder* B_Request; // 0x3B8(0x8)
	struct UPDTextBlock* T_WeaponName; // 0x3C0(0x8)
	struct UCanvasPanel* CP_Blink; // 0x3C8(0x8)
	struct UPDTextBlock* T_InstanceCnt; // 0x3D0(0x8)
	struct UBorder* B_WeaponSale; // 0x3D8(0x8)
	struct UPDTextBlock* T_WeaponSale; // 0x3E0(0x8)
	struct UCanvasPanel* CP_AvailableCounter; // 0x3E8(0x8)
	struct UPDCircleProgress* Cpr_Gauge; // 0x3F0(0x8)
	struct UPDTextBlock* T_AvailableCounter; // 0x3F8(0x8)
	struct UCanvasPanel* CP_BuyBtn; // 0x400(0x8)
	struct UCanvasPanel* CP_BtnEventArea; // 0x408(0x8)
	struct UImage* IMG_BtnHover; // 0x410(0x8)
	struct UBorder* B_Cancel; // 0x418(0x8)
	struct UCanvasPanel* CP_Activate; // 0x420(0x8)
	struct UImage* IMG_Highlight_Tutorial; // 0x428(0x8)
	struct UDragDropOperation* DragDropOperation; // 0x430(0x8)
	struct TArray<struct FText> LockImagePath; // 0x438(0x10)
	struct TArray<struct FSlateColor> LockTextColor; // 0x448(0x10)
	unsigned char UnknownData_458[0x0090]; // 0x458(0x90)

	void OnClickBuy(); // Function ProjectD.PDUnKnownMarketListItem.OnClickBuy // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C89B80
};

// Class ProjectD.PDUnKnownMarketPartListItem
// Size : 0x358 (Inherited : 0x288)
struct UPDUnKnownMarketPartListItem : UPDUserWidget {
	struct UImage* IMG_ItemIcon; // 0x288(0x8)
	struct UImage* IMG_Slot_Hover; // 0x290(0x8)
	struct UImage* IMG_HoverBg; // 0x298(0x8)
	struct UPDTextBlock* T_PartsName; // 0x2A0(0x8)
	struct UPDTextBlock* T_Ability; // 0x2A8(0x8)
	struct UPDTextBlock* T_Equiped; // 0x2B0(0x8)
	struct UCanvasPanel* CP_Lock; // 0x2B8(0x8)
	struct UImage* IMG_Lock_Icon; // 0x2C0(0x8)
	struct UPDTextBlock* T_UnLock_Level; // 0x2C8(0x8)
	struct TArray<struct FText> LockImagePath; // 0x2D0(0x10)
	struct TArray<struct FSlateColor> LockTextColor; // 0x2E0(0x10)
	unsigned char UnknownData_2F0[0x0068]; // 0x2F0(0x68)

	void OnClickPart(); // Function ProjectD.PDUnKnownMarketPartListItem.OnClickPart // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C89C20
};

// Class ProjectD.PDUnKnownMarketTooltip
// Size : 0x410 (Inherited : 0x288)
struct UPDUnKnownMarketTooltip : UPDUserWidget {
	struct UPDTextBlock* T_WeaponName; // 0x288(0x8)
	struct UPDTextBlock* T_LoadoutName; // 0x290(0x8)
	struct UPDTextBlock* T_BulletInfo; // 0x298(0x8)
	struct UPDTextBlock* T_FireModeInfo; // 0x2A0(0x8)
	struct UPDTextBlock* T_ItemName; // 0x2A8(0x8)
	struct UWidgetSwitcher* WS_ItemType; // 0x2B0(0x8)
	struct UImage* IMG_Weapon; // 0x2B8(0x8)
	struct UImage* IMG_Info_Bullet; // 0x2C0(0x8)
	struct UImage* IMG_Logo; // 0x2C8(0x8)
	struct UPDTextBlock* T_Description; // 0x2D0(0x8)
	struct UWidgetSwitcher* WS_StatCase; // 0x2D8(0x8)
	struct UWidgetSwitcher* WS_InfoCase; // 0x2E0(0x8)
	struct URetainerBox* RT_Tooltip; // 0x2E8(0x8)
	struct UImage* IMG_MouseGuideBg; // 0x2F0(0x8)
	struct UCanvasPanel* Cp_Stat_Weapon; // 0x2F8(0x8)
	struct UPDUnKnownWeaponStatProgress* WeaponStat1; // 0x300(0x8)
	struct UPDUnKnownWeaponStatProgress* WeaponStat2; // 0x308(0x8)
	struct UPDUnKnownWeaponStatProgress* WeaponStat3; // 0x310(0x8)
	struct UPDUnKnownWeaponStatProgress* WeaponStat4; // 0x318(0x8)
	struct UPDUnKnownWeaponStatProgress* WeaponStat5; // 0x320(0x8)
	struct UPDUnKnownWeaponStatProgress* WeaponStat6; // 0x328(0x8)
	struct UCanvasPanel* CP_Stat_Part; // 0x330(0x8)
	struct URichTextBlock* RT_TooltipPartStat; // 0x338(0x8)
	struct UCanvasPanel* CP_MouseGuide; // 0x340(0x8)
	struct UHorizontalBox* HB_GuideCase_01; // 0x348(0x8)
	struct UPDTextBlock* T_GuideCase_01; // 0x350(0x8)
	struct UHorizontalBox* HB_GuideCase_02; // 0x358(0x8)
	struct UPDTextBlock* T_GuideCase_02; // 0x360(0x8)
	struct UHorizontalBox* HB_GuideCase_03; // 0x368(0x8)
	struct UPDTextBlock* T_GuideCase_03; // 0x370(0x8)
	struct UPDTextBlock* T_Magazine; // 0x378(0x8)
	struct UHorizontalBox* HB_Parts; // 0x380(0x8)
	struct UImage* IMG_Part1; // 0x388(0x8)
	struct UImage* IMG_Part2; // 0x390(0x8)
	struct UImage* IMG_Part3; // 0x398(0x8)
	struct UImage* IMG_Part4; // 0x3A0(0x8)
	struct UImage* IMG_Part5; // 0x3A8(0x8)
	struct UImage* IMG_Part6; // 0x3B0(0x8)
	struct UImage* IMG_Part7; // 0x3B8(0x8)
	struct UImage* IMG_Part8; // 0x3C0(0x8)
	struct TArray<struct UImage*> LoadoutPartImgList; // 0x3C8(0x10)
	unsigned char UnknownData_3D8[0x0038]; // 0x3D8(0x38)
};

// Class ProjectD.PDUnKnownMarketUpgradeItemSlot
// Size : 0x4A0 (Inherited : 0x288)
struct UPDUnKnownMarketUpgradeItemSlot : UPDUserWidget {
	struct UWidgetSwitcher* WS_SlotBg; // 0x288(0x8)
	struct UWidgetSwitcher* WS_UpgradeType; // 0x290(0x8)
	struct UWidgetSwitcher* WS_LockType; // 0x298(0x8)
	struct UWidgetSwitcher* WS_Activation; // 0x2A0(0x8)
	struct UWidgetSwitcher* WS_UpgradeCase; // 0x2A8(0x8)
	struct UImage* IMG_Icon; // 0x2B0(0x8)
	struct UImage* IMG_Icon_Off; // 0x2B8(0x8)
	struct UPDTextBlock* T_Level; // 0x2C0(0x8)
	struct UPDTextBlock* T_LevelTitle; // 0x2C8(0x8)
	struct UPDTextBlock* T_Description_ARMORY; // 0x2D0(0x8)
	struct UPDTextBlock* T_Description_ORDNANCE; // 0x2D8(0x8)
	struct UPDTextBlock* T_Description_TACTICAL; // 0x2E0(0x8)
	struct UPDTextBlock* T_Description_DEFENCE; // 0x2E8(0x8)
	unsigned char UnknownData_2F0[0x0050]; // 0x2F0(0x50)
	struct UProgressBar* PB_Pogress_ARMORY; // 0x340(0x8)
	struct UProgressBar* PB_Pogress_ORDNANCE; // 0x348(0x8)
	struct UProgressBar* PB_Pogress_TACTICAL; // 0x350(0x8)
	struct UProgressBar* PB_Pogress_DEFENCE; // 0x358(0x8)
	unsigned char UnknownData_360[0x0050]; // 0x360(0x50)
	struct UPDTextBlock* T_Percent_ARMORY; // 0x3B0(0x8)
	struct UPDTextBlock* T_Percent_ORDNANCE; // 0x3B8(0x8)
	struct UPDTextBlock* T_Percent_TACTICAL; // 0x3C0(0x8)
	struct UPDTextBlock* T_Percent_DEFENCE; // 0x3C8(0x8)
	unsigned char UnknownData_3D0[0x0050]; // 0x3D0(0x50)
	struct UCanvasPanel* CP_GlowBox_ARMORY; // 0x420(0x8)
	struct UCanvasPanel* CP_GlowBox_ORDNANCE; // 0x428(0x8)
	struct UCanvasPanel* CP_GlowBox_TACTICAL; // 0x430(0x8)
	struct UCanvasPanel* CP_GlowBox_DEFENCE; // 0x438(0x8)
	unsigned char UnknownData_440[0x0050]; // 0x440(0x50)
	struct UPDTextBlock* T_Description_Off; // 0x490(0x8)
	unsigned char UnknownData_498[0x0008]; // 0x498(0x8)
};

// Class ProjectD.PDUnKnownMarketUpgradeSlot
// Size : 0x3E0 (Inherited : 0x288)
struct UPDUnKnownMarketUpgradeSlot : UPDUserWidget {
	struct UPDTextBlock* T_UpgradeLevel; // 0x288(0x8)
	struct UPDTextBlock* T_UpgradeGroupDelay; // 0x290(0x8)
	struct UPDTextBlock* T_UpgradeGroupName; // 0x298(0x8)
	struct UPDProgress* UpgradeProgress; // 0x2A0(0x8)
	struct UImage* Img_Bg; // 0x2A8(0x8)
	struct UImage* IMG_MAX; // 0x2B0(0x8)
	struct UImage* IMG_Highlight_Tutorial; // 0x2B8(0x8)
	struct UImage* IMG_Divider; // 0x2C0(0x8)
	struct UPDTextBlock* T_UpgradeUp; // 0x2C8(0x8)
	bool IsEnemy; // 0x2D0(0x1)
	bool IsShop; // 0x2D1(0x1)
	unsigned char UnknownData_2D2[0x0002]; // 0x2D2(0x2)
	struct FLinearColor GaugeColor; // 0x2D4(0x10)
	unsigned char UnknownData_2E4[0x0004]; // 0x2E4(0x4)
	struct FSlateColor GroupTextColor; // 0x2E8(0x28)
	struct FSlateColor MaxTextColor; // 0x310(0x28)
	struct FLinearColor HoverBGColor; // 0x338(0x10)
	struct FLinearColor MaxGlowColor; // 0x348(0x10)
	struct FLinearColor DividerColor; // 0x358(0x10)
	struct FText UpgradeGroup; // 0x368(0x18)
	struct FText UpgradeGroupName; // 0x380(0x18)
	unsigned char UnknownData_398[0x0048]; // 0x398(0x48)

	void OnClickRequest(); // Function ProjectD.PDUnKnownMarketUpgradeSlot.OnClickRequest // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C8D560
};

// Class ProjectD.PDUnKnownMarketUpgradeTooltip
// Size : 0x360 (Inherited : 0x288)
struct UPDUnKnownMarketUpgradeTooltip : UPDUserWidget {
	struct UPDTextBlock* T_RemainCoin; // 0x288(0x8)
	struct UPDTextBlock* T_GuideCase_01; // 0x290(0x8)
	struct UPDUnKnownMarketUpgradeItemSlot* UpgradeItem_2; // 0x298(0x8)
	struct UPDUnKnownMarketUpgradeItemSlot* UpgradeItem_3; // 0x2A0(0x8)
	struct UPDUnKnownMarketUpgradeItemSlot* UpgradeItem_4; // 0x2A8(0x8)
	struct UPDUnKnownMarketUpgradeItemSlot* UpgradeItem_5; // 0x2B0(0x8)
	struct UPDUnKnownMarketUpgradeItemSlot* UpgradeItem_6; // 0x2B8(0x8)
	struct TArray<struct UPDUnKnownMarketUpgradeItemSlot*> UpgradeItemList; // 0x2C0(0x10)
	struct UWidgetSwitcher* WS_ConditionCase; // 0x2D0(0x8)
	struct UWidgetSwitcher* WS_UpgradeGroup; // 0x2D8(0x8)
	struct UPDTextBlock* T_RemianLevel_ARMORY; // 0x2E0(0x8)
	struct UPDTextBlock* T_RemianLevel_ORDNANCE; // 0x2E8(0x8)
	struct UPDTextBlock* T_RemianLevel_TACTICAL; // 0x2F0(0x8)
	struct UPDTextBlock* T_RemianLevel_DEFENCE; // 0x2F8(0x8)
	struct UCanvasPanel* CP_MouseGuide; // 0x300(0x8)
	unsigned char UnknownData_308[0x0054]; // 0x308(0x54)
	bool UseMouseGuide; // 0x35C(0x1)
	unsigned char UnknownData_35D[0x0003]; // 0x35D(0x3)
};

// Class ProjectD.PDUnKnownMarketWeaponCategory
// Size : 0x2C0 (Inherited : 0x288)
struct UPDUnKnownMarketWeaponCategory : UPDUserWidget {
	unsigned char UnknownData_288[0x0010]; // 0x288(0x10)
	struct UPDTabButton* TabBtn_Category; // 0x298(0x8)
	struct FText InCategoryText; // 0x2A0(0x18)
	unsigned char UnknownData_2B8[0x0008]; // 0x2B8(0x8)

	void OnSelectCategory(); // Function ProjectD.PDUnKnownMarketWeaponCategory.OnSelectCategory // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C8DBE0
};

// Class ProjectD.PDUnKnownMarketWeaponPartSlot
// Size : 0x368 (Inherited : 0x288)
struct UPDUnKnownMarketWeaponPartSlot : UPDUserWidget {
	struct UWidgetSwitcher* WS_State; // 0x288(0x8)
	struct UWidgetSwitcher* WS_BgStyle; // 0x290(0x8)
	struct UImage* IMG_Icon; // 0x298(0x8)
	struct UImage* IMG_EmptyIcon; // 0x2A0(0x8)
	struct UImage* IMG_Icon_Lock; // 0x2A8(0x8)
	struct UImage* IMG_New; // 0x2B0(0x8)
	struct UImage* IMG_Highlight; // 0x2B8(0x8)
	struct UImage* IMG_NonUse; // 0x2C0(0x8)
	struct UVerticalBox* VB_MarketList; // 0x2C8(0x8)
	struct UPaperSprite* EmptyImageResource; // 0x2D0(0x8)
	struct FText PartProperty; // 0x2D8(0x18)
	struct UDragDropOperation* DragDropOperation; // 0x2F0(0x8)
	struct UCanvasPanel* CP_Blink; // 0x2F8(0x8)
	struct UImage* IMG_Highlight_Tutorial; // 0x300(0x8)
	unsigned char UnknownData_308[0x0050]; // 0x308(0x50)
	struct TArray<struct UPDUnKnownMarketPartListItem*> CurrentPartList; // 0x358(0x10)
};

// Class ProjectD.PDUnKnownWeaponStatProgress
// Size : 0x308 (Inherited : 0x288)
struct UPDUnKnownWeaponStatProgress : UPDUserWidget {
	struct UPDTextBlock* T_StatName; // 0x288(0x8)
	struct UPDTextBlock* T_Stat_Value; // 0x290(0x8)
	struct UCanvasPanel* CP_StatProgress; // 0x298(0x8)
	struct UCanvasPanel* CP_Stat_Dest; // 0x2A0(0x8)
	struct UProgressBar* PB_Stat_Dest; // 0x2A8(0x8)
	struct UCanvasPanel* CP_Stat_Src; // 0x2B0(0x8)
	struct UProgressBar* PB_Stat_Src; // 0x2B8(0x8)
	struct FText InStatName; // 0x2C0(0x18)
	unsigned char UnknownData_2D8[0x0030]; // 0x2D8(0x30)
};

// Class ProjectD.PDUpperAnimInstance
// Size : 0x5F0 (Inherited : 0x5F0)
struct UPDUpperAnimInstance : UPDPlayerAnimInstance {
	unsigned char bIsCrouching : 1; // 0x5E8(0x1)
};

// Class ProjectD.PDUtilFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UPDUtilFunctionLibrary : UBlueprintFunctionLibrary {

	struct FName GetHitReactionDirName(struct AActor* Actor, struct FVector HitDir, struct TMap<enum class EPDDirectionType, struct FName> DirNames, enum class EPDDirCalcMethodType Method, bool bForIncoming); // Function ProjectD.PDUtilFunctionLibrary.GetHitReactionDirName // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x74, 0x7FF653C8D340
	void GetDirectionalPortion_4Way(struct AActor* Actor, struct FVector HitDir, float ForwardPortion, float RightPortion, bool bForIncoming); // Function ProjectD.PDUtilFunctionLibrary.GetDirectionalPortion_4Way // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x1D, 0x7FF653C8D170
	void GetDirectionalPortion(struct AActor* Actor, struct FVector HitDir, float ForwardPortion, float RightPortion, bool bForIncoming); // Function ProjectD.PDUtilFunctionLibrary.GetDirectionalPortion // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x1D, 0x7FF653C8CFA0
	enum class EPDDirectionType GetDirection_Simple(struct AActor* Actor, struct FVector HitDir, enum class EPDDirCalcMethodType Method, bool bForIncoming); // Function ProjectD.PDUtilFunctionLibrary.GetDirection_Simple // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x17, 0x7FF653C8CE60
};

// Class ProjectD.PDWebBrowser
// Size : 0x150 (Inherited : 0x150)
struct UPDWebBrowser : UWebBrowser {

	void ReleaseWebBrowser(); // Function ProjectD.PDWebBrowser.ReleaseWebBrowser // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF653C8DCD0
	void RefreshInputMethod(); // Function ProjectD.PDWebBrowser.RefreshInputMethod // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF653C8DCB0
};

// Class ProjectD.PDWebButton
// Size : 0xC58 (Inherited : 0xC50)
struct UPDWebButton : UPDButton {
	int32_t WIC_Id; // 0xC50(0x4)
	unsigned char UnknownData_C54[0x0004]; // 0xC54(0x4)
};

// Class ProjectD.PDWebPopupUI
// Size : 0x2F8 (Inherited : 0x2D0)
struct UPDWebPopupUI : UPDOKPopupUI {
	struct UPDWebBrowser* WB_WebPage; // 0x2D0(0x8)
	struct UPDTextBlock* TB_Title; // 0x2D8(0x8)
	struct USizeBox* SB_SizeClamper; // 0x2E0(0x8)
	struct FString WebURL; // 0x2E8(0x10)

	void OpenWebPage(); // Function ProjectD.PDWebPopupUI.OpenWebPage // (Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
	void CloseWebPage(); // Function ProjectD.PDWebPopupUI.CloseWebPage // (Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
};

// Class ProjectD.PDWebTermsOfServicePopupUI
// Size : 0x330 (Inherited : 0x2F8)
struct UPDWebTermsOfServicePopupUI : UPDOKCancelPopupUI {
	struct UPDWebBrowser* WB_WebPage; // 0x2F8(0x8)
	struct USizeBox* SB_SizeClamper; // 0x300(0x8)
	struct UCheckBox* CB_TermsOfService; // 0x308(0x8)
	struct UPDButton* Btn_TermsOfService; // 0x310(0x8)
	struct FString WebURL; // 0x318(0x10)
	unsigned char UnknownData_328[0x0008]; // 0x328(0x8)

	void OpenTermsWebPage(); // Function ProjectD.PDWebTermsOfServicePopupUI.OpenTermsWebPage // (Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
	void OnToggleTermsOfServiceChanged(bool Val); // Function ProjectD.PDWebTermsOfServicePopupUI.OnToggleTermsOfServiceChanged // (Final|Native|Protected) // Param Size : 0x1, 0x7FF653C8DC20
	void OnTermsOfServiceBtn(); // Function ProjectD.PDWebTermsOfServicePopupUI.OnTermsOfServiceBtn // (Final|Native|Protected) // Param Size : 0x0, 0x7FF653C8DC00
	void CloseTermaWebPage(); // Function ProjectD.PDWebTermsOfServicePopupUI.CloseTermaWebPage // (Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
};

// Class ProjectD.PDWorldBoundaryChecker
// Size : 0x278 (Inherited : 0x220)
struct APDWorldBoundaryChecker : AActor {
	struct FBox AdjustValue; // 0x220(0x1C)
	struct FBox ResultBound; // 0x23C(0x1C)
	struct FBox BoundToTest; // 0x258(0x1C)
	unsigned char UnknownData_274[0x0004]; // 0x274(0x4)
};

// Class ProjectD.PDWorldMapUI
// Size : 0x2B0 (Inherited : 0x288)
struct UPDWorldMapUI : UPDUserWidget {
	struct UPDGameMapModule* GameMap; // 0x288(0x8)
	float ZoomScaleMin; // 0x290(0x4)
	float ZoomScaleMax; // 0x294(0x4)
	float ZoomScaleStep; // 0x298(0x4)
	unsigned char UnknownData_29C[0x0014]; // 0x29C(0x14)
};

// Class ProjectD.PDWorldMessageUI
// Size : 0x2F0 (Inherited : 0x290)
struct UPDWorldMessageUI : UPDIngameModeWidget {
	unsigned char UnknownData_290[0x0008]; // 0x290(0x8)
	struct UCanvasPanel* CP_Text; // 0x298(0x8)
	struct UPDTextBlock* TB_Text; // 0x2A0(0x8)
	struct UCanvasPanel* CP_Count; // 0x2A8(0x8)
	struct UPDTextBlock* TB_Count; // 0x2B0(0x8)
	struct UPDTextBlock* TB_CountDesc; // 0x2B8(0x8)
	struct UCanvasPanel* CP_Mission; // 0x2C0(0x8)
	struct UPDTextBlock* TB_MissionText; // 0x2C8(0x8)
	struct UCanvasPanel* CP_Alarm; // 0x2D0(0x8)
	struct UPDTextBlock* TB_AlarmText; // 0x2D8(0x8)
	float DefaultTextDuration; // 0x2E0(0x4)
	unsigned char UnknownData_2E4[0x000C]; // 0x2E4(0xC)
};

// Class ProjectD.PDZipLine
// Size : 0x3C0 (Inherited : 0x220)
struct APDZipLine : AActor {
	unsigned char UnknownData_220[0x0060]; // 0x220(0x60)
	uint32_t ZiplineIndex; // 0x280(0x4)
	bool bItemToActive; // 0x284(0x1)
	bool bItemToUse; // 0x285(0x1)
	unsigned char UnknownData_286[0x0002]; // 0x286(0x2)
	float PathMovementVelocity; // 0x288(0x4)
	unsigned char UnknownData_28C[0x00BC]; // 0x28C(0xBC)
	struct UPDSplineComponent* SplineComp; // 0x348(0x8)
	struct USplineMeshComponent* SplineMeshComp; // 0x350(0x8)
	struct UStaticMeshComponent* EntryMesh; // 0x358(0x8)
	struct UArrowComponent* EntryInteractArrow; // 0x360(0x8)
	struct UStaticMeshComponent* ExitMesh; // 0x368(0x8)
	struct UArrowComponent* ExitInteractArrow; // 0x370(0x8)
	struct UStaticMeshComponent* SubEntryMesh; // 0x378(0x8)
	struct UStaticMeshComponent* SubExitMesh; // 0x380(0x8)
	struct UStaticMeshComponent* EntryPulley; // 0x388(0x8)
	struct UStaticMeshComponent* ExitPulley; // 0x390(0x8)
	struct UBoxComponent* EntryTriggerBox; // 0x398(0x8)
	struct UBoxComponent* ExitTriggerBox; // 0x3A0(0x8)
	unsigned char UnknownData_3A8[0x0018]; // 0x3A8(0x18)

	void OnExitTriggerEndOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function ProjectD.PDZipLine.OnExitTriggerEndOverlap // (Final|Native|Public) // Param Size : 0x1C, 0x7FF653C8DAA0
	void OnExitTriggerBeginOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function ProjectD.PDZipLine.OnExitTriggerBeginOverlap // (Final|Native|Public|HasOutParms) // Param Size : 0xA8, 0x7FF653C8D8B0
	void OnEntryTriggerEndOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function ProjectD.PDZipLine.OnEntryTriggerEndOverlap // (Final|Native|Public) // Param Size : 0x1C, 0x7FF653C8D770
	void OnEntryTriggerBeginOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function ProjectD.PDZipLine.OnEntryTriggerBeginOverlap // (Final|Native|Public|HasOutParms) // Param Size : 0xA8, 0x7FF653C8D580
};

// Class ProjectD.TurningAnimNotifyState
// Size : 0x38 (Inherited : 0x30)
struct UTurningAnimNotifyState : UAnimNotifyState {
	struct UAnimMontage* Montage; // 0x30(0x8)
};

// Class ProjectD.TurnInPlaceAnimNotifyState
// Size : 0x48 (Inherited : 0x30)
struct UTurnInPlaceAnimNotifyState : UAnimNotifyState {
	struct UCurveFloat* RotationCurveAsset; // 0x30(0x8)
	struct UCurveFloat* RotationCurveAsset_Mirror; // 0x38(0x8)
	bool bIsRightTurn; // 0x40(0x1)
	unsigned char UnknownData_41[0x0007]; // 0x41(0x7)
};

// Class ProjectD.UPDNSpringArmComponent
// Size : 0x2A0 (Inherited : 0x280)
struct UUPDNSpringArmComponent : USpringArmComponent {
	unsigned char UnknownData_280[0x0020]; // 0x280(0x20)
};

