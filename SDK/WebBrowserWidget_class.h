// Class WebBrowserWidget.WebBrowser
// Size : 0x150 (Inherited : 0x108)
struct UWebBrowser : UWidget {
	struct FMulticastInlineDelegate OnUrlChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnBeforePopup; // 0x118(0x10)
	struct FString InitialURL; // 0x128(0x10)
	bool bSupportsTransparency; // 0x138(0x1)
	unsigned char UnknownData_139[0x0017]; // 0x139(0x17)

	void OnUrlChanged__DelegateSignature(struct FText Text); // DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // Param Size : 0x18, 0x7FF653FAFDF0
	void OnBeforePopup__DelegateSignature(struct FString URL, struct FString Frame); // DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature // (MulticastDelegate|Public|Delegate) // Param Size : 0x20, 0x7FF653FAFDF0
	void LoadURL(struct FString NewURL); // Function WebBrowserWidget.WebBrowser.LoadURL // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF65313C660
	void LoadString(struct FString Contents, struct FString DummyURL); // Function WebBrowserWidget.WebBrowser.LoadString // (Final|Native|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF65313C4F0
	struct FString GetUrl(); // Function WebBrowserWidget.WebBrowser.GetUrl // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF65313C470
	struct FText GetTitleText(); // Function WebBrowserWidget.WebBrowser.GetTitleText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF65313C3D0
	void ExecuteJavascript(struct FString ScriptText); // Function WebBrowserWidget.WebBrowser.ExecuteJavascript // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF65313C330
};

// Class WebBrowserWidget.WebBrowserAssetManager
// Size : 0x78 (Inherited : 0x28)
struct UWebBrowserAssetManager : UObject {
	struct TSoftObjectPtr<struct UMaterial> DefaultMaterial; // 0x28(0x28)
	unsigned char UnknownData_50[0x0028]; // 0x50(0x28)
};

