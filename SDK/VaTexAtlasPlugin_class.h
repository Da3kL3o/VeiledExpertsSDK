// Class VaTexAtlasPlugin.VtaPluginFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UVtaPluginFunctionLibrary : UBlueprintFunctionLibrary {

	void DrawSlateTexture9Slice(struct AHUD* Target, struct UVtaSlateTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, float MarginLeft, float MarginTop, float MarginRight, float MarginBottom, float OriginalWidth, float OriginalHeight, struct FLinearColor Tint, enum class EBlendMode BlendMode); // Function VaTexAtlasPlugin.VtaPluginFunctionLibrary.DrawSlateTexture9Slice // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x59, 0x7FF653163710
	void DrawSlateTexture(struct AHUD* Target, struct UVtaSlateTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, struct FLinearColor Tint, enum class EBlendMode BlendMode, float Scale, bool bScalePosition, float Rotation, struct FVector2D RotPivot, bool bFlipX, bool bFlipY); // Function VaTexAtlasPlugin.VtaPluginFunctionLibrary.DrawSlateTexture // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x5A, 0x7FF653163BE0
	struct FSlateBrush CopyBrushWithSlateTexture(struct UVtaSlateTexture* Texture, struct FSlateBrush SourceBrush); // Function VaTexAtlasPlugin.VtaPluginFunctionLibrary.CopyBrushWithSlateTexture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x118, 0x7FF653163430
};

// Class VaTexAtlasPlugin.VtaSlateTexture
// Size : 0x48 (Inherited : 0x28)
struct UVtaSlateTexture : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	struct UTexture* AtlasTexture; // 0x30(0x8)
	struct FVector2D StartUV; // 0x38(0x8)
	struct FVector2D SizeUV; // 0x40(0x8)

	struct FVector2D GetDimensions(); // Function VaTexAtlasPlugin.VtaSlateTexture.GetDimensions // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF6531640B0
	struct UVtaSlateTexture* CreateRegion(struct FMargin Margin); // Function VaTexAtlasPlugin.VtaSlateTexture.CreateRegion // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x18, 0x7FF653163660
};

